// -*- C++ -*-
//
// generated by wxGlade
//
// Example for compiling a single file project under Linux using g++:
//  g++ MyApp.cpp $(wx-config --libs) $(wx-config --cxxflags) -o MyApp
//
// Example for compiling a multi file project under Linux using g++:
//  g++ main.cpp $(wx-config --libs) $(wx-config --cxxflags) -o MyApp Dialog1.cpp Frame1.cpp
//

#include "BasesEtc.h"

// begin wxGlade: ::extracode
// end wxGlade



MyFrame::MyFrame(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style):
    wxFrame(parent, id, title, pos, size, wxDEFAULT_FRAME_STYLE)
{
    // begin wxGlade: MyFrame::MyFrame
    SetSize(wxSize(400, 300));
    SetTitle(wxT("frame"));
    frame_menubar = new wxMenuBar();
    SetMenuBar(frame_menubar);
    frame_statusbar = CreateStatusBar(1);
    int frame_statusbar_widths[] = { -1 };
    frame_statusbar->SetStatusWidths(1, frame_statusbar_widths);
    
    // statusbar fields
    const wxString frame_statusbar_fields[] = {
        wxT("frame_statusbar"),
    };
    for(int i = 0; i < frame_statusbar->GetFieldsCount(); ++i) {
        frame_statusbar->SetStatusText(frame_statusbar_fields[i], i);
    }
    frame_toolbar = new wxToolBar(this, -1);
    SetToolBar(frame_toolbar);
    frame_toolbar->Realize();
    panel_x = new wxPanel(this, wxID_ANY);
    wxBoxSizer* sizer_1 = new wxBoxSizer(wxVERTICAL);
    notebook_1 = new wxNotebook(panel_x, wxID_ANY);
    sizer_1->Add(notebook_1, 1, wxEXPAND, 0);
    notebook_1_pane_1 = new wxPanel(notebook_1, wxID_ANY);
    notebook_1->AddPage(notebook_1_pane_1, wxT("notebook_1_pane_1"));
    sizer_1->Add(20, 20, 0, 0, 0);
    window_1 = new wxSplitterWindow(panel_x, wxID_ANY);
    window_1->SetMinimumPaneSize(20);
    sizer_1->Add(window_1, 1, wxEXPAND, 0);
    window_1_pane_1 = new wxPanel(window_1, wxID_ANY);
    window_1_pane_2_scrolled = new wxScrolledWindow(window_1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
    window_1_pane_2_scrolled->SetScrollRate(10, 10);
    html = new wx.html.HtmlWindow(panel_x, wxID_ANY);
    sizer_1->Add(html, 1, wxALL|wxEXPAND, 3);
    
    window_1->SplitVertically(window_1_pane_1, window_1_pane_2_scrolled);
    panel_x->SetSizer(sizer_1);
    Layout();
    // end wxGlade
}


NotebookPageWithBases::NotebookPageWithBases(wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style):
    NotebookPage(parent, id, pos, size, wxTAB_TRAVERSAL), notebookpage.NotebookPage()
{
    // begin wxGlade: NotebookPageWithBases::NotebookPageWithBases
    // end wxGlade
}


TestNotebookWithBasesInFrame::TestNotebookWithBasesInFrame(wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style):
    TestNotebook(parent, id, pos, size, style), testnotebook.TestNotebook()
{
    // begin wxGlade: TestNotebookWithBasesInFrame::TestNotebookWithBasesInFrame
    notebook_1_pane_1 = new NotebookPageWithBases(this, wxID_ANY);
    AddPage(notebook_1_pane_1, wxT("notebook_1_pane_1"));
    // end wxGlade
}


SplitterWindowWithBasesInFrame::SplitterWindowWithBasesInFrame(wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style):
    TestSplitterWindow(parent, id, pos, size, style)
{
    // begin wxGlade: SplitterWindowWithBasesInFrame::SplitterWindowWithBasesInFrame
    window_1_pane_1 = new wxPanel(this, wxID_ANY);
    window_1_pane_2 = new wxPanel(this, wxID_ANY);
    SplitVertically(window_1_pane_1, window_1_pane_2);
    // end wxGlade
}


TestPanelWithBasesInFrame::TestPanelWithBasesInFrame(wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style):
    TestPanel(parent, id, pos, size, style), testpanel.TestPanel()
{
    // begin wxGlade: TestPanelWithBasesInFrame::TestPanelWithBasesInFrame
    wxBoxSizer* sizer_1 = new wxBoxSizer(wxVERTICAL);
    notebook_1 = new mynotebook.MyNoteBook(this, wxID_ANY);
    sizer_1->Add(notebook_1, 1, wxEXPAND, 0);
    window_1 = new mysplitter.MySplitterWindow(this, wxID_ANY);
    sizer_1->Add(window_1, 1, wxEXPAND, 0);
    html = new wx.html.HtmlWindow(this, wxID_ANY);
    sizer_1->Add(html, 1, wxALL|wxEXPAND, 3);
    
    SetSizer(sizer_1);
    // end wxGlade
}


MyFrameWithBases::MyFrameWithBases(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style):
    TestFrame(parent, id, title, pos, size, wxDEFAULT_FRAME_STYLE), testframe.TestFrame()
{
    // begin wxGlade: MyFrameWithBases::MyFrameWithBases
    SetSize(wxSize(400, 300));
    SetTitle(wxT("frame"));
    frame_copy_menubar = new mymenubar.MyMenuBar();
    SetMenuBar(frame_copy_menubar);
    frame_copy_statusbar = CreateStatusBar(1);
    int frame_copy_statusbar_widths[] = { -1 };
    frame_copy_statusbar->SetStatusWidths(1, frame_copy_statusbar_widths);
    
    // statusbar fields
    const wxString frame_copy_statusbar_fields[] = {
        wxT("frame_copy_statusbar"),
    };
    for(int i = 0; i < frame_copy_statusbar->GetFieldsCount(); ++i) {
        frame_copy_statusbar->SetStatusText(frame_copy_statusbar_fields[i], i);
    }
    frame_copy_toolbar = new mytoolbar.MyToolBar(this, -1);
    SetToolBar(frame_copy_toolbar);
    frame_copy_toolbar->Realize();
    panel_1 = new TestPanelWithBasesInFrame(this, wxID_ANY);
    Layout();
    // end wxGlade
}


MyDialog::MyDialog(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style):
    wxDialog(parent, id, title, pos, size, wxDEFAULT_DIALOG_STYLE)
{
    // begin wxGlade: MyDialog::MyDialog
    SetTitle(wxT("dialog"));
    wxBoxSizer* sizer_1 = new wxBoxSizer(wxVERTICAL);
    sizer_1->Add(0, 0, 0, 0, 0);
    
    SetSizer(sizer_1);
    sizer_1->Fit(this);
    Layout();
    // end wxGlade
}


MyPanel::MyPanel(wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style):
    wxPanel(parent, id, pos, size, wxTAB_TRAVERSAL)
{
    // begin wxGlade: MyPanel::MyPanel
    wxBoxSizer* sizer_1 = new wxBoxSizer(wxVERTICAL);
    sizer_1->Add(0, 0, 0, 0, 0);
    
    SetSizer(sizer_1);
    sizer_1->Fit(this);
    // end wxGlade
}


MyMDIChildFrame::MyMDIChildFrame(wxMDIParentFrame* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style):
    wxMDIChildFrame(parent, id, title, pos, size, wxDEFAULT_FRAME_STYLE)
{
    // begin wxGlade: MyMDIChildFrame::MyMDIChildFrame
    SetSize(wxSize(400, 300));
    SetTitle(wxT("frame_1"));
    wxBoxSizer* sizer_1 = new wxBoxSizer(wxVERTICAL);
    sizer_1->Add(0, 0, 0, 0, 0);
    
    SetSizer(sizer_1);
    Layout();
    // end wxGlade
}


MyMenuBar::MyMenuBar():
    wxMenuBar()
{
    // begin wxGlade: MyMenuBar::MyMenuBar
    // end wxGlade
}


wxToolBar::wxToolBar(wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style):
    wxToolBar(parent, id, pos, size, style)
{
    // begin wxGlade: wxToolBar::wxToolBar
    Realize();
    // end wxGlade
}


MyDialogWithBases::MyDialogWithBases(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style):
    MyDialogBase(parent, id, title, pos, size, wxDEFAULT_DIALOG_STYLE), mydialogbases.MyDialogBase()
{
    // begin wxGlade: MyDialogWithBases::MyDialogWithBases
    SetTitle(wxT("dialog"));
    wxBoxSizer* sizer_1 = new wxBoxSizer(wxVERTICAL);
    sizer_1->Add(0, 0, 0, 0, 0);
    
    SetSizer(sizer_1);
    sizer_1->Fit(this);
    Layout();
    // end wxGlade
}


MyPanelWithBases::MyPanelWithBases(wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style):
    MyPanelBase(parent, id, pos, size, wxTAB_TRAVERSAL), mypanelbases.MyPanelBase()
{
    // begin wxGlade: MyPanelWithBases::MyPanelWithBases
    wxBoxSizer* sizer_1 = new wxBoxSizer(wxVERTICAL);
    sizer_1->Add(0, 0, 0, 0, 0);
    
    SetSizer(sizer_1);
    sizer_1->Fit(this);
    // end wxGlade
}


MyPanelScrolled::MyPanelScrolled(wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style):
    wxScrolledWindow(parent, id, pos, size, wxTAB_TRAVERSAL)
{
    // begin wxGlade: MyPanelScrolled::MyPanelScrolled
    SetScrollRate(10, 10);
    wxBoxSizer* sizer_1 = new wxBoxSizer(wxVERTICAL);
    sizer_1->Add(0, 0, 0, 0, 0);
    
    SetSizer(sizer_1);
    sizer_1->Fit(this);
    // end wxGlade
}


class MyApp: public wxApp {
public:
    bool OnInit();
};

IMPLEMENT_APP(MyApp)

bool MyApp::OnInit()
{
    wxInitAllImageHandlers();
    MyFrame* frame = new MyFrame(NULL, wxID_ANY, wxEmptyString);
    SetTopWindow(frame);
    frame->Show();
    return true;
}
