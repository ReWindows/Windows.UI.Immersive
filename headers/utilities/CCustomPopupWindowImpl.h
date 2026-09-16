#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 82 member(s).
namespace Windows::Internal {
class CCustomPopupWindowImpl {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CCustomPopupWindowImpl@Internal@Windows@@QEAA@XZ
    CCustomPopupWindowImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelWindow@CCustomPopupWindowImpl@Internal@Windows@@UEAA_NXZ
    virtual bool CancelWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearAnimationTelemetryScenario@CCustomPopupWindowImpl@Internal@Windows@@UEAAXXZ
    virtual void ClearAnimationTelemetryScenario();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CCustomPopupWindowImpl@Internal@Windows@@SAJPEAUPositionTraits@23@PEAUDismissTraits@23@PEAUWindowTraits@23@PEAUAnimationTraits@23@PEAUHWND__@@W4POPUP_PERSONALITY@@W4POPUP_OPTIONS@@W4XamlPopupOptions@@_NPEAUHMONITOR__@@PEAPEAUIPopupWindowImplBase@23@@Z
    static long Create(::Windows::Internal::PositionTraits *, ::Windows::Internal::DismissTraits *, ::Windows::Internal::WindowTraits *, ::Windows::Internal::AnimationTraits *, HWND__*, int, int, int, bool, HMONITOR__*, ::Windows::Internal::IPopupWindowImplBase * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyWindow@CCustomPopupWindowImpl@Internal@Windows@@UEAAX_N@Z
    virtual void DestroyWindow(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DismissWindow@CCustomPopupWindowImpl@Internal@Windows@@UEAAXXZ
    virtual void DismissWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndDefer@CCustomPopupWindowImpl@Internal@Windows@@UEAAXK@Z
    virtual void EndDefer(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetApplicationHost@CCustomPopupWindowImpl@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetApplicationHost(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetApplicationImage@CCustomPopupWindowImpl@Internal@Windows@@UEAAJPEAPEAUIWICBitmapSource@@@Z
    virtual long GetApplicationImage(IWICBitmapSource * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBackButtonEvent@CCustomPopupWindowImpl@Internal@Windows@@UEAAJPEAPEAUIPopupEventHandler@@@Z
    virtual long GetBackButtonEvent(IPopupEventHandler * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBackgroundColor@CCustomPopupWindowImpl@Internal@Windows@@UEAAJPEAK@Z
    virtual long GetBackgroundColor(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCancelCommandIndex@CCustomPopupWindowImpl@Internal@Windows@@UEAAJPEAI@Z
    virtual long GetCancelCommandIndex(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultCommandIndex@CCustomPopupWindowImpl@Internal@Windows@@UEAAJPEAI@Z
    virtual long GetDefaultCommandIndex(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDestroyEvent@CCustomPopupWindowImpl@Internal@Windows@@UEAAJPEAPEAUIPopupEventHandler@@@Z
    virtual long GetDestroyEvent(IPopupEventHandler * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDismissEvent@CCustomPopupWindowImpl@Internal@Windows@@UEAAJPEAPEAUIPopupEventHandler@@@Z
    virtual long GetDismissEvent(IPopupEventHandler * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHeaderColor@CCustomPopupWindowImpl@Internal@Windows@@UEAAJPEAK@Z
    virtual long GetHeaderColor(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHostHWND@CCustomPopupWindowImpl@Internal@Windows@@UEAAPEAUHWND__@@XZ
    virtual HWND__* GetHostHWND();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsInteractionDelayed@CCustomPopupWindowImpl@Internal@Windows@@UEBA_NXZ
    virtual bool GetIsInteractionDelayed() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetKeyboardVisibilityEvent@CCustomPopupWindowImpl@Internal@Windows@@UEAAJPEAPEAUIPopupKeyboardVisibilityEventHandler@@@Z
    virtual long GetKeyboardVisibilityEvent(IPopupKeyboardVisibilityEventHandler * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMaxCommandCount@CCustomPopupWindowImpl@Internal@Windows@@UEBAIXZ
    virtual unsigned int GetMaxCommandCount() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMinCommandCount@CCustomPopupWindowImpl@Internal@Windows@@UEBAIXZ
    virtual unsigned int GetMinCommandCount() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMonitor@CCustomPopupWindowImpl@Internal@Windows@@UEAAJPEAPEAUIImmersiveMonitor@@@Z
    virtual long GetMonitor(IImmersiveMonitor * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPopupCommand@CCustomPopupWindowImpl@Internal@Windows@@UEAAJIPEAPEAUIPopupCommand@@@Z
    virtual long GetPopupCommand(unsigned int, IPopupCommand * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelectedCommandIndex@CCustomPopupWindowImpl@Internal@Windows@@UEAAJPEAI@Z
    virtual long GetSelectedCommandIndex(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTitle@CCustomPopupWindowImpl@Internal@Windows@@UEAAJPEAPEAG@Z
    virtual long GetTitle(unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HideTitle@CCustomPopupWindowImpl@Internal@Windows@@UEAAJXZ
    virtual long HideTitle();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HideWindow@CCustomPopupWindowImpl@Internal@Windows@@UEAAXXZ
    virtual void HideWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HideWindowAndKeepActivation@CCustomPopupWindowImpl@Internal@Windows@@UEAAXXZ
    virtual void HideWindowAndKeepActivation();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDeferredThreadShutdownSupported@CCustomPopupWindowImpl@Internal@Windows@@UEBA_NXZ
    virtual bool IsDeferredThreadShutdownSupported() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsLegacyDUIRender@CCustomPopupWindowImpl@Internal@Windows@@UEBA_NXZ
    virtual bool IsLegacyDUIRender() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRTL@CCustomPopupWindowImpl@Internal@Windows@@UEAA_NXZ
    virtual bool IsRTL();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsVisible@CCustomPopupWindowImpl@Internal@Windows@@UEBA_NXZ
    virtual bool IsVisible() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAnimationTelemetryScenario@CCustomPopupWindowImpl@Internal@Windows@@UEAAXAEBU_GUID@@@Z
    virtual void SetAnimationTelemetryScenario(_GUID const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAppItem@CCustomPopupWindowImpl@Internal@Windows@@UEAAJPEAUIShellItem@@@Z
    virtual long SetAppItem(IShellItem *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetApplicationImage@CCustomPopupWindowImpl@Internal@Windows@@UEAAJPEAUIWICBitmapSource@@@Z
    virtual long SetApplicationImage(IWICBitmapSource *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBackButtonEvent@CCustomPopupWindowImpl@Internal@Windows@@UEAAJPEAUIPopupEventHandler@@@Z
    virtual long SetBackButtonEvent(IPopupEventHandler *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBackgroundColor@CCustomPopupWindowImpl@Internal@Windows@@UEAAJK@Z
    virtual long SetBackgroundColor(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCancelCommandIndex@CCustomPopupWindowImpl@Internal@Windows@@UEAAJI@Z
    virtual long SetCancelCommandIndex(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetContent@CCustomPopupWindowImpl@Internal@Windows@@UEAAJPEAUIInspectable@@@Z
    virtual long SetContent(IInspectable *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCoreWindowCallback@CCustomPopupWindowImpl@Internal@Windows@@UEAAJPEAUIPopupCoreWindowCallback@@@Z
    virtual long SetCoreWindowCallback(IPopupCoreWindowCallback *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDefaultCommandIndex@CCustomPopupWindowImpl@Internal@Windows@@UEAAJI@Z
    virtual long SetDefaultCommandIndex(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDestroyEvent@CCustomPopupWindowImpl@Internal@Windows@@UEAAJPEAUIPopupEventHandler@@@Z
    virtual long SetDestroyEvent(IPopupEventHandler *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDirection@CCustomPopupWindowImpl@Internal@Windows@@UEAAJ_N@Z
    virtual long SetDirection(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDismissEvent@CCustomPopupWindowImpl@Internal@Windows@@UEAAJPEAUIPopupEventHandler@@@Z
    virtual long SetDismissEvent(IPopupEventHandler *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHeaderColor@CCustomPopupWindowImpl@Internal@Windows@@UEAAJK@Z
    virtual long SetHeaderColor(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHeight@CCustomPopupWindowImpl@Internal@Windows@@UEAAJI@Z
    virtual long SetHeight(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsInteractionDelayed@CCustomPopupWindowImpl@Internal@Windows@@UEAAX_N@Z
    virtual void SetIsInteractionDelayed(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetKeyboardVisibilityEvent@CCustomPopupWindowImpl@Internal@Windows@@UEAAJPEAUIPopupKeyboardVisibilityEventHandler@@@Z
    virtual long SetKeyboardVisibilityEvent(IPopupKeyboardVisibilityEventHandler *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMaxCommandCount@CCustomPopupWindowImpl@Internal@Windows@@UEAAXI@Z
    virtual void SetMaxCommandCount(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMinCommandCount@CCustomPopupWindowImpl@Internal@Windows@@UEAAXI@Z
    virtual void SetMinCommandCount(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMonitor@CCustomPopupWindowImpl@Internal@Windows@@UEAAJPEAUIImmersiveMonitor@@@Z
    virtual long SetMonitor(IImmersiveMonitor *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPopupCommands@CCustomPopupWindowImpl@Internal@Windows@@UEAAJIPEAPEAUIPopupCommand@@@Z
    virtual long SetPopupCommands(unsigned int, IPopupCommand * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSelectedCommandIndex@CCustomPopupWindowImpl@Internal@Windows@@UEAAJI@Z
    virtual long SetSelectedCommandIndex(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTitle@CCustomPopupWindowImpl@Internal@Windows@@UEAAJPEBG@Z
    virtual long SetTitle(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUIAName@CCustomPopupWindowImpl@Internal@Windows@@UEAAJPEBG@Z
    virtual long SetUIAName(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWidth@CCustomPopupWindowImpl@Internal@Windows@@UEAAJI@Z
    virtual long SetWidth(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowProgress@CCustomPopupWindowImpl@Internal@Windows@@UEAAJ_N@Z
    virtual long ShowProgress(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowTitle@CCustomPopupWindowImpl@Internal@Windows@@UEAAJXZ
    virtual long ShowTitle();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowWindow@CCustomPopupWindowImpl@Internal@Windows@@UEAAJXZ
    virtual long ShowWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartDefer@CCustomPopupWindowImpl@Internal@Windows@@UEAAKXZ
    virtual unsigned long StartDefer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateLightDismiss@CCustomPopupWindowImpl@Internal@Windows@@UEAAJ_N@Z
    virtual long UpdateLightDismiss(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasHyperlinkInvoked@CCustomPopupWindowImpl@Internal@Windows@@UEAAJPEA_N@Z
    virtual long WasHyperlinkInvoked(bool *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CCustomPopupWindowImpl@Internal@Windows@@UEAA@XZ
    virtual ~CCustomPopupWindowImpl();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ComputeContentSize@CCustomPopupWindowImpl@Internal@Windows@@AEAA?AUtagSIZE@@AEBU4@AEBVCConstraint@Immersive@UI@3@_N@Z
    tagSIZE _ComputeContentSize(tagSIZE const &, ::Windows::UI::Immersive::CConstraint const &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ComputeDesiredSize@CCustomPopupWindowImpl@Internal@Windows@@AEAA?AUtagSIZE@@AEBVCConstraint@Immersive@UI@3@_N@Z
    tagSIZE _ComputeDesiredSize(::Windows::UI::Immersive::CConstraint const &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ComputeLayout@CCustomPopupWindowImpl@Internal@Windows@@AEAAXAEBVCConstraint@Immersive@UI@3@_N@Z
    void _ComputeLayout(::Windows::UI::Immersive::CConstraint const &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ComputeWindowRect@CCustomPopupWindowImpl@Internal@Windows@@AEAA?AUtagRECT@@AEBUtagSIZE@@AEBVCConstraint@Immersive@UI@3@_N@Z
    tagRECT _ComputeWindowRect(tagSIZE const &, ::Windows::UI::Immersive::CConstraint const &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateHostWindow@CCustomPopupWindowImpl@Internal@Windows@@AEAAPEAUHWND__@@KPEBG0KHHHHPEAU4@PEAUHMENU__@@PEAUHINSTANCE__@@PEAX@Z
    HWND__* _CreateHostWindow(unsigned long, unsigned short const *, unsigned short const *, unsigned long, int, int, int, int, HWND__*, HMENU__*, HINSTANCE__*, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureProxy@CCustomPopupWindowImpl@Internal@Windows@@AEAAJ_N@Z
    long _EnsureProxy(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureTabletModeSubscription@CCustomPopupWindowImpl@Internal@Windows@@AEAAXXZ
    void _EnsureTabletModeSubscription();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetHostMonitor@CCustomPopupWindowImpl@Internal@Windows@@AEBAPEAUHMONITOR__@@XZ
    HMONITOR__* _GetHostMonitor() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HideWindow@CCustomPopupWindowImpl@Internal@Windows@@AEAAX_N@Z
    void _HideWindow(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Initialize@CCustomPopupWindowImpl@Internal@Windows@@AEAAJPEAUPositionTraits@23@PEAUDismissTraits@23@PEAUWindowTraits@23@PEAUAnimationTraits@23@PEAUHWND__@@W4POPUP_PERSONALITY@@_NW4POPUP_OPTIONS@@W4XamlPopupOptions@@PEAUHMONITOR__@@@Z
    long _Initialize(::Windows::Internal::PositionTraits *, ::Windows::Internal::DismissTraits *, ::Windows::Internal::WindowTraits *, ::Windows::Internal::AnimationTraits *, HWND__*, int, bool, int, int, HMONITOR__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnDimmingWindowRepositioned@CCustomPopupWindowImpl@Internal@Windows@@AEAAXXZ
    void _OnDimmingWindowRepositioned();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnDisplayChangeForCharmWindow@CCustomPopupWindowImpl@Internal@Windows@@AEAAXHH_N@Z
    void _OnDisplayChangeForCharmWindow(int, int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnMessage@CCustomPopupWindowImpl@Internal@Windows@@AEAAJI_K_JPEA_J@Z
    long _OnMessage(unsigned int, uint64_t, int64_t, int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnWindowPosChanging@CCustomPopupWindowImpl@Internal@Windows@@AEAAXPEAUtagWINDOWPOS@@@Z
    void _OnWindowPosChanging(tagWINDOWPOS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ResizeForIHM@CCustomPopupWindowImpl@Internal@Windows@@AEAAXXZ
    void _ResizeForIHM();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SendKeyboardVisibilityEvent@CCustomPopupWindowImpl@Internal@Windows@@AEAAXXZ
    void _SendKeyboardVisibilityEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_HostWindowSubclassProc@CCustomPopupWindowImpl@Internal@Windows@@CA_JPEAUHWND__@@I_K_J11@Z
    static int64_t s_HostWindowSubclassProc(HWND__*, unsigned int, uint64_t, int64_t, uint64_t, uint64_t);
};
} // namespace Windows::Internal
