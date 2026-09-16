#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 108 member(s).
namespace Windows::Internal {
class CPopupWindow {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CPopupWindow@Internal@Windows@@QEAA@PEAUPositionTraits@12@PEAUDismissTraits@12@PEAUWindowTraits@12@PEAUAnimationTraits@12@_N@Z
    CPopupWindow(::Windows::Internal::PositionTraits *, ::Windows::Internal::DismissTraits *, ::Windows::Internal::WindowTraits *, ::Windows::Internal::AnimationTraits *, bool);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CPopupWindow@Internal@Windows@@QEAA@PEAUIPopupWindowImplBase@12@@Z
    CPopupWindow(::Windows::Internal::IPopupWindowImplBase *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cancel@CPopupWindow@Internal@Windows@@UEAAJXZ
    virtual long Cancel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearScenario@CPopupWindow@Internal@Windows@@UEAAXXZ
    virtual void ClearScenario();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContextSensitiveHelp@CPopupWindow@Internal@Windows@@UEAAJH@Z
    virtual long ContextSensitiveHelp(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CPopupWindow@Internal@Windows@@UEAAJXZ
    virtual long Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Dismiss@CPopupWindow@Internal@Windows@@UEAAJXZ
    virtual long Dismiss();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndDefer@CPopupWindow@Internal@Windows@@UEAAJK@Z
    virtual long EndDefer(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMonitor@CPopupWindow@Internal@Windows@@UEAAJPEAPEAUIImmersiveMonitor@@@Z
    virtual long GetMonitor(IImmersiveMonitor * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPopupCommand@CPopupWindow@Internal@Windows@@UEAAJIPEAPEAUIPopupCommand@@@Z
    virtual long GetPopupCommand(unsigned int, IPopupCommand * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindow@CPopupWindow@Internal@Windows@@UEAAJPEAPEAUHWND__@@@Z
    virtual long GetWindow(HWND__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Hide@CPopupWindow@Internal@Windows@@UEAAJXZ
    virtual long Hide();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HideAndKeepActivation@CPopupWindow@Internal@Windows@@UEAAJXZ
    virtual long HideAndKeepActivation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CPopupWindow@Internal@Windows@@UEAAJPEAUHWND__@@IIW4POPUP_OPTIONS@@W4POPUP_PERSONALITY@@PEAUHMONITOR__@@PEAUIPopupXamlMetadataProviderSource@@W4XamlPopupOptions@@@Z
    virtual long Initialize(HWND__*, unsigned int, unsigned int, int, int, HMONITOR__*, IPopupXamlMetadataProviderSource *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDeferredThreadShutdownSupported@CPopupWindow@Internal@Windows@@UEAAJPEAH@Z
    virtual long IsDeferredThreadShutdownSupported(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsLegacyDUIRender@CPopupWindow@Internal@Windows@@UEAAJPEAH@Z
    virtual long IsLegacyDUIRender(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareForChainedTransition@CPopupWindow@Internal@Windows@@UEAAJPEAUIPopupBase@@@Z
    virtual long PrepareForChainedTransition(IPopupBase *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryService@CPopupWindow@Internal@Windows@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryService(_GUID const &, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetContent@CPopupWindow@Internal@Windows@@UEAAJPEAUIUnknown@@@Z
    virtual long SetContent(IUnknown *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCoreWindowCallback@CPopupWindow@Internal@Windows@@UEAAJPEAUIPopupCoreWindowCallback@@@Z
    virtual long SetCoreWindowCallback(IPopupCoreWindowCallback *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDUIContent@CPopupWindow@Internal@Windows@@UEAAJPEAVElement@DirectUI@@@Z
    virtual long SetDUIContent(::DirectUI::Element *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMonitor@CPopupWindow@Internal@Windows@@UEAAJPEAUIImmersiveMonitor@@@Z
    virtual long SetMonitor(IImmersiveMonitor *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPopupCommands@CPopupWindow@Internal@Windows@@UEAAJIPEAPEAUIPopupCommand@@@Z
    virtual long SetPopupCommands(unsigned int, IPopupCommand * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPreviousPopup@CPopupWindow@Internal@Windows@@UEAAJPEAUIPopupBase@@@Z
    virtual long SetPreviousPopup(IPopupBase *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetScenario@CPopupWindow@Internal@Windows@@UEAAXAEBU_GUID@@@Z
    virtual void SetScenario(_GUID const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUIAOptions@CPopupWindow@Internal@Windows@@UEAAJPEBGH@Z
    virtual long SetUIAOptions(unsigned short const *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetXAMLContent@CPopupWindow@Internal@Windows@@UEAAJPEAUIPopupXamlContentProvider@@@Z
    virtual long SetXAMLContent(IPopupXamlContentProvider *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Show@CPopupWindow@Internal@Windows@@UEAAJXZ
    virtual long Show();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowProgress@CPopupWindow@Internal@Windows@@UEAAJH@Z
    virtual long ShowProgress(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartDefer@CPopupWindow@Internal@Windows@@UEAAJPEAK@Z
    virtual long StartDefer(unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SyncDestroy@CPopupWindow@Internal@Windows@@UEAAJXZ
    virtual long SyncDestroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateLightDismiss@CPopupWindow@Internal@Windows@@UEAAJH@Z
    virtual long UpdateLightDismiss(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ApplicationImage@CPopupWindow@Internal@Windows@@UEAAJPEAPEAUIUnknown@@@Z
    virtual long get_ApplicationImage(IUnknown * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BackButtonEvent@CPopupWindow@Internal@Windows@@UEAAJPEAPEAUIPopupEventHandler@@@Z
    virtual long get_BackButtonEvent(IPopupEventHandler * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BackgroundColor@CPopupWindow@Internal@Windows@@UEAAJPEAK@Z
    virtual long get_BackgroundColor(unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CancelCommandIndex@CPopupWindow@Internal@Windows@@UEAAJPEAI@Z
    virtual long get_CancelCommandIndex(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DefaultCommandIndex@CPopupWindow@Internal@Windows@@UEAAJPEAI@Z
    virtual long get_DefaultCommandIndex(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DestroyEvent@CPopupWindow@Internal@Windows@@UEAAJPEAPEAUIPopupEventHandler@@@Z
    virtual long get_DestroyEvent(IPopupEventHandler * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DismissEvent@CPopupWindow@Internal@Windows@@UEAAJPEAPEAUIPopupEventHandler@@@Z
    virtual long get_DismissEvent(IPopupEventHandler * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HeaderColor@CPopupWindow@Internal@Windows@@UEAAJPEAK@Z
    virtual long get_HeaderColor(unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsRTL@CPopupWindow@Internal@Windows@@UEAAJPEAH@Z
    virtual long get_IsRTL(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_KeyboardVisibilityEvent@CPopupWindow@Internal@Windows@@UEAAJPEAPEAUIPopupKeyboardVisibilityEventHandler@@@Z
    virtual long get_KeyboardVisibilityEvent(IPopupKeyboardVisibilityEventHandler * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MaxButtonCount@CPopupWindow@Internal@Windows@@UEAAJPEAI@Z
    virtual long get_MaxButtonCount(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SelectedCommandIndex@CPopupWindow@Internal@Windows@@UEAAJPEAI@Z
    virtual long get_SelectedCommandIndex(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Title@CPopupWindow@Internal@Windows@@UEAAJPEAPEAG@Z
    virtual long get_Title(unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_WasHyperlinkInvoked@CPopupWindow@Internal@Windows@@UEAAJPEAH@Z
    virtual long get_WasHyperlinkInvoked(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ApplicationImage@CPopupWindow@Internal@Windows@@UEAAJPEAUIUnknown@@@Z
    virtual long put_ApplicationImage(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_BackButtonEvent@CPopupWindow@Internal@Windows@@UEAAJPEAUIPopupEventHandler@@@Z
    virtual long put_BackButtonEvent(IPopupEventHandler *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_BackgroundColor@CPopupWindow@Internal@Windows@@UEAAJK@Z
    virtual long put_BackgroundColor(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_CancelCommandIndex@CPopupWindow@Internal@Windows@@UEAAJI@Z
    virtual long put_CancelCommandIndex(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_DefaultCommandIndex@CPopupWindow@Internal@Windows@@UEAAJI@Z
    virtual long put_DefaultCommandIndex(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_DestroyEvent@CPopupWindow@Internal@Windows@@UEAAJPEAUIPopupEventHandler@@@Z
    virtual long put_DestroyEvent(IPopupEventHandler *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_DismissEvent@CPopupWindow@Internal@Windows@@UEAAJPEAUIPopupEventHandler@@@Z
    virtual long put_DismissEvent(IPopupEventHandler *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_HeaderColor@CPopupWindow@Internal@Windows@@UEAAJK@Z
    virtual long put_HeaderColor(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Height@CPopupWindow@Internal@Windows@@UEAAJI@Z
    virtual long put_Height(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsRTL@CPopupWindow@Internal@Windows@@UEAAJH@Z
    virtual long put_IsRTL(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_KeyboardVisibilityEvent@CPopupWindow@Internal@Windows@@UEAAJPEAUIPopupKeyboardVisibilityEventHandler@@@Z
    virtual long put_KeyboardVisibilityEvent(IPopupKeyboardVisibilityEventHandler *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SelectedCommandIndex@CPopupWindow@Internal@Windows@@UEAAJI@Z
    virtual long put_SelectedCommandIndex(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Title@CPopupWindow@Internal@Windows@@UEAAJPEBG@Z
    virtual long put_Title(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Width@CPopupWindow@Internal@Windows@@UEAAJI@Z
    virtual long put_Width(unsigned int);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?HideTitle@CPopupWindow@Internal@Windows@@IEAAJXZ
    long HideTitle();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAppItem@CPopupWindow@Internal@Windows@@IEAAJPEAUIShellItem@@@Z
    long SetAppItem(IShellItem *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPopupWindow@Internal@Windows@@MEAA@XZ
    virtual ~CPopupWindow();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddCloseCommand@CPopupWindow@Internal@Windows@@AEAAJXZ
    long _AddCloseCommand();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DestroyWindowHelper@CPopupWindow@Internal@Windows@@AEAAJ_N@Z
    long _DestroyWindowHelper(bool);
};
} // namespace Windows::Internal
