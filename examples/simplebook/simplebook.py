#!/usr/bin/env python
# -*- coding: UTF-8 -*-
#
# generated by wxGlade 0.8.0b1 on Sat Dec 23 21:27:06 2017
#

import wx

# begin wxGlade: dependencies
# end wxGlade

# begin wxGlade: extracode
# end wxGlade


class MySimplebook(wx.Simplebook):
    def __init__(self, *args, **kwds):
        # begin wxGlade: MySimplebook.__init__
        wx.Simplebook.__init__(self, *args, **kwds)
        self.notebook_1_pane_1 = wx.Panel(self, wx.ID_ANY)
        self.button_1 = wx.Button(self.notebook_1_pane_1, wx.ID_ANY, "Show page 2")
        self.notebook_1_notebook_1_pane_2 = wx.Panel(self, wx.ID_ANY)
        self.button_2 = wx.Button(self.notebook_1_notebook_1_pane_2, wx.ID_ANY, "Show page 1")

        self.__set_properties()
        self.__do_layout()

        self.Bind(wx.EVT_BUTTON, lambda event: self.ChangeSelection(1), self.button_1)
        self.Bind(wx.EVT_BUTTON, lambda event: self.ChangeSelection(0), self.button_2)
        # end wxGlade

    def __set_properties(self):
        # begin wxGlade: MySimplebook.__set_properties
        self.AddPage(self.notebook_1_pane_1, "notebook_1_pane_1")
        self.AddPage(self.notebook_1_notebook_1_pane_2, "notebook_1_pane_2")
        self.button_1.SetFont(wx.Font(16, wx.DEFAULT, wx.NORMAL, wx.NORMAL, 0, ""))
        self.button_2.SetFont(wx.Font(16, wx.DEFAULT, wx.NORMAL, wx.NORMAL, 0, ""))
        # end wxGlade

    def __do_layout(self):
        # begin wxGlade: MySimplebook.__do_layout
        sizer_3 = wx.BoxSizer(wx.VERTICAL)
        sizer_2 = wx.BoxSizer(wx.VERTICAL)
        label_1 = wx.StaticText(self.notebook_1_pane_1, wx.ID_ANY, "Page 1 of Simplebook")
        label_1.SetFont(wx.Font(20, wx.DEFAULT, wx.NORMAL, wx.NORMAL, 0, ""))
        sizer_2.Add(label_1, 0, wx.ALIGN_CENTER | wx.ALL, 20)
        sizer_2.Add(self.button_1, 1, wx.ALIGN_BOTTOM | wx.ALL | wx.EXPAND, 20)
        self.notebook_1_pane_1.SetSizer(sizer_2)
        label_2 = wx.StaticText(self.notebook_1_notebook_1_pane_2, wx.ID_ANY, "Page 2 of Simplebook")
        label_2.SetFont(wx.Font(20, wx.DEFAULT, wx.NORMAL, wx.NORMAL, 0, ""))
        sizer_3.Add(label_2, 0, wx.ALIGN_CENTER | wx.ALL, 20)
        sizer_3.Add(self.button_2, 1, wx.ALIGN_BOTTOM | wx.ALL | wx.EXPAND, 20)
        self.notebook_1_notebook_1_pane_2.SetSizer(sizer_3)
        # end wxGlade

# end of class MySimplebook

class MyFrame(wx.Frame):
    def __init__(self, *args, **kwds):
        # begin wxGlade: MyFrame.__init__
        kwds["style"] = kwds.get("style", 0) | wx.DEFAULT_FRAME_STYLE
        wx.Frame.__init__(self, *args, **kwds)
        self.simplebook_1 = MySimplebook(self, wx.ID_ANY)

        self.__set_properties()
        self.__do_layout()
        # end wxGlade

    def __set_properties(self):
        # begin wxGlade: MyFrame.__set_properties
        self.SetTitle("frame")
        # end wxGlade

    def __do_layout(self):
        # begin wxGlade: MyFrame.__do_layout
        sizer_1 = wx.BoxSizer(wx.VERTICAL)
        sizer_1.Add(self.simplebook_1, 1, wx.EXPAND, 0)
        self.SetSizer(sizer_1)
        self.Layout()
        self.SetSize((400, 300))
        # end wxGlade

# end of class MyFrame

class MyApp(wx.App):
    def OnInit(self):
        self.frame = MyFrame(None, wx.ID_ANY, "")
        self.SetTopWindow(self.frame)
        self.frame.Show()
        return True

# end of class MyApp

if __name__ == "__main__":
    app = MyApp(0)
    app.MainLoop()