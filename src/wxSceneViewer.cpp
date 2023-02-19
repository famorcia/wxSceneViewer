/**************************************************************************\
 * BSD 3-Clause License
 *
 * Copyright (c) 2022, Fabrizio Morciano
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice, this
 * list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 * this list of conditions and the following disclaimer in the documentation
 * and/or other materials provided with the distribution.
 *
 * 3. Neither the name of the copyright holder nor the names of its
 * contributors may be used to endorse or promote products derived from
 * this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
\**************************************************************************/

#include "wxSceneViewer.h"
#include "wx/wx.h"
#include "Inventor/Wx/SoWx.h"
#include "Inventor/SoInput.h"
#include "Inventor/nodes/SoSeparator.h"

wxBEGIN_EVENT_TABLE(wxSceneViewer, wxFrame)
wxEND_EVENT_TABLE()

wxSceneViewer::wxSceneViewer(wxWindow* parent,
                             wxWindowID id,
                             const wxString& title,
                             const wxPoint& pos,
                             const wxSize& size,
                             long style) :
        wxSceneViewerInterface( parent,
                                id,
                                title,
                                pos,
                                size,
                                style) {


    Bind(wxEVT_MENU, &wxSceneViewer::onAbout, this, wxID_ABOUT);
    Bind(wxEVT_MENU, &wxSceneViewer::onExit, this, wxID_EXIT);
    Bind(wxEVT_MENU, &wxSceneViewer::onOpen, this, wxID_OPEN);

    SoWx::init(parent);
    examinerViewer = new SoWxExaminerViewer(panel);
    examinerViewer->show();
}

void wxSceneViewer::onExit(wxCommandEvent& event)
{
    Close(true);
    SoWx::done();
}

void wxSceneViewer::onAbout(wxCommandEvent& event)
{
    wxMessageBox("wxSceneViewer a wxWidgets porting\n"
                 "and extension of SceneViewer\n"
                 "SGI (c) Open Inventor tool.",
                 "About wxSceneViewer",
                 wxOK | wxICON_INFORMATION);
}

void wxSceneViewer::onOpen(wxCommandEvent &event) {
    /*
    if (...current content has not been saved...)
    {
        if (wxMessageBox(_("Current content has not been saved! Proceed?"), _("Please confirm"),
                         wxICON_QUESTION | wxYES_NO, this) == wxNO )
            return;
        //else: proceed asking to the user the new file to open
    }
     */

    wxFileDialog
            openFileDialog(this, _("Open IV file"), "", "",
                           "Open Inventor files (*.iv)|*.iv", wxFD_OPEN|wxFD_FILE_MUST_EXIST);
    if (openFileDialog.ShowModal() == wxID_CANCEL)
        return;     // the user changed idea...

    SoInput myInput;
    if (myInput.openFile(openFileDialog.GetPath().c_str())) {
        SoSeparator *iv_data = SoDB::readAll(&myInput);
        examinerViewer->setSceneGraph(iv_data);
    } else {
        wxMessageBox(openFileDialog.GetPath().c_str(),
                     "Load error",
                     wxOK | wxICON_ERROR);
    }

    
        /*
    // proceed loading the file chosen by the user;
    // this can be done with e.g. wxWidgets input streams:
    wxFileInputStream input_stream(openFileDialog.GetPath());
    if (!input_stream.IsOk())
    {
        wxLogError("Cannot open file '%s'.", openFileDialog.GetPath());
        return;
    }
         */
}
