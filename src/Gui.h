///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 3.10.1-0-g8feb16b3)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/string.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/menu.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/statusbr.h>
#include <wx/panel.h>
#include <wx/sizer.h>
#include <wx/frame.h>

///////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
/// Class wxSceneViewer
///////////////////////////////////////////////////////////////////////////////
class wxSceneViewer : public wxFrame
{
	private:

	protected:
		wxMenuBar* menu_bar;
		wxMenu* menu_file;
		wxMenu* menu_edit;
		wxMenu* menu_viewing;
		wxMenu* selection;
		wxMenu* editors;
		wxMenu* manips;
		wxMenu* lights;
		wxMenu* help;
		wxStatusBar* status_bar;
		wxPanel* panel;

	public:

		wxSceneViewer( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("wxSceneViewer"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,300 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~wxSceneViewer();

};

