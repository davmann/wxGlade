# -*- coding: UTF-8 -*-
#
# generated by wxGlade 0.9.0b3 on Mon Jan  7 18:55:35 2019
#

import wx
import gettext
import compat



class UIBugDialog(wx.Dialog):
    def __init__(self, *args, **kwds):
        # begin wxGlade: UIBugDialog.__init__
        kwds["style"] = kwds.get("style", 0) | wx.DEFAULT_DIALOG_STYLE | wx.RESIZE_BORDER
        wx.Dialog.__init__(self, *args, **kwds)
        self.SetSize((600, 400))
        self.notebook_1 = wx.Notebook(self, wx.ID_ANY, style=wx.NB_BOTTOM)
        self.nb1_pane_summary = wx.Panel(self.notebook_1, wx.ID_ANY)
        self.st_header = wx.StaticText(self.nb1_pane_summary, wx.ID_ANY, _("An internal error occurred while %(action)s"))
        self.st_summary = wx.StaticText(self.nb1_pane_summary, wx.ID_ANY, _("Error type: %(exc_type)s\nError summary: %(exc_msg)s"))
        self.st_report = wx.StaticText(self.nb1_pane_summary, wx.ID_ANY, _("This is a bug - please report it."))
        self.nb1_pane_details = wx.Panel(self.notebook_1, wx.ID_ANY)
        self.st_details = wx.StaticText(self.nb1_pane_details, wx.ID_ANY, _("Error details:"))
        self.tc_details = wx.TextCtrl(self.nb1_pane_details, wx.ID_ANY, "", style=wx.TE_MULTILINE)
        self.notebook_1_pane_1 = wx.Panel(self.notebook_1, wx.ID_ANY)
        self.tc_howto_report = wx.TextCtrl(self.notebook_1_pane_1, wx.ID_ANY, _("Writing a helpful bug report is easy if you follow some hints. The items below should help you to integrate useful information. They are not an absolute rule - it's more like a guideline.\n\n- What did you do? Maybe you want to include a screenshot.\n- What did you want to happen?\n- What did actually happen?\n- Provide a short example to reproduce the issue.\n- Include the internal error log file %(log_file)s if required.\n\nPlease open a new bug in the wxGlade bug tracker https://github.com/wxGlade/wxGlade/issues/ .\nAlternatively you can send the bug report to the wxGlade mailing list wxglade-general@lists.sourceforge.net. Keep in mind that you need a subscription for sending emails to this mailing list.\nThe subscription page is at https://sourceforge.net/projects/wxglade/lists/wxglade-general ."), style=wx.TE_MULTILINE | wx.TE_READONLY)
        self.static_line_1 = wx.StaticLine(self, wx.ID_ANY)
        self.btn_copy = wx.Button(self, wx.ID_COPY, "")
        self.btn_ok = wx.Button(self, wx.ID_OK, "")

        self.__set_properties()
        self.__do_layout()

        self.Bind(wx.EVT_BUTTON, self.OnCopy, self.btn_copy)
        # end wxGlade

    def __set_properties(self):
        # begin wxGlade: UIBugDialog.__set_properties
        self.SetTitle(_("Error Dialog"))
        self.SetSize((600, 400))
        self.SetFocus()
        self.tc_details.SetFont(wx.Font(10, wx.MODERN, wx.NORMAL, wx.NORMAL, 0, ""))
        self.tc_howto_report.SetFont(wx.Font(10, wx.MODERN, wx.NORMAL, wx.NORMAL, 0, ""))
        compat.SetToolTip( self.btn_copy, _("Copy error details to clipboard") )
        self.btn_ok.SetDefault()
        # end wxGlade

    def __do_layout(self):
        # begin wxGlade: UIBugDialog.__do_layout
        grid_sizer_1 = wx.FlexGridSizer(3, 1, 0, 0)
        sizer_2 = wx.BoxSizer(wx.HORIZONTAL)
        sizer_3 = wx.BoxSizer(wx.HORIZONTAL)
        grid_sizer_2 = wx.FlexGridSizer(2, 1, 0, 0)
        sizer_1 = wx.BoxSizer(wx.HORIZONTAL)
        grid_sizer_3 = wx.FlexGridSizer(3, 1, 0, 0)
        grid_sizer_3.Add(self.st_header, 1, wx.ALL | wx.EXPAND, 5)
        grid_sizer_3.Add(self.st_summary, 1, wx.ALL | wx.EXPAND, 5)
        grid_sizer_3.Add(self.st_report, 1, wx.ALL | wx.EXPAND, 5)
        grid_sizer_3.AddGrowableCol(0)
        sizer_1.Add(grid_sizer_3, 1, wx.EXPAND, 0)
        self.nb1_pane_summary.SetSizer(sizer_1)
        grid_sizer_2.Add(self.st_details, 0, wx.ALL | wx.EXPAND, 5)
        grid_sizer_2.Add(self.tc_details, 1, wx.ALL | wx.EXPAND, 5)
        self.nb1_pane_details.SetSizer(grid_sizer_2)
        grid_sizer_2.AddGrowableRow(1)
        grid_sizer_2.AddGrowableCol(0)
        sizer_3.Add(self.tc_howto_report, 1, wx.ALL | wx.EXPAND, 5)
        self.notebook_1_pane_1.SetSizer(sizer_3)
        self.notebook_1.AddPage(self.nb1_pane_summary, _("Error Summary"))
        self.notebook_1.AddPage(self.nb1_pane_details, _("Error Details"))
        self.notebook_1.AddPage(self.notebook_1_pane_1, _("How to Report a Bug"))
        grid_sizer_1.Add(self.notebook_1, 1, wx.ALL | wx.EXPAND, 5)
        grid_sizer_1.Add(self.static_line_1, 0, wx.ALL | wx.EXPAND, 5)
        sizer_2.Add(self.btn_copy, 0, wx.ALL, 5)
        sizer_2.Add(self.btn_ok, 0, wx.ALL, 5)
        grid_sizer_1.Add(sizer_2, 1, wx.ALIGN_RIGHT, 0)
        self.SetSizer(grid_sizer_1)
        grid_sizer_1.AddGrowableRow(0)
        grid_sizer_1.AddGrowableCol(0)
        self.Layout()
        self.Centre()
        # end wxGlade

    def OnCopy(self, event):  # wxGlade: UIBugDialog.<event_handler>
        print("Event handler 'OnCopy' not implemented!")
        event.Skip()

# end of class UIBugDialog
