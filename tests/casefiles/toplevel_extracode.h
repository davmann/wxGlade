// -*- C++ -*-
//
// generated by wxGlade 0.9.9pre on Sat Jul 13 17:09:55 2019
//
// Example for compiling a single file project under Linux using g++:
//  g++ MyApp.cpp $(wx-config --libs) $(wx-config --cxxflags) -o MyApp
//
// Example for compiling a multi file project under Linux using g++:
//  g++ main.cpp $(wx-config --libs) $(wx-config --cxxflags) -o MyApp Dialog1.cpp Frame1.cpp
//

#ifndef TOPLEVEL_EXTRACODE_H
#define TOPLEVEL_EXTRACODE_H

#include <wx/wx.h>
#include <wx/image.h>

// begin wxGlade: ::dependencies
// end wxGlade

// begin wxGlade: ::extracode
# frame extra code
# dialog extra code
// end wxGlade


class MyFrame: public wxFrame {
public:
    // begin wxGlade: MyFrame::ids
    // end wxGlade

    MyFrame(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos=wxDefaultPosition, const wxSize& size=wxDefaultSize, long style=wxDEFAULT_FRAME_STYLE);

private:

protected:
    // begin wxGlade: MyFrame::attributes
    // end wxGlade
}; // wxGlade: end class


class MyDialog: public wxDialog {
public:
    // begin wxGlade: MyDialog::ids
    // end wxGlade

    MyDialog(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos=wxDefaultPosition, const wxSize& size=wxDefaultSize, long style=wxDEFAULT_DIALOG_STYLE);

private:

protected:
    // begin wxGlade: MyDialog::attributes
    // end wxGlade
}; // wxGlade: end class


#endif // TOPLEVEL_EXTRACODE_H
