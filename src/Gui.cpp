///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Oct 26 2018)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "../src/Gui.h"

///////////////////////////////////////////////////////////////////////////

wxSceneViewerInterface::wxSceneViewerInterface( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	menu_bar = new wxMenuBar( 0 );
	menu_file = new wxMenu();
	wxMenuItem* menu_file_new;
	menu_file_new = new wxMenuItem( menu_file, wxID_ANY, wxString( wxT("New") ) + wxT('\t') + wxT("Alt+n"), wxEmptyString, wxITEM_NORMAL );
	menu_file->Append( menu_file_new );

	wxMenuItem* menu_file_open;
	menu_file_open = new wxMenuItem( menu_file, wxID_OPEN, wxString( wxT("Open...") ) + wxT('\t') + wxT("Alt+o"), wxEmptyString, wxITEM_NORMAL );
	menu_file->Append( menu_file_open );

	wxMenuItem* menu_file_import;
	menu_file_import = new wxMenuItem( menu_file, wxID_ANY, wxString( wxT("Import...") ) + wxT('\t') + wxT("Alt+i"), wxEmptyString, wxITEM_NORMAL );
	menu_file->Append( menu_file_import );

	wxMenuItem* menu_file_save;
	menu_file_save = new wxMenuItem( menu_file, wxID_SAVE, wxString( wxT("Save") ) + wxT('\t') + wxT("Alt+s"), wxEmptyString, wxITEM_NORMAL );
	menu_file->Append( menu_file_save );

	wxMenuItem* menu_file_save_as;
	menu_file_save_as = new wxMenuItem( menu_file, wxID_SAVEAS, wxString( wxT("Save As...") ) + wxT('\t') + wxT("Alt+S"), wxEmptyString, wxITEM_NORMAL );
	menu_file->Append( menu_file_save_as );

	menu_file->AppendSeparator();

	wxMenuItem* menu_file_read_env;
	menu_file_read_env = new wxMenuItem( menu_file, wxID_ANY, wxString( wxT("Read Environment..") ) , wxEmptyString, wxITEM_NORMAL );
	menu_file->Append( menu_file_read_env );

	wxMenuItem* menu_file_save_env;
	menu_file_save_env = new wxMenuItem( menu_file, wxID_ANY, wxString( wxT("Save Environment..") ) , wxEmptyString, wxITEM_NORMAL );
	menu_file->Append( menu_file_save_env );

	menu_file->AppendSeparator();

	wxMenuItem* menu_file_print;
	menu_file_print = new wxMenuItem( menu_file, wxID_PRINT, wxString( wxT("Print...") ) + wxT('\t') + wxT("Alt+p"), wxEmptyString, wxITEM_NORMAL );
	menu_file->Append( menu_file_print );

	wxMenuItem* menu_file_exit;
	menu_file_exit = new wxMenuItem( menu_file, wxID_EXIT, wxString( wxT("Quit") ) + wxT('\t') + wxT("Alt+q"), wxEmptyString, wxITEM_NORMAL );
	menu_file->Append( menu_file_exit );

	menu_bar->Append( menu_file, wxT("File") );

	menu_edit = new wxMenu();
	wxMenuItem* menu_edit_pick_parent;
	menu_edit_pick_parent = new wxMenuItem( menu_edit, wxID_ANY, wxString( wxT("Pick Parent") ) , wxEmptyString, wxITEM_NORMAL );
	menu_edit->Append( menu_edit_pick_parent );

	wxMenuItem* menu_edit_pick_all;
	menu_edit_pick_all = new wxMenuItem( menu_edit, wxID_ANY, wxString( wxT("Pick All") ) + wxT('\t') + wxT("Alt+a"), wxEmptyString, wxITEM_NORMAL );
	menu_edit->Append( menu_edit_pick_all );

	menu_edit->AppendSeparator();

	wxMenuItem* menu_edit_cut;
	menu_edit_cut = new wxMenuItem( menu_edit, wxID_CUT, wxString( wxT("Cut") ) + wxT('\t') + wxT("Alt+x"), wxEmptyString, wxITEM_NORMAL );
	menu_edit->Append( menu_edit_cut );

	wxMenuItem* menu_edit_copy;
	menu_edit_copy = new wxMenuItem( menu_edit, wxID_COPY, wxString( wxT("Copy") ) + wxT('\t') + wxT("Alt+c"), wxEmptyString, wxITEM_NORMAL );
	menu_edit->Append( menu_edit_copy );

	wxMenuItem* menu_edit_paste;
	menu_edit_paste = new wxMenuItem( menu_edit, wxID_ANY, wxString( wxT("Paste") ) + wxT('\t') + wxT("Alt+v"), wxEmptyString, wxITEM_NORMAL );
	menu_edit->Append( menu_edit_paste );

	wxMenuItem* menu_edit_delete;
	menu_edit_delete = new wxMenuItem( menu_edit, wxID_DELETE, wxString( wxT("Delete") ) , wxEmptyString, wxITEM_NORMAL );
	menu_edit->Append( menu_edit_delete );

	menu_bar->Append( menu_edit, wxT("Edit") );

	menu_viewing = new wxMenu();
	wxMenuItem* menu_viewing_pick_edit;
	menu_viewing_pick_edit = new wxMenuItem( menu_viewing, wxID_ANY, wxString( wxT("Pick/Edit") ) , wxEmptyString, wxITEM_NORMAL );
	menu_viewing->Append( menu_viewing_pick_edit );

	wxMenuItem* menu_viewing_examiner;
	menu_viewing_examiner = new wxMenuItem( menu_viewing, wxID_ANY, wxString( wxT("Examiner") ) , wxEmptyString, wxITEM_NORMAL );
	menu_viewing->Append( menu_viewing_examiner );

	wxMenuItem* menu_viewing_fly;
	menu_viewing_fly = new wxMenuItem( menu_viewing, wxID_ANY, wxString( wxT("Fly") ) , wxEmptyString, wxITEM_NORMAL );
	menu_viewing->Append( menu_viewing_fly );

	wxMenuItem* menu_viewing_walk;
	menu_viewing_walk = new wxMenuItem( menu_viewing, wxID_ANY, wxString( wxT("Walk") ) , wxEmptyString, wxITEM_NORMAL );
	menu_viewing->Append( menu_viewing_walk );

	wxMenuItem* menu_viewing_plane;
	menu_viewing_plane = new wxMenuItem( menu_viewing, wxID_ANY, wxString( wxT("Plane") ) , wxEmptyString, wxITEM_NORMAL );
	menu_viewing->Append( menu_viewing_plane );

	menu_viewing->AppendSeparator();

	wxMenuItem* menu_viewing_view_selection;
	menu_viewing_view_selection = new wxMenuItem( menu_viewing, wxID_ANY, wxString( wxT("View Selection") ) , wxEmptyString, wxITEM_NORMAL );
	menu_viewing->Append( menu_viewing_view_selection );

	wxMenuItem* menu_viewing_fog;
	menu_viewing_fog = new wxMenuItem( menu_viewing, wxID_ANY, wxString( wxT("Fog") ) , wxEmptyString, wxITEM_NORMAL );
	menu_viewing->Append( menu_viewing_fog );

	wxMenuItem* menu_viewing_antialiasing;
	menu_viewing_antialiasing = new wxMenuItem( menu_viewing, wxID_ANY, wxString( wxT("Antialiasing") ) , wxEmptyString, wxITEM_NORMAL );
	menu_viewing->Append( menu_viewing_antialiasing );

	menu_viewing->AppendSeparator();

	wxMenuItem* menu_viewing_screen_door_transparency;
	menu_viewing_screen_door_transparency = new wxMenuItem( menu_viewing, wxID_ANY, wxString( wxT("Screen Door Transparency") ) , wxEmptyString, wxITEM_NORMAL );
	menu_viewing->Append( menu_viewing_screen_door_transparency );

	wxMenuItem* menu_viewing_blended_transparency;
	menu_viewing_blended_transparency = new wxMenuItem( menu_viewing, wxID_ANY, wxString( wxT("Blended Transparency") ) , wxEmptyString, wxITEM_NORMAL );
	menu_viewing->Append( menu_viewing_blended_transparency );

	wxMenuItem* menu_viewing_delayed_blended_transparency;
	menu_viewing_delayed_blended_transparency = new wxMenuItem( menu_viewing, wxID_ANY, wxString( wxT("Delayed Blended Transparency") ) , wxEmptyString, wxITEM_NORMAL );
	menu_viewing->Append( menu_viewing_delayed_blended_transparency );

	wxMenuItem* menu_viewing_sort_blended_transparency;
	menu_viewing_sort_blended_transparency = new wxMenuItem( menu_viewing, wxID_ANY, wxString( wxT("Sort Blended Transparency") ) , wxEmptyString, wxITEM_NORMAL );
	menu_viewing->Append( menu_viewing_sort_blended_transparency );

	menu_viewing->AppendSeparator();

	wxMenuItem* menu_viewing_edit_background_color;
	menu_viewing_edit_background_color = new wxMenuItem( menu_viewing, wxID_ANY, wxString( wxT("Edit Background Color...") ) , wxEmptyString, wxITEM_NORMAL );
	menu_viewing->Append( menu_viewing_edit_background_color );

	menu_bar->Append( menu_viewing, wxT("Viewing") );

	menu_selection = new wxMenu();
	wxMenuItem* m_menuItem32;
	m_menuItem32 = new wxMenuItem( menu_selection, wxID_ANY, wxString( wxT("Single Selection") ) , wxEmptyString, wxITEM_NORMAL );
	menu_selection->Append( m_menuItem32 );

	wxMenuItem* m_menuItem33;
	m_menuItem33 = new wxMenuItem( menu_selection, wxID_ANY, wxString( wxT("Toggle Selection") ) , wxEmptyString, wxITEM_NORMAL );
	menu_selection->Append( m_menuItem33 );

	wxMenuItem* m_menuItem34;
	m_menuItem34 = new wxMenuItem( menu_selection, wxID_ANY, wxString( wxT("Shift Selection") ) , wxEmptyString, wxITEM_NORMAL );
	menu_selection->Append( m_menuItem34 );

	menu_bar->Append( menu_selection, wxT("Selection") );

	menu_editors = new wxMenu();
	wxMenuItem* m_menuItem35;
	m_menuItem35 = new wxMenuItem( menu_editors, wxID_ANY, wxString( wxT("Material Editor...") ) , wxEmptyString, wxITEM_NORMAL );
	menu_editors->Append( m_menuItem35 );

	wxMenuItem* m_menuItem36;
	m_menuItem36 = new wxMenuItem( menu_editors, wxID_ANY, wxString( wxT("Color Editor...") ) , wxEmptyString, wxITEM_NORMAL );
	menu_editors->Append( m_menuItem36 );

	wxMenuItem* m_menuItem37;
	m_menuItem37 = new wxMenuItem( menu_editors, wxID_ANY, wxString( wxT("Transform Sliders...") ) , wxEmptyString, wxITEM_NORMAL );
	menu_editors->Append( m_menuItem37 );

	menu_bar->Append( menu_editors, wxT("Editors") );

	menu_manips = new wxMenu();
	wxMenuItem* m_menuItem38;
	m_menuItem38 = new wxMenuItem( menu_manips, wxID_ANY, wxString( wxT("Transformer") ) , wxEmptyString, wxITEM_NORMAL );
	menu_manips->Append( m_menuItem38 );

	wxMenuItem* m_menuItem39;
	m_menuItem39 = new wxMenuItem( menu_manips, wxID_ANY, wxString( wxT("Trackball") ) , wxEmptyString, wxITEM_NORMAL );
	menu_manips->Append( m_menuItem39 );

	wxMenuItem* m_menuItem40;
	m_menuItem40 = new wxMenuItem( menu_manips, wxID_ANY, wxString( wxT("HandleBox") ) , wxEmptyString, wxITEM_NORMAL );
	menu_manips->Append( m_menuItem40 );

	wxMenuItem* m_menuItem41;
	m_menuItem41 = new wxMenuItem( menu_manips, wxID_ANY, wxString( wxT("Jack") ) , wxEmptyString, wxITEM_NORMAL );
	menu_manips->Append( m_menuItem41 );

	wxMenuItem* m_menuItem42;
	m_menuItem42 = new wxMenuItem( menu_manips, wxID_ANY, wxString( wxT("Centerball") ) , wxEmptyString, wxITEM_NORMAL );
	menu_manips->Append( m_menuItem42 );

	wxMenuItem* m_menuItem43;
	m_menuItem43 = new wxMenuItem( menu_manips, wxID_ANY, wxString( wxT("TransformBox") ) , wxEmptyString, wxITEM_NORMAL );
	menu_manips->Append( m_menuItem43 );

	wxMenuItem* m_menuItem44;
	m_menuItem44 = new wxMenuItem( menu_manips, wxID_ANY, wxString( wxT("TabBox") ) , wxEmptyString, wxITEM_NORMAL );
	menu_manips->Append( m_menuItem44 );

	wxMenuItem* m_menuItem45;
	m_menuItem45 = new wxMenuItem( menu_manips, wxID_ANY, wxString( wxT("None") ) , wxEmptyString, wxITEM_NORMAL );
	menu_manips->Append( m_menuItem45 );

	menu_manips->AppendSeparator();

	wxMenuItem* m_menuItem46;
	m_menuItem46 = new wxMenuItem( menu_manips, wxID_ANY, wxString( wxT("Replace") ) , wxEmptyString, wxITEM_NORMAL );
	menu_manips->Append( m_menuItem46 );

	menu_bar->Append( menu_manips, wxT("Manips") );

	menu_lights = new wxMenu();
	wxMenuItem* menu_lights_create_dir_light;
	menu_lights_create_dir_light = new wxMenuItem( menu_lights, wxID_ANY, wxString( wxT("Create Dir Light") ) , wxEmptyString, wxITEM_NORMAL );
	menu_lights->Append( menu_lights_create_dir_light );

	wxMenuItem* menu_lights_create_point_light;
	menu_lights_create_point_light = new wxMenuItem( menu_lights, wxID_ANY, wxString( wxT("Create Point Light") ) , wxEmptyString, wxITEM_NORMAL );
	menu_lights->Append( menu_lights_create_point_light );

	wxMenuItem* menu_lights_create_spot_light;
	menu_lights_create_spot_light = new wxMenuItem( menu_lights, wxID_ANY, wxString( wxT("Create Spot Light") ) , wxEmptyString, wxITEM_NORMAL );
	menu_lights->Append( menu_lights_create_spot_light );

	menu_lights->AppendSeparator();

	wxMenuItem* menu_lights_ambient_light;
	menu_lights_ambient_light = new wxMenuItem( menu_lights, wxID_ANY, wxString( wxT("Ambient Light") ) , wxEmptyString, wxITEM_NORMAL );
	menu_lights->Append( menu_lights_ambient_light );

	menu_lights->AppendSeparator();

	wxMenuItem* menu_lights_turn_all_on;
	menu_lights_turn_all_on = new wxMenuItem( menu_lights, wxID_ANY, wxString( wxT("Turn all ON") ) , wxEmptyString, wxITEM_NORMAL );
	menu_lights->Append( menu_lights_turn_all_on );

	wxMenuItem* menu_lights_turn_all_off;
	menu_lights_turn_all_off = new wxMenuItem( menu_lights, wxID_ANY, wxString( wxT("Turn all OFF") ) , wxEmptyString, wxITEM_NORMAL );
	menu_lights->Append( menu_lights_turn_all_off );

	wxMenuItem* menu_lights_show_all_icons;
	menu_lights_show_all_icons = new wxMenuItem( menu_lights, wxID_ANY, wxString( wxT("Show all Icons") ) , wxEmptyString, wxITEM_NORMAL );
	menu_lights->Append( menu_lights_show_all_icons );

	wxMenuItem* menu_lights_hide_all_icons;
	menu_lights_hide_all_icons = new wxMenuItem( menu_lights, wxID_ANY, wxString( wxT("Hide all Icons") ) , wxEmptyString, wxITEM_NORMAL );
	menu_lights->Append( menu_lights_hide_all_icons );

	menu_lights->AppendSeparator();

	menu_lights_sub_headlight = new wxMenu();
	wxMenuItem* menu_lights_sub_headlightItem = new wxMenuItem( menu_lights, wxID_ANY, wxT("HeadLight"), wxEmptyString, wxITEM_NORMAL, menu_lights_sub_headlight );
	wxMenuItem* menu_lights_sub_headlight_on_off;
	menu_lights_sub_headlight_on_off = new wxMenuItem( menu_lights_sub_headlight, wxID_ANY, wxString( wxT("On/Off") ) , wxEmptyString, wxITEM_NORMAL );
	menu_lights_sub_headlight->Append( menu_lights_sub_headlight_on_off );

	wxMenuItem* menu_lights_sub_headlight_edit;
	menu_lights_sub_headlight_edit = new wxMenuItem( menu_lights_sub_headlight, wxID_EDIT, wxString( wxT("Edit") ) , wxEmptyString, wxITEM_NORMAL );
	menu_lights_sub_headlight->Append( menu_lights_sub_headlight_edit );

	menu_lights->Append( menu_lights_sub_headlightItem );

	menu_bar->Append( menu_lights, wxT("Lights") );

	menu_help = new wxMenu();
	wxMenuItem* menu_help_help;
	menu_help_help = new wxMenuItem( menu_help, wxID_HELP, wxString( wxT("Help") ) , wxEmptyString, wxITEM_NORMAL );
	menu_help->Append( menu_help_help );

	menu_help->AppendSeparator();

	wxMenuItem* menu_help_about;
	menu_help_about = new wxMenuItem( menu_help, wxID_ABOUT, wxString( wxT("About") ) , wxEmptyString, wxITEM_NORMAL );
	menu_help->Append( menu_help_about );

	menu_bar->Append( menu_help, wxT("Help") );

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

wxSceneViewerInterface::~wxSceneViewerInterface()
{
}
