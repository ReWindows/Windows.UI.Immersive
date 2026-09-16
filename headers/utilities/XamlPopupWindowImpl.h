#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 106 member(s).
namespace Windows::Internal {
class XamlPopupWindowImpl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelWindow@XamlPopupWindowImpl@Internal@Windows@@UEAA_NXZ
    virtual bool CancelWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearAnimationTelemetryScenario@XamlPopupWindowImpl@Internal@Windows@@UEAAXXZ
    virtual void ClearAnimationTelemetryScenario();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyWindow@XamlPopupWindowImpl@Internal@Windows@@UEAAX_N@Z
    virtual void DestroyWindow(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DismissWindow@XamlPopupWindowImpl@Internal@Windows@@UEAAXXZ
    virtual void DismissWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndDefer@XamlPopupWindowImpl@Internal@Windows@@UEAAXK@Z
    virtual void EndDefer(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetApplicationHost@XamlPopupWindowImpl@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetApplicationHost(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetApplicationImage@XamlPopupWindowImpl@Internal@Windows@@UEAAJPEAPEAUIWICBitmapSource@@@Z
    virtual long GetApplicationImage(IWICBitmapSource * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBackButtonEvent@XamlPopupWindowImpl@Internal@Windows@@UEAAJPEAPEAUIPopupEventHandler@@@Z
    virtual long GetBackButtonEvent(IPopupEventHandler * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBackgroundColor@XamlPopupWindowImpl@Internal@Windows@@UEAAJPEAK@Z
    virtual long GetBackgroundColor(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCancelCommandIndex@XamlPopupWindowImpl@Internal@Windows@@UEAAJPEAI@Z
    virtual long GetCancelCommandIndex(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultCommandIndex@XamlPopupWindowImpl@Internal@Windows@@UEAAJPEAI@Z
    virtual long GetDefaultCommandIndex(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDestroyEvent@XamlPopupWindowImpl@Internal@Windows@@UEAAJPEAPEAUIPopupEventHandler@@@Z
    virtual long GetDestroyEvent(IPopupEventHandler * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDismissEvent@XamlPopupWindowImpl@Internal@Windows@@UEAAJPEAPEAUIPopupEventHandler@@@Z
    virtual long GetDismissEvent(IPopupEventHandler * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHWND@XamlPopupWindowImpl@Internal@Windows@@QEAAPEAUHWND__@@XZ
    HWND__* GetHWND();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHeaderColor@XamlPopupWindowImpl@Internal@Windows@@UEAAJPEAK@Z
    virtual long GetHeaderColor(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHostHWND@XamlPopupWindowImpl@Internal@Windows@@UEAAPEAUHWND__@@XZ
    virtual HWND__* GetHostHWND();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsInteractionDelayed@XamlPopupWindowImpl@Internal@Windows@@UEBA_NXZ
    virtual bool GetIsInteractionDelayed() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetKeyboardVisibilityEvent@XamlPopupWindowImpl@Internal@Windows@@UEAAJPEAPEAUIPopupKeyboardVisibilityEventHandler@@@Z
    virtual long GetKeyboardVisibilityEvent(IPopupKeyboardVisibilityEventHandler * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMaxCommandCount@XamlPopupWindowImpl@Internal@Windows@@UEBAIXZ
    virtual unsigned int GetMaxCommandCount() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMinCommandCount@XamlPopupWindowImpl@Internal@Windows@@UEBAIXZ
    virtual unsigned int GetMinCommandCount() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMonitor@XamlPopupWindowImpl@Internal@Windows@@UEAAJPEAPEAUIImmersiveMonitor@@@Z
    virtual long GetMonitor(IImmersiveMonitor * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPopupCommand@XamlPopupWindowImpl@Internal@Windows@@UEAAJIPEAPEAUIPopupCommand@@@Z
    virtual long GetPopupCommand(unsigned int, IPopupCommand * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelectedCommandIndex@XamlPopupWindowImpl@Internal@Windows@@UEAAJPEAI@Z
    virtual long GetSelectedCommandIndex(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTitle@XamlPopupWindowImpl@Internal@Windows@@UEAAJPEAPEAG@Z
    virtual long GetTitle(unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HideTitle@XamlPopupWindowImpl@Internal@Windows@@UEAAJXZ
    virtual long HideTitle();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HideWindow@XamlPopupWindowImpl@Internal@Windows@@UEAAXXZ
    virtual void HideWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HideWindowAndKeepActivation@XamlPopupWindowImpl@Internal@Windows@@UEAAXXZ
    virtual void HideWindowAndKeepActivation();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDeferredThreadShutdownSupported@XamlPopupWindowImpl@Internal@Windows@@UEBA_NXZ
    virtual bool IsDeferredThreadShutdownSupported() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsLegacyDUIRender@XamlPopupWindowImpl@Internal@Windows@@UEBA_NXZ
    virtual bool IsLegacyDUIRender() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRTL@XamlPopupWindowImpl@Internal@Windows@@UEAA_NXZ
    virtual bool IsRTL();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsVisible@XamlPopupWindowImpl@Internal@Windows@@UEBA_NXZ
    virtual bool IsVisible() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAnimationTelemetryScenario@XamlPopupWindowImpl@Internal@Windows@@UEAAXAEBU_GUID@@@Z
    virtual void SetAnimationTelemetryScenario(_GUID const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAppItem@XamlPopupWindowImpl@Internal@Windows@@UEAAJPEAUIShellItem@@@Z
    virtual long SetAppItem(IShellItem *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetApplicationImage@XamlPopupWindowImpl@Internal@Windows@@UEAAJPEAUIWICBitmapSource@@@Z
    virtual long SetApplicationImage(IWICBitmapSource *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBackButtonEvent@XamlPopupWindowImpl@Internal@Windows@@UEAAJPEAUIPopupEventHandler@@@Z
    virtual long SetBackButtonEvent(IPopupEventHandler *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBackgroundColor@XamlPopupWindowImpl@Internal@Windows@@UEAAJK@Z
    virtual long SetBackgroundColor(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCancelCommandIndex@XamlPopupWindowImpl@Internal@Windows@@UEAAJI@Z
    virtual long SetCancelCommandIndex(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetContent@XamlPopupWindowImpl@Internal@Windows@@UEAAJPEAUIInspectable@@@Z
    virtual long SetContent(IInspectable *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCoreWindowCallback@XamlPopupWindowImpl@Internal@Windows@@UEAAJPEAUIPopupCoreWindowCallback@@@Z
    virtual long SetCoreWindowCallback(IPopupCoreWindowCallback *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDefaultCommandIndex@XamlPopupWindowImpl@Internal@Windows@@UEAAJI@Z
    virtual long SetDefaultCommandIndex(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDestroyEvent@XamlPopupWindowImpl@Internal@Windows@@UEAAJPEAUIPopupEventHandler@@@Z
    virtual long SetDestroyEvent(IPopupEventHandler *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDirection@XamlPopupWindowImpl@Internal@Windows@@UEAAJ_N@Z
    virtual long SetDirection(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDismissEvent@XamlPopupWindowImpl@Internal@Windows@@UEAAJPEAUIPopupEventHandler@@@Z
    virtual long SetDismissEvent(IPopupEventHandler *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHeaderColor@XamlPopupWindowImpl@Internal@Windows@@UEAAJK@Z
    virtual long SetHeaderColor(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHeight@XamlPopupWindowImpl@Internal@Windows@@UEAAJI@Z
    virtual long SetHeight(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsInteractionDelayed@XamlPopupWindowImpl@Internal@Windows@@UEAAX_N@Z
    virtual void SetIsInteractionDelayed(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetKeyboardVisibilityEvent@XamlPopupWindowImpl@Internal@Windows@@UEAAJPEAUIPopupKeyboardVisibilityEventHandler@@@Z
    virtual long SetKeyboardVisibilityEvent(IPopupKeyboardVisibilityEventHandler *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMaxCommandCount@XamlPopupWindowImpl@Internal@Windows@@UEAAXI@Z
    virtual void SetMaxCommandCount(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMinCommandCount@XamlPopupWindowImpl@Internal@Windows@@UEAAXI@Z
    virtual void SetMinCommandCount(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMonitor@XamlPopupWindowImpl@Internal@Windows@@UEAAJPEAUIImmersiveMonitor@@@Z
    virtual long SetMonitor(IImmersiveMonitor *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPopupCommands@XamlPopupWindowImpl@Internal@Windows@@UEAAJIPEAPEAUIPopupCommand@@@Z
    virtual long SetPopupCommands(unsigned int, IPopupCommand * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSelectedCommandIndex@XamlPopupWindowImpl@Internal@Windows@@UEAAJI@Z
    virtual long SetSelectedCommandIndex(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTitle@XamlPopupWindowImpl@Internal@Windows@@UEAAJPEBG@Z
    virtual long SetTitle(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUIAName@XamlPopupWindowImpl@Internal@Windows@@UEAAJPEBG@Z
    virtual long SetUIAName(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWidth@XamlPopupWindowImpl@Internal@Windows@@UEAAJI@Z
    virtual long SetWidth(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowProgress@XamlPopupWindowImpl@Internal@Windows@@UEAAJ_N@Z
    virtual long ShowProgress(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowTitle@XamlPopupWindowImpl@Internal@Windows@@UEAAJXZ
    virtual long ShowTitle();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowWindow@XamlPopupWindowImpl@Internal@Windows@@UEAAJXZ
    virtual long ShowWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartDefer@XamlPopupWindowImpl@Internal@Windows@@UEAAKXZ
    virtual unsigned long StartDefer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateLightDismiss@XamlPopupWindowImpl@Internal@Windows@@UEAAJ_N@Z
    virtual long UpdateLightDismiss(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasHyperlinkInvoked@XamlPopupWindowImpl@Internal@Windows@@UEAAJPEA_N@Z
    virtual long WasHyperlinkInvoked(bool *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0XamlPopupWindowImpl@Internal@Windows@@QEAA@XZ
    XamlPopupWindowImpl();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1XamlPopupWindowImpl@Internal@Windows@@UEAA@XZ
    virtual ~XamlPopupWindowImpl();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyMsg@XamlPopupWindowImpl@Internal@Windows@@CAIXZ
    static unsigned int DestroyMsg();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DimmingWindowMsg@XamlPopupWindowImpl@Internal@Windows@@CAIXZ
    static unsigned int DimmingWindowMsg();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LightDismissWindowMsg@XamlPopupWindowImpl@Internal@Windows@@CAIXZ
    static unsigned int LightDismissWindowMsg();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLightDismiss@XamlPopupWindowImpl@Internal@Windows@@AEAAJXZ
    long OnLightDismiss();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnReRegisterLightDismiss@XamlPopupWindowImpl@Internal@Windows@@AEAAJXZ
    long OnReRegisterLightDismiss();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUpdateLightDismiss@XamlPopupWindowImpl@Internal@Windows@@AEAAJ_N@Z
    long OnUpdateLightDismiss(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnXamlCommandInvoked@XamlPopupWindowImpl@Internal@Windows@@AEAAJPEAUIXamlHostedDialog@Dialogs@UI@23@PEAUIXamlHostedDialogCommandInvokedArgs@5623@@Z
    long OnXamlCommandInvoked(::Windows::Internal::UI::Dialogs::IXamlHostedDialog *, ::Windows::Internal::UI::Dialogs::IXamlHostedDialogCommandInvokedArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnXamlDesiredSizeChanged@XamlPopupWindowImpl@Internal@Windows@@AEAAJPEAUIXamlHostedDialog@Dialogs@UI@23@USize@Foundation@3@@Z
    long OnXamlDesiredSizeChanged(::Windows::Internal::UI::Dialogs::IXamlHostedDialog *, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnXamlFirstFrameRendered@XamlPopupWindowImpl@Internal@Windows@@AEAAJPEAUIXamlHostedDialog@Dialogs@UI@23@@Z
    long OnXamlFirstFrameRendered(::Windows::Internal::UI::Dialogs::IXamlHostedDialog *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReRegisterLightDismissWindowMsg@XamlPopupWindowImpl@Internal@Windows@@CAIXZ
    static unsigned int ReRegisterLightDismissWindowMsg();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ComputeDesiredSize@XamlPopupWindowImpl@Internal@Windows@@AEAA?AUtagSIZE@@AEBVCConstraint@Immersive@UI@3@_N@Z
    tagSIZE _ComputeDesiredSize(::Windows::UI::Immersive::CConstraint const &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ComputeLayout@XamlPopupWindowImpl@Internal@Windows@@AEAAXAEBVCConstraint@Immersive@UI@3@_NPEAUSize@Foundation@3@PEAUtagRECT@@@Z
    void _ComputeLayout(::Windows::UI::Immersive::CConstraint const &, bool, WindissectOpaque *, tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ComputeWindowRect@XamlPopupWindowImpl@Internal@Windows@@AEAA?AUtagRECT@@AEBUtagSIZE@@AEBVCConstraint@Immersive@UI@3@_N@Z
    tagRECT _ComputeWindowRect(tagSIZE const &, ::Windows::UI::Immersive::CConstraint const &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateParentWindow@XamlPopupWindowImpl@Internal@Windows@@AEAAJXZ
    long _CreateParentWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureProxy@XamlPopupWindowImpl@Internal@Windows@@AEAAJ_N@Z
    long _EnsureProxy(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureTabletModeSubscription@XamlPopupWindowImpl@Internal@Windows@@AEAAXXZ
    void _EnsureTabletModeSubscription();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetButtonIndexFromCommandIndex@XamlPopupWindowImpl@Internal@Windows@@AEBAIH@Z
    unsigned int _GetButtonIndexFromCommandIndex(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetInteractionDelay@XamlPopupWindowImpl@Internal@Windows@@AEBAIXZ
    unsigned int _GetInteractionDelay() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleDPIChanged@XamlPopupWindowImpl@Internal@Windows@@AEAAXPEAUtagRECT@@@Z
    void _HandleDPIChanged(tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleDelayedDismissEvent@XamlPopupWindowImpl@Internal@Windows@@AEAAJXZ
    long _HandleDelayedDismissEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HideWindow@XamlPopupWindowImpl@Internal@Windows@@AEAAX_N@Z
    void _HideWindow(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Initialize@XamlPopupWindowImpl@Internal@Windows@@AEAAJPEAUPositionTraits@23@PEAUDismissTraits@23@PEAUWindowTraits@23@PEAUAnimationTraits@23@PEAUHWND__@@W4POPUP_PERSONALITY@@_NW4POPUP_OPTIONS@@PEAUHMONITOR__@@PEAUIPopupXamlMetadataProviderSource@@W4XamlPopupOptions@@@Z
    long _Initialize(::Windows::Internal::PositionTraits *, ::Windows::Internal::DismissTraits *, ::Windows::Internal::WindowTraits *, ::Windows::Internal::AnimationTraits *, HWND__*, int, bool, int, HMONITOR__*, IPopupXamlMetadataProviderSource *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InvokeCommand@XamlPopupWindowImpl@Internal@Windows@@AEAA_NI@Z
    bool _InvokeCommand(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InvokeCommandAsync@XamlPopupWindowImpl@Internal@Windows@@AEAAXI@Z
    void _InvokeCommandAsync(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InvokeHyperlinkAsync@XamlPopupWindowImpl@Internal@Windows@@AEAAXXZ
    void _InvokeHyperlinkAsync();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LoadCustomMetadataProviders@XamlPopupWindowImpl@Internal@Windows@@AEAAJPEAUIPopupXamlMetadataProviderSource@@PEAUIXamlHostedDialog@Dialogs@UI@23@@Z
    long _LoadCustomMetadataProviders(IPopupXamlMetadataProviderSource *, ::Windows::Internal::UI::Dialogs::IXamlHostedDialog *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnActivate@XamlPopupWindowImpl@Internal@Windows@@AEAAJXZ
    long _OnActivate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnClose@XamlPopupWindowImpl@Internal@Windows@@AEAAJXZ
    long _OnClose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnDimmingWindowRepositioned@XamlPopupWindowImpl@Internal@Windows@@AEAAJXZ
    long _OnDimmingWindowRepositioned();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnInteractionDelayExpiration@XamlPopupWindowImpl@Internal@Windows@@AEAAXXZ
    void _OnInteractionDelayExpiration();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnWindowPosChanging@XamlPopupWindowImpl@Internal@Windows@@AEAAXPEAUtagWINDOWPOS@@@Z
    void _OnWindowPosChanging(tagWINDOWPOS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnWindowSizeChanged@XamlPopupWindowImpl@Internal@Windows@@AEAAJHH@Z
    long _OnWindowSizeChanged(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PrepForDisplay@XamlPopupWindowImpl@Internal@Windows@@AEAAJXZ
    long _PrepForDisplay();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RefreshTitlebarColorScheme@XamlPopupWindowImpl@Internal@Windows@@AEAAXXZ
    void _RefreshTitlebarColorScheme();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RegisterForInputPaneEvents@XamlPopupWindowImpl@Internal@Windows@@AEAAJXZ
    long _RegisterForInputPaneEvents();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RunMessageLoop@XamlPopupWindowImpl@Internal@Windows@@AEAAXXZ
    void _RunMessageLoop();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Shutdown@XamlPopupWindowImpl@Internal@Windows@@AEAAXXZ
    void _Shutdown();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_StartSystemXaml@XamlPopupWindowImpl@Internal@Windows@@AEAAJXZ
    long _StartSystemXaml();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_StartXamlWinUI3@XamlPopupWindowImpl@Internal@Windows@@AEAAJXZ
    long _StartXamlWinUI3();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_windowProc@XamlPopupWindowImpl@Internal@Windows@@CA_JPEAUHWND__@@I_K_J@Z
    static int64_t s_windowProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_xamlThread@XamlPopupWindowImpl@Internal@Windows@@CAKPEAX@Z
    static unsigned long s_xamlThread(void *);
};
} // namespace Windows::Internal
