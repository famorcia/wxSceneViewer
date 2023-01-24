///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 3.10.1-0-g8feb16b3)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "../src/Gui.h"

///////////////////////////////////////////////////////////////////////////

wxSceneViewer::wxSceneViewer( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	menu_bar = new wxMenuBar( 0 );
	menu_file = new wxMenu();
	wxMenuItem* menu_file_open;
	menu_file_open = new wxMenuItem( menu_file, wxID_OPEN, wxString( wxT("Open") ) , wxEmptyString, wxITEM_NORMAL );
	menu_file->Append( menu_file_open );

	wxMenuItem* menu_file_exit;
	menu_file_exit = new wxMenuItem( menu_file, wxID_EXIT, wxString( wxT("Exit") ) , wxEmptyString, wxITEM_NORMAL );
	menu_file->Append( menu_file_exit );

	menu_bar->Append( menu_file, wxT("File") );

	menu_edit = new wxMenu();
	menu_bar->Append( menu_edit, wxT("Edit") );

	menu_viewing = new wxMenu();
	menu_bar->Append( menu_viewing, wxT("Viewing") );

	selection = new wxMenu();
	menu_bar->Append( selection, wxT("Selection") );

	editors = new wxMenu();
	menu_bar->Append( editors, wxT("Editors") );

	manips = new wxMenu();
	menu_bar->Append( manips, wxT("Manips") );

	lights = new wxMenu();
	menu_bar->Append( lights, wxT("Lights") );

	help = new wxMenu();
	wxMenuItem* mene_help_about;
	mene_help_about = new wxMenuItem( help, wxID_ABOUT, wxString( wxT("About") ) , wxEmptyString, wxITEM_NORMAL );
	help->Append( mene_help_about );

	menu_bar->Append( help, wxT("Help") );

	this->SetMenuBar( menu_bar );

	status_bar = this->CreateStatusBar( 1, wxSTB_SIZEGRIP, wxID_ANY );
	wxGridSizer* sizer;
	sizer = new wxGridSizer( 0, 1, 0, 0 );

	panel = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	sizer->Add( panel, 1, wxEXPAND | wxALL, 5 );


	this->SetSizer( sizer );
	this->Layout();

	this->Centre( wxBOTH );
}

wxSceneViewer::~wxSceneViewer()
{
}
