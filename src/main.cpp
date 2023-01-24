#include "Gui.h"

#include <wx/app.h>

// Define a new application type
class MyApp : public wxApp
{
public:
    virtual bool OnInit() {
        if ( !wxApp::OnInit() )
            return false;        
        wxWindow * data = new wxSceneViewer(0);
        data->Show();
        return true;
    }
};



wxIMPLEMENT_APP(MyApp);

