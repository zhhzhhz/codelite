//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// wxCrafter project file: project_settings.wxcp
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#ifndef PROJECT_SETTINGS_BASE_CLASSES_H
#define PROJECT_SETTINGS_BASE_CLASSES_H

#include <wx/settings.h>
#include <wx/xrc/xmlres.h>
#include <wx/xrc/xh_bmp.h>
#include <wx/dialog.h>
#include <wx/iconbndl.h>
#include <wx/artprov.h>
#include <wx/sizer.h>
#include <wx/panel.h>
#include <wx/choice.h>
#include <wx/arrstr.h>
#include <wx/treebook.h>
#include <wx/infobar.h>
#include <wx/button.h>
#include <wx/checkbox.h>
#include <wx/propgrid/manager.h>
#include <wx/propgrid/property.h>
#include <wx/propgrid/advprops.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
#include <wx/notebook.h>
#include <wx/imaglist.h>
#include <wx/dataview.h>
#include <wx/statline.h>
#include <wx/statbox.h>
#include <wx/splitter.h>

class ProjectSettingsBaseDlg : public wxDialog
{
protected:
    wxPanel* m_panelSettings;
    wxChoice* m_choiceConfig;
    wxTreebook* m_treebook;
    wxInfoBar* m_infobar;
    wxStdDialogButtonSizer* m_stdBtnSizer126;
    wxButton* m_button_ok;
    wxButton* m_button_apply;
    wxButton* m_button_cancel;
    wxButton* m_button_help;

protected:
    virtual void OnConfigurationChanged(wxCommandEvent& event) { event.Skip(); }
    virtual void OnPageChanged(wxTreebookEvent& event) { event.Skip(); }
    virtual void OnButtonOK(wxCommandEvent& event) { event.Skip(); }
    virtual void OnButtonApply(wxCommandEvent& event) { event.Skip(); }
    virtual void OnButtonApplyUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnButtonCancel(wxCommandEvent& event) { event.Skip(); }
    virtual void OnButtonHelp(wxCommandEvent& event) { event.Skip(); }

public:
    wxChoice* GetChoiceConfig() { return m_choiceConfig; }
    wxTreebook* GetTreebook() { return m_treebook; }
    wxPanel* GetPanelSettings() { return m_panelSettings; }
    wxInfoBar* GetInfobar() { return m_infobar; }
    ProjectSettingsBaseDlg(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Project Settings"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1,-1), long style = wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER);
    virtual ~ProjectSettingsBaseDlg();
};


class PSGeneralPageBase : public wxPanel
{
protected:
    wxCheckBox* m_checkBoxEnabled;
    wxPropertyGridManager* m_pgMgr136;
    wxPGProperty* CATEGORY_GENERAL;
    wxPGProperty* m_pgPropProjectType;
    wxPGProperty* m_pgPropCompiler;
    wxPGProperty* m_pgPropIntermediateFolder;
    wxPGProperty* m_pgPropOutputFile;
    wxPGProperty* m_pgPropPause;
    wxPGProperty* CATEGORY_EXECUTION;
    wxPGProperty* m_pgPropGUIApp;
    wxPGProperty* m_pgPropProgram;
    wxPGProperty* m_pgPropWorkingDirectory;
    wxPGProperty* m_pgPropArgs;
    wxPGProperty* CATEGORY_DEBUGGER;
    wxPGProperty* m_pgPropDebugger;
    wxPGProperty* m_pgPropUseSeparateDebuggerArgs;
    wxPGProperty* m_pgPropDebugArgs;

protected:
    virtual void OnProjectEnabled(wxCommandEvent& event) { event.Skip(); }
    virtual void OnValueChanged(wxPropertyGridEvent& event) { event.Skip(); }
    virtual void OnProjectCustumBuildUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnCustomEditorClicked(wxCommandEvent& event) { event.Skip(); }

public:
    wxCheckBox* GetCheckBoxEnabled() { return m_checkBoxEnabled; }
    wxPropertyGridManager* GetPgMgr136() { return m_pgMgr136; }
    PSGeneralPageBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1,-1), long style = wxTAB_TRAVERSAL);
    virtual ~PSGeneralPageBase();
};


class PSCompilerPageBase : public wxPanel
{
protected:
    wxCheckBox* m_checkCompilerNeeded;
    wxPropertyGridManager* m_pgMgr;
    wxPGProperty* CATEGORY_OPTIONS4;
    wxPGProperty* m_pgPropBehaviorWithGlobalSettings;
    wxPGProperty* m_pgPropCppOpts;
    wxPGProperty* m_pgPropCOpts;
    wxPGProperty* m_pgPropAssembler;
    wxPGProperty* m_pgPropIncludePaths;
    wxPGProperty* m_pgPropPreProcessors;
    wxPGProperty* CATEGORY_PCH;
    wxPGProperty* m_pgPropPreCmpHeaderFile;
    wxPGProperty* m_pgPropIncludePCH;
    wxPGProperty* m_pgPropPCHCompileLine;
    wxPGProperty* m_pgPropPCHPolicy;

protected:
    virtual void OnProjectEnabledUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnCompilerNeeded(wxCommandEvent& event) { event.Skip(); }
    virtual void OnPropertyChanged(wxPropertyGridEvent& event) { event.Skip(); }
    virtual void OnUpdateUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnCustomEditorClicked(wxCommandEvent& event) { event.Skip(); }

public:
    wxCheckBox* GetCheckCompilerNeeded() { return m_checkCompilerNeeded; }
    wxPropertyGridManager* GetPgMgr() { return m_pgMgr; }
    PSCompilerPageBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1,-1), long style = wxTAB_TRAVERSAL);
    virtual ~PSCompilerPageBase();
};


class PSLinkPageBase : public wxPanel
{
protected:
    wxCheckBox* m_checkLinkerNeeded;
    wxPropertyGridManager* m_pgMgr;
    wxPGProperty* CATEGORY_OPTIONS;
    wxPGProperty* m_pgPropBehaviorWithGlobalSettings;
    wxPGProperty* m_pgPropOptions;
    wxPGProperty* m_pgPropLibraryPaths;
    wxPGProperty* m_pgPropLibraries;

protected:
    virtual void OnProjectEnabledUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnCheckLinkerNeeded(wxCommandEvent& event) { event.Skip(); }
    virtual void OnProjectCustumBuildUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnCustomEditorClicked(wxCommandEvent& event) { event.Skip(); }
    virtual void OnLinkerNotNeededUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnPropertyChanged(wxPropertyGridEvent& event) { event.Skip(); }

public:
    wxCheckBox* GetCheckLinkerNeeded() { return m_checkLinkerNeeded; }
    wxPropertyGridManager* GetPgMgr() { return m_pgMgr; }
    PSLinkPageBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1,-1), long style = wxTAB_TRAVERSAL);
    virtual ~PSLinkPageBase();
};


class PSDebuggerPageBase : public wxPanel
{
protected:
    wxPanel* m_panelDebugger;
    wxStaticText* m_staticText321;
    wxTextCtrl* m_textCtrlDebuggerPath;
    wxButton* m_button39;
    wxNotebook* m_notebook67;
    wxPanel* m_panel80;
    wxDataViewListCtrl* m_dvListCtrlDebuggerSearchPaths;
    wxButton* m_button88;
    wxButton* m_button90;
    wxPanel* m_panel71;
    wxStaticText* m_staticText301;
    wxTextCtrl* m_textCtrlDbgCmds;
    wxPanel* m_panel74;
    wxStaticText* m_staticText311;
    wxTextCtrl* m_textCtrlDbgPostConnectCmds;
    wxCheckBox* m_checkBoxDbgRemote;
    wxStaticText* m_staticText31;
    wxTextCtrl* m_textCtrl1DbgHost;
    wxStaticText* m_staticText32;
    wxTextCtrl* m_textCtrlDbgPort;
    wxCheckBox* m_checkBoxDbgRemoteExt;

protected:
    virtual void OnProjectEnabledUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnBrowseForDebuggerPath(wxCommandEvent& event) { event.Skip(); }
    virtual void OnItemActivated(wxDataViewEvent& event) { event.Skip(); }
    virtual void OnAddDebuggerSearchPath(wxCommandEvent& event) { event.Skip(); }
    virtual void OnDeleteDebuggerSearchPath(wxCommandEvent& event) { event.Skip(); }
    virtual void OnDeleteDebuggerSearchPathUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnCmdEvtVModified(wxCommandEvent& event) { event.Skip(); }
    virtual void OnRemoteDebugUI(wxUpdateUIEvent& event) { event.Skip(); }

public:
    wxStaticText* GetStaticText321() { return m_staticText321; }
    wxTextCtrl* GetTextCtrlDebuggerPath() { return m_textCtrlDebuggerPath; }
    wxButton* GetButton39() { return m_button39; }
    wxDataViewListCtrl* GetDvListCtrlDebuggerSearchPaths() { return m_dvListCtrlDebuggerSearchPaths; }
    wxButton* GetButton88() { return m_button88; }
    wxButton* GetButton90() { return m_button90; }
    wxPanel* GetPanel80() { return m_panel80; }
    wxStaticText* GetStaticText301() { return m_staticText301; }
    wxTextCtrl* GetTextCtrlDbgCmds() { return m_textCtrlDbgCmds; }
    wxPanel* GetPanel71() { return m_panel71; }
    wxStaticText* GetStaticText311() { return m_staticText311; }
    wxTextCtrl* GetTextCtrlDbgPostConnectCmds() { return m_textCtrlDbgPostConnectCmds; }
    wxPanel* GetPanel74() { return m_panel74; }
    wxNotebook* GetNotebook67() { return m_notebook67; }
    wxCheckBox* GetCheckBoxDbgRemote() { return m_checkBoxDbgRemote; }
    wxStaticText* GetStaticText31() { return m_staticText31; }
    wxTextCtrl* GetTextCtrl1DbgHost() { return m_textCtrl1DbgHost; }
    wxStaticText* GetStaticText32() { return m_staticText32; }
    wxTextCtrl* GetTextCtrlDbgPort() { return m_textCtrlDbgPort; }
    wxCheckBox* GetCheckBoxDbgRemoteExt() { return m_checkBoxDbgRemoteExt; }
    wxPanel* GetPanelDebugger() { return m_panelDebugger; }
    PSDebuggerPageBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1,-1), long style = wxTAB_TRAVERSAL);
    virtual ~PSDebuggerPageBase();
};


class PSResourcesPageBase : public wxPanel
{
protected:
    wxPropertyGridManager* m_pgMgr;
    wxPGProperty* CATEGORY_RESOURCES;
    wxPGProperty* m_pgPropBehaviorWithGlobalSettings;
    wxPGProperty* m_pgPropResCmpOptions;
    wxPGProperty* m_pgPropResCmpSearchPath;

protected:
    virtual void OnProjectEnabledUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnValueChanged(wxPropertyGridEvent& event) { event.Skip(); }
    virtual void OnCustomEditorClicked(wxCommandEvent& event) { event.Skip(); }
    virtual void OnResourcesEnabledUI(wxUpdateUIEvent& event) { event.Skip(); }

public:
    wxPropertyGridManager* GetPgMgr() { return m_pgMgr; }
    PSResourcesPageBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1,-1), long style = wxTAB_TRAVERSAL);
    virtual ~PSResourcesPageBase();
};


class PSEnvironmentBasePage : public wxPanel
{
protected:
    wxPanel* m_panelEnv;
    wxStaticText* m_staticText44;
    wxChoice* m_choiceEnv;
    wxStaticText* m_staticText45;
    wxChoice* m_choiceDbgEnv;
    wxStaticLine* m_staticline12;
    wxStaticText* m_staticText47;
    wxTextCtrl* m_textCtrlEnvvars;

protected:
    virtual void OnProjectEnabledUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnCmdEvtVModified(wxCommandEvent& event) { event.Skip(); }

public:
    wxStaticText* GetStaticText44() { return m_staticText44; }
    wxChoice* GetChoiceEnv() { return m_choiceEnv; }
    wxStaticText* GetStaticText45() { return m_staticText45; }
    wxChoice* GetChoiceDbgEnv() { return m_choiceDbgEnv; }
    wxStaticLine* GetStaticline12() { return m_staticline12; }
    wxStaticText* GetStaticText47() { return m_staticText47; }
    wxTextCtrl* GetTextCtrlEnvvars() { return m_textCtrlEnvvars; }
    wxPanel* GetPanelEnv() { return m_panelEnv; }
    PSEnvironmentBasePage(wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1,-1), long style = wxTAB_TRAVERSAL);
    virtual ~PSEnvironmentBasePage();
};


class PSBuildEventsBasePage : public wxPanel
{
protected:
    wxPanel* m_preBuildPage;
    wxStaticText* m_staticText11;
    wxTextCtrl* m_textCtrlBuildEvents;

protected:
    virtual void OnProjectEnabledUI(wxUpdateUIEvent& event) { event.Skip(); }

public:
    wxStaticText* GetStaticText11() { return m_staticText11; }
    wxTextCtrl* GetTextCtrlBuildEvents() { return m_textCtrlBuildEvents; }
    wxPanel* GetPreBuildPage() { return m_preBuildPage; }
    PSBuildEventsBasePage(wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1,-1), long style = wxTAB_TRAVERSAL);
    virtual ~PSBuildEventsBasePage();
};


class PSCustomBuildBasePage : public wxPanel
{
protected:
    wxPanel* m_customBuildPage;
    wxCheckBox* m_checkEnableCustomBuild;
    wxStaticText* m_staticText33;
    wxTextCtrl* m_textCtrlCustomBuildWD;
    wxButton* m_buttonBrowseCustomBuildWD;
    wxDataViewListCtrl* m_dvListCtrlTargets;
    wxButton* m_buttonNewCustomTarget;
    wxButton* m_buttonEditCustomTarget;
    wxButton* m_buttonDeleteCustomTarget;

protected:
    virtual void OnProjectEnabledUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnCustomBuildEnabled(wxCommandEvent& event) { event.Skip(); }
    virtual void OnCustomBuildCBEnabledUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnCustomBuildEnabledUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnCmdEvtVModified(wxCommandEvent& event) { event.Skip(); }
    virtual void OnBrowseCustomBuildWD(wxCommandEvent& event) { event.Skip(); }
    virtual void OnTargetActivated(wxDataViewEvent& event) { event.Skip(); }
    virtual void OnNewTarget(wxCommandEvent& event) { event.Skip(); }
    virtual void OnEditTarget(wxCommandEvent& event) { event.Skip(); }
    virtual void OnEditTargetUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnDeleteTarget(wxCommandEvent& event) { event.Skip(); }
    virtual void OnDeleteTargetUI(wxUpdateUIEvent& event) { event.Skip(); }

public:
    wxCheckBox* GetCheckEnableCustomBuild() { return m_checkEnableCustomBuild; }
    wxStaticText* GetStaticText33() { return m_staticText33; }
    wxTextCtrl* GetTextCtrlCustomBuildWD() { return m_textCtrlCustomBuildWD; }
    wxButton* GetButtonBrowseCustomBuildWD() { return m_buttonBrowseCustomBuildWD; }
    wxDataViewListCtrl* GetDvListCtrlTargets() { return m_dvListCtrlTargets; }
    wxButton* GetButtonNewCustomTarget() { return m_buttonNewCustomTarget; }
    wxButton* GetButtonEditCustomTarget() { return m_buttonEditCustomTarget; }
    wxButton* GetButtonDeleteCustomTarget() { return m_buttonDeleteCustomTarget; }
    wxPanel* GetCustomBuildPage() { return m_customBuildPage; }
    PSCustomBuildBasePage(wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1,-1), long style = wxTAB_TRAVERSAL);
    virtual ~PSCustomBuildBasePage();
};


class GlobalSettingsBasePanel : public wxPanel
{
protected:
    wxPropertyGridManager* m_pgMgr;
    wxPGProperty* CATEGORY_COMPILER;
    wxPGProperty* m_pgPropCppCmpOpts;
    wxPGProperty* m_pgPropCCmpOpts;
    wxPGProperty* m_pgPropIncludePaths;
    wxPGProperty* m_pgPropPreProcessors;
    wxPGProperty* CATEGORY_LINKER;
    wxPGProperty* m_pgPropOptions;
    wxPGProperty* m_pgPropLibPath;
    wxPGProperty* m_pgPropLIbs;
    wxPGProperty* CATEGORY_RESOURCES;
    wxPGProperty* m_pgPropResCmpOptions;
    wxPGProperty* m_pgPropResCmpSearchPath;

protected:
    virtual void OnValueChanged(wxPropertyGridEvent& event) { event.Skip(); }
    virtual void OnCustomEditorClicked(wxCommandEvent& event) { event.Skip(); }

public:
    wxPropertyGridManager* GetPgMgr() { return m_pgMgr; }
    GlobalSettingsBasePanel(wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1,-1), long style = wxTAB_TRAVERSAL);
    virtual ~GlobalSettingsBasePanel();
};


class PSCustomMakefileBasePage : public wxPanel
{
protected:
    wxPanel* m_customMakefileStep;
    wxStaticText* m_staticText25;
    wxTextCtrl* m_textDeps;
    wxStaticText* m_staticText26;
    wxTextCtrl* m_textPreBuildRule;
    wxStaticText* m_staticText24;

protected:
    virtual void OnProjectEnabledUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnProjectCustumBuildUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnCmdEvtVModified(wxCommandEvent& event) { event.Skip(); }

public:
    wxStaticText* GetStaticText25() { return m_staticText25; }
    wxTextCtrl* GetTextDeps() { return m_textDeps; }
    wxStaticText* GetStaticText26() { return m_staticText26; }
    wxTextCtrl* GetTextPreBuildRule() { return m_textPreBuildRule; }
    wxStaticText* GetStaticText24() { return m_staticText24; }
    wxPanel* GetCustomMakefileStep() { return m_customMakefileStep; }
    PSCustomMakefileBasePage(wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1,-1), long style = wxTAB_TRAVERSAL);
    virtual ~PSCustomMakefileBasePage();
};


class PSCompletionBase : public wxPanel
{
protected:
    wxSplitterWindow* m_splitter1;
    wxPanel* m_panel14;
    wxStaticText* m_staticText47;
    wxTextCtrl* m_textCtrlSearchPaths;
    wxPanel* m_panel15;
    wxStaticText* m_staticText49;
    wxTextCtrl* m_textCtrlMacros;
    wxCheckBox* m_checkBoxC11;
    wxCheckBox* m_checkBoxC14;

protected:
    virtual void OnProjectEnabledUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnCmdEvtVModified(wxCommandEvent& event) { event.Skip(); }

public:
    wxStaticText* GetStaticText47() { return m_staticText47; }
    wxTextCtrl* GetTextCtrlSearchPaths() { return m_textCtrlSearchPaths; }
    wxPanel* GetPanel14() { return m_panel14; }
    wxStaticText* GetStaticText49() { return m_staticText49; }
    wxTextCtrl* GetTextCtrlMacros() { return m_textCtrlMacros; }
    wxCheckBox* GetCheckBoxC11() { return m_checkBoxC11; }
    wxCheckBox* GetCheckBoxC14() { return m_checkBoxC14; }
    wxPanel* GetPanel15() { return m_panel15; }
    wxSplitterWindow* GetSplitter1() { return m_splitter1; }
    PSCompletionBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1,-1), long style = wxTAB_TRAVERSAL);
    virtual ~PSCompletionBase();
};


class ProjectCustomBuildTragetDlgBase : public wxDialog
{
protected:
    wxStaticText* m_staticTextTargetName;
    wxTextCtrl* m_textCtrlTargetName;
    wxStaticText* m_staticTextCommand;
    wxTextCtrl* m_textCtrlCommand;
    wxStdDialogButtonSizer* m_stdBtnSizer120;
    wxButton* m_button122;
    wxButton* m_button124;

protected:
    virtual void OnEditTargetNameUI(wxUpdateUIEvent& event) { event.Skip(); }

public:
    wxStaticText* GetStaticTextTargetName() { return m_staticTextTargetName; }
    wxTextCtrl* GetTextCtrlTargetName() { return m_textCtrlTargetName; }
    wxStaticText* GetStaticTextCommand() { return m_staticTextCommand; }
    wxTextCtrl* GetTextCtrlCommand() { return m_textCtrlCommand; }
    ProjectCustomBuildTragetDlgBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Build Target"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1,-1), long style = wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER);
    virtual ~ProjectCustomBuildTragetDlgBase();
};

#endif
