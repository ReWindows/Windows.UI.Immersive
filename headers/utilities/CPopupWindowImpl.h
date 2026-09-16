#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 107 member(s).
namespace Windows::Internal {
class CPopupWindowImpl {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CPopupWindowImpl@Internal@Windows@@QEAA@XZ
    CPopupWindowImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelWindow@CPopupWindowImpl@Internal@Windows@@UEAA_NXZ
    virtual bool CancelWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearAnimationTelemetryScenario@CPopupWindowImpl@Internal@Windows@@UEAAXXZ
    virtual void ClearAnimationTelemetryScenario();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CPopupWindowImpl@Internal@Windows@@SAJPEAUPositionTraits@23@PEAUDismissTraits@23@PEAUWindowTraits@23@PEAUAnimationTraits@23@PEAUHWND__@@W4POPUP_PERSONALITY@@W4POPUP_OPTIONS@@W4XamlPopupOptions@@_NPEAUHMONITOR__@@PEAPEAUIPopupWindowImplBase@23@@Z
    static long Create(::Windows::Internal::PositionTraits *, ::Windows::Internal::DismissTraits *, ::Windows::Internal::WindowTraits *, ::Windows::Internal::AnimationTraits *, HWND__*, int, int, int, bool, HMONITOR__*, ::Windows::Internal::IPopupWindowImplBase * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyWindow@CPopupWindowImpl@Internal@Windows@@UEAAX_N@Z
    virtual void DestroyWindow(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DismissWindow@CPopupWindowImpl@Internal@Windows@@UEAAXXZ
    virtual void DismissWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndDefer@CPopupWindowImpl@Internal@Windows@@UEAAXK@Z
    virtual void EndDefer(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetApplicationHost@CPopupWindowImpl@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetApplicationHost(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetApplicationImage@CPopupWindowImpl@Internal@Windows@@UEAAJPEAPEAUIWICBitmapSource@@@Z
    virtual long GetApplicationImage(IWICBitmapSource * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBackButtonEvent@CPopupWindowImpl@Internal@Windows@@UEAAJPEAPEAUIPopupEventHandler@@@Z
    virtual long GetBackButtonEvent(IPopupEventHandler * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBackgroundColor@CPopupWindowImpl@Internal@Windows@@UEAAJPEAK@Z
    virtual long GetBackgroundColor(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCancelCommandIndex@CPopupWindowImpl@Internal@Windows@@UEAAJPEAI@Z
    virtual long GetCancelCommandIndex(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultCommandIndex@CPopupWindowImpl@Internal@Windows@@UEAAJPEAI@Z
    virtual long GetDefaultCommandIndex(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDestroyEvent@CPopupWindowImpl@Internal@Windows@@UEAAJPEAPEAUIPopupEventHandler@@@Z
    virtual long GetDestroyEvent(IPopupEventHandler * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDismissEvent@CPopupWindowImpl@Internal@Windows@@UEAAJPEAPEAUIPopupEventHandler@@@Z
    virtual long GetDismissEvent(IPopupEventHandler * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHeaderColor@CPopupWindowImpl@Internal@Windows@@UEAAJPEAK@Z
    virtual long GetHeaderColor(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHostHWND@CPopupWindowImpl@Internal@Windows@@UEAAPEAUHWND__@@XZ
    virtual HWND__* GetHostHWND();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsInteractionDelayed@CPopupWindowImpl@Internal@Windows@@UEBA_NXZ
    virtual bool GetIsInteractionDelayed() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetKeyboardVisibilityEvent@CPopupWindowImpl@Internal@Windows@@UEAAJPEAPEAUIPopupKeyboardVisibilityEventHandler@@@Z
    virtual long GetKeyboardVisibilityEvent(IPopupKeyboardVisibilityEventHandler * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMaxCommandCount@CPopupWindowImpl@Internal@Windows@@UEBAIXZ
    virtual unsigned int GetMaxCommandCount() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMinCommandCount@CPopupWindowImpl@Internal@Windows@@UEBAIXZ
    virtual unsigned int GetMinCommandCount() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMonitor@CPopupWindowImpl@Internal@Windows@@UEAAJPEAPEAUIImmersiveMonitor@@@Z
    virtual long GetMonitor(IImmersiveMonitor * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPopupCommand@CPopupWindowImpl@Internal@Windows@@UEAAJIPEAPEAUIPopupCommand@@@Z
    virtual long GetPopupCommand(unsigned int, IPopupCommand * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelectedCommandIndex@CPopupWindowImpl@Internal@Windows@@UEAAJPEAI@Z
    virtual long GetSelectedCommandIndex(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTitle@CPopupWindowImpl@Internal@Windows@@UEAAJPEAPEAG@Z
    virtual long GetTitle(unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HideTitle@CPopupWindowImpl@Internal@Windows@@UEAAJXZ
    virtual long HideTitle();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HideWindow@CPopupWindowImpl@Internal@Windows@@UEAAXXZ
    virtual void HideWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HideWindowAndKeepActivation@CPopupWindowImpl@Internal@Windows@@UEAAXXZ
    virtual void HideWindowAndKeepActivation();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDeferredThreadShutdownSupported@CPopupWindowImpl@Internal@Windows@@UEBA_NXZ
    virtual bool IsDeferredThreadShutdownSupported() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsLegacyDUIRender@CPopupWindowImpl@Internal@Windows@@UEBA_NXZ
    virtual bool IsLegacyDUIRender() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRTL@CPopupWindowImpl@Internal@Windows@@UEAA_NXZ
    virtual bool IsRTL();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsVisible@CPopupWindowImpl@Internal@Windows@@UEBA_NXZ
    virtual bool IsVisible() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAnimationTelemetryScenario@CPopupWindowImpl@Internal@Windows@@UEAAXAEBU_GUID@@@Z
    virtual void SetAnimationTelemetryScenario(_GUID const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAppItem@CPopupWindowImpl@Internal@Windows@@UEAAJPEAUIShellItem@@@Z
    virtual long SetAppItem(IShellItem *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetApplicationImage@CPopupWindowImpl@Internal@Windows@@UEAAJPEAUIWICBitmapSource@@@Z
    virtual long SetApplicationImage(IWICBitmapSource *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBackButtonEvent@CPopupWindowImpl@Internal@Windows@@UEAAJPEAUIPopupEventHandler@@@Z
    virtual long SetBackButtonEvent(IPopupEventHandler *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBackgroundColor@CPopupWindowImpl@Internal@Windows@@UEAAJK@Z
    virtual long SetBackgroundColor(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCancelCommandIndex@CPopupWindowImpl@Internal@Windows@@UEAAJI@Z
    virtual long SetCancelCommandIndex(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetContent@CPopupWindowImpl@Internal@Windows@@UEAAJPEAUIInspectable@@@Z
    virtual long SetContent(IInspectable *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCoreWindowCallback@CPopupWindowImpl@Internal@Windows@@UEAAJPEAUIPopupCoreWindowCallback@@@Z
    virtual long SetCoreWindowCallback(IPopupCoreWindowCallback *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDefaultCommandIndex@CPopupWindowImpl@Internal@Windows@@UEAAJI@Z
    virtual long SetDefaultCommandIndex(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDestroyEvent@CPopupWindowImpl@Internal@Windows@@UEAAJPEAUIPopupEventHandler@@@Z
    virtual long SetDestroyEvent(IPopupEventHandler *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDirection@CPopupWindowImpl@Internal@Windows@@UEAAJ_N@Z
    virtual long SetDirection(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDismissEvent@CPopupWindowImpl@Internal@Windows@@UEAAJPEAUIPopupEventHandler@@@Z
    virtual long SetDismissEvent(IPopupEventHandler *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHeaderColor@CPopupWindowImpl@Internal@Windows@@UEAAJK@Z
    virtual long SetHeaderColor(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHeight@CPopupWindowImpl@Internal@Windows@@UEAAJI@Z
    virtual long SetHeight(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsInteractionDelayed@CPopupWindowImpl@Internal@Windows@@UEAAX_N@Z
    virtual void SetIsInteractionDelayed(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetKeyboardVisibilityEvent@CPopupWindowImpl@Internal@Windows@@UEAAJPEAUIPopupKeyboardVisibilityEventHandler@@@Z
    virtual long SetKeyboardVisibilityEvent(IPopupKeyboardVisibilityEventHandler *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMaxCommandCount@CPopupWindowImpl@Internal@Windows@@UEAAXI@Z
    virtual void SetMaxCommandCount(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMinCommandCount@CPopupWindowImpl@Internal@Windows@@UEAAXI@Z
    virtual void SetMinCommandCount(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMonitor@CPopupWindowImpl@Internal@Windows@@UEAAJPEAUIImmersiveMonitor@@@Z
    virtual long SetMonitor(IImmersiveMonitor *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPopupCommands@CPopupWindowImpl@Internal@Windows@@UEAAJIPEAPEAUIPopupCommand@@@Z
    virtual long SetPopupCommands(unsigned int, IPopupCommand * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSelectedCommandIndex@CPopupWindowImpl@Internal@Windows@@UEAAJI@Z
    virtual long SetSelectedCommandIndex(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTitle@CPopupWindowImpl@Internal@Windows@@UEAAJPEBG@Z
    virtual long SetTitle(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUIAName@CPopupWindowImpl@Internal@Windows@@UEAAJPEBG@Z
    virtual long SetUIAName(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWidth@CPopupWindowImpl@Internal@Windows@@UEAAJI@Z
    virtual long SetWidth(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowProgress@CPopupWindowImpl@Internal@Windows@@UEAAJ_N@Z
    virtual long ShowProgress(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowTitle@CPopupWindowImpl@Internal@Windows@@UEAAJXZ
    virtual long ShowTitle();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowWindow@CPopupWindowImpl@Internal@Windows@@UEAAJXZ
    virtual long ShowWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartDefer@CPopupWindowImpl@Internal@Windows@@UEAAKXZ
    virtual unsigned long StartDefer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateLightDismiss@CPopupWindowImpl@Internal@Windows@@UEAAJ_N@Z
    virtual long UpdateLightDismiss(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasHyperlinkInvoked@CPopupWindowImpl@Internal@Windows@@UEAAJPEA_N@Z
    virtual long WasHyperlinkInvoked(bool *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPopupWindowImpl@Internal@Windows@@UEAA@XZ
    virtual ~CPopupWindowImpl();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateHostWindow@CPopupWindowImpl@Internal@Windows@@EEAAPEAUHWND__@@KPEBG0KHHHHPEAU4@PEAUHMENU__@@PEAUHINSTANCE__@@PEAX@Z
    virtual HWND__* CreateHostWindow(unsigned long, unsigned short const *, unsigned short const *, unsigned long, int, int, int, int, HWND__*, HMENU__*, HINSTANCE__*, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DUIButtonIndexFromCommandIndex@CPopupWindowImpl@Internal@Windows@@AEBAIH@Z
    unsigned int DUIButtonIndexFromCommandIndex(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnListenedEvent@CPopupWindowImpl@Internal@Windows@@EEAAXPEAVElement@DirectUI@@PEAUEvent@5@@Z
    virtual void OnListenedEvent(::DirectUI::Element *, ::DirectUI::Event *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnListenedPropertyChanged@CPopupWindowImpl@Internal@Windows@@EEAAXPEAVElement@DirectUI@@PEBUPropertyInfo@5@HPEAVValue@5@2@Z
    virtual void OnListenedPropertyChanged(::DirectUI::Element *, ::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@CPopupWindowImpl@Internal@Windows@@EEAAJI_K_JPEA_J@Z
    virtual long OnMessage(unsigned int, uint64_t, int64_t, int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ComputeDesiredSize@CPopupWindowImpl@Internal@Windows@@AEAA?AUtagSIZE@@AEBVCConstraint@Immersive@UI@3@_N@Z
    tagSIZE _ComputeDesiredSize(::Windows::UI::Immersive::CConstraint const &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ComputeLayout@CPopupWindowImpl@Internal@Windows@@AEAAXAEBVCConstraint@Immersive@UI@3@_N@Z
    void _ComputeLayout(::Windows::UI::Immersive::CConstraint const &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ComputeWindowRect@CPopupWindowImpl@Internal@Windows@@AEAA?AUtagRECT@@AEBUtagSIZE@@AEBVCConstraint@Immersive@UI@3@_N@Z
    tagRECT _ComputeWindowRect(tagSIZE const &, ::Windows::UI::Immersive::CConstraint const &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DestroyTransitionElementList@CPopupWindowImpl@Internal@Windows@@AEAAXXZ
    void _DestroyTransitionElementList();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DoEntranceAnimation@CPopupWindowImpl@Internal@Windows@@AEAAXXZ
    void _DoEntranceAnimation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DoTransitionAnimation@CPopupWindowImpl@Internal@Windows@@AEAAXXZ
    void _DoTransitionAnimation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureProxy@CPopupWindowImpl@Internal@Windows@@AEAAJ_N@Z
    long _EnsureProxy(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureTabletModeSubscription@CPopupWindowImpl@Internal@Windows@@AEAAXXZ
    void _EnsureTabletModeSubscription();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FireResizeEvent@CPopupWindowImpl@Internal@Windows@@AEAAX_N@Z
    void _FireResizeEvent(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetHostMonitor@CPopupWindowImpl@Internal@Windows@@AEBAPEAUHMONITOR__@@XZ
    HMONITOR__* _GetHostMonitor() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetImmersiveApplicationBackgroundColor@CPopupWindowImpl@Internal@Windows@@AEAAJPEAUHWND__@@PEAK@Z
    long _GetImmersiveApplicationBackgroundColor(HWND__*, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetInteractionDelay@CPopupWindowImpl@Internal@Windows@@AEBAIXZ
    unsigned int _GetInteractionDelay() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleButtonBarAndBackButtonNavigation@CPopupWindowImpl@Internal@Windows@@AEAA_NGH@Z
    bool _HandleButtonBarAndBackButtonNavigation(unsigned short, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HideWindow@CPopupWindowImpl@Internal@Windows@@AEAAX_N@Z
    void _HideWindow(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Initialize@CPopupWindowImpl@Internal@Windows@@AEAAJPEAUPositionTraits@23@PEAUDismissTraits@23@PEAUWindowTraits@23@PEAUAnimationTraits@23@PEAUHWND__@@W4POPUP_PERSONALITY@@_NW4POPUP_OPTIONS@@W4XamlPopupOptions@@PEAUHMONITOR__@@@Z
    long _Initialize(::Windows::Internal::PositionTraits *, ::Windows::Internal::DismissTraits *, ::Windows::Internal::WindowTraits *, ::Windows::Internal::AnimationTraits *, HWND__*, int, bool, int, int, HMONITOR__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitializeDefaultColors@CPopupWindowImpl@Internal@Windows@@AEAAXXZ
    void _InitializeDefaultColors();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InvokeCommand@CPopupWindowImpl@Internal@Windows@@AEAA_NI@Z
    bool _InvokeCommand(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LogDialogUsage@CPopupWindowImpl@Internal@Windows@@AEAAXXZ
    void _LogDialogUsage();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_NotifyAnimationComplete@CPopupWindowImpl@Internal@Windows@@AEAAJXZ
    long _NotifyAnimationComplete();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnButtonPress@CPopupWindowImpl@Internal@Windows@@AEAAXW4BUTTON_TYPE@23@I@Z
    void _OnButtonPress(int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnClose@CPopupWindowImpl@Internal@Windows@@AEAAXXZ
    void _OnClose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnDimmingWindowRepositioned@CPopupWindowImpl@Internal@Windows@@AEAAXXZ
    void _OnDimmingWindowRepositioned();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnDisplayChangeForCharmWindow@CPopupWindowImpl@Internal@Windows@@AEAAXHH_N@Z
    void _OnDisplayChangeForCharmWindow(int, int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnEnterPressed@CPopupWindowImpl@Internal@Windows@@AEAA_NXZ
    bool _OnEnterPressed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnInteractionDelayExpiration@CPopupWindowImpl@Internal@Windows@@AEAAXXZ
    void _OnInteractionDelayExpiration();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnWindowPosChanging@CPopupWindowImpl@Internal@Windows@@AEAAXPEAUtagWINDOWPOS@@@Z
    void _OnWindowPosChanging(tagWINDOWPOS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PrepForDisplay@CPopupWindowImpl@Internal@Windows@@AEAAJXZ
    long _PrepForDisplay();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RefreshColors@CPopupWindowImpl@Internal@Windows@@AEAAXXZ
    void _RefreshColors();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RefreshScale@CPopupWindowImpl@Internal@Windows@@AEAAXXZ
    void _RefreshScale();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ResizeForIHM@CPopupWindowImpl@Internal@Windows@@AEAAXXZ
    void _ResizeForIHM();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SendKeyboardVisibilityEvent@CPopupWindowImpl@Internal@Windows@@AEAAXXZ
    void _SendKeyboardVisibilityEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetButtonClass@CPopupWindowImpl@Internal@Windows@@AEBAXPEAVElement@DirectUI@@0@Z
    void _SetButtonClass(::DirectUI::Element *, ::DirectUI::Element *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetTitleBarLayout@CPopupWindowImpl@Internal@Windows@@AEAAXXZ
    void _SetTitleBarLayout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetUpTransitionAnimation@CPopupWindowImpl@Internal@Windows@@AEAAXXZ
    void _SetUpTransitionAnimation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetupEntranceAnimation@CPopupWindowImpl@Internal@Windows@@AEAAXXZ
    void _SetupEntranceAnimation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TitleButton@CPopupWindowImpl@Internal@Windows@@AEAAJPEAVElement@DirectUI@@PEAUIPopupCommand@@@Z
    long _TitleButton(::DirectUI::Element *, IPopupCommand *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateCharmWindowBackgroundColor@CPopupWindowImpl@Internal@Windows@@AEAAXXZ
    void _UpdateCharmWindowBackgroundColor();
};
} // namespace Windows::Internal
