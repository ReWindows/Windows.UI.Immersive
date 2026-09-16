#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 77 member(s).
class CBridgeWindow {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CBridgeWindow@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppWindowIsReady@CBridgeWindow@@UEAAJXZ
    virtual long AppWindowIsReady();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CBridgeWindow@@QEAA@XZ
    CBridgeWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFrame@CBridgeWindow@@UEAAJPEBUtagRECT@@PEAUHWND__@@@Z
    virtual long CreateFrame(tagRECT const *, HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisableSplashScreen@CBridgeWindow@@UEAAJXZ
    virtual long DisableSplashScreen();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBridgeWindow@CBridgeWindow@@UEAAJPEAPEAUHWND__@@@Z
    virtual long GetBridgeWindow(HWND__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentPosition@CBridgeWindow@@UEAAJPEAUtagRECT@@@Z
    virtual long GetContentPosition(tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetElement@CBridgeWindow@@UEAAJPEAPEAVElement@DirectUI@@@Z
    virtual long GetElement(::DirectUI::Element * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFrameWindow@CBridgeWindow@@UEAAJPEAPEAUHWND__@@@Z
    virtual long GetFrameWindow(HWND__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasFocusIO@CBridgeWindow@@UEAAJXZ
    virtual long HasFocusIO();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HideApplication@CBridgeWindow@@UEAAJW4APP_TRANSITION_TYPE@@@Z
    virtual long HideApplication(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeBridge@CBridgeWindow@@UEAAJAEBU_GUID@@@Z
    virtual long InitializeBridge(_GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeAlternateNavigationFocusHandlers@CBridgeWindow@@UEAAJPEAUINavigateFocusArgs@Core@UI@Windows@@@Z
    virtual long InvokeAlternateNavigationFocusHandlers(::Windows::UI::Core::INavigateFocusArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeComponentWindowActivatedEventHandlers@CBridgeWindow@@UEAAJE@Z
    virtual long InvokeComponentWindowActivatedEventHandlers(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeNavigationFocusEventHandlers@CBridgeWindow@@UEAAJPEAUINavigationFocusEventArgs@Core@UI@Windows@@@Z
    virtual long InvokeNavigationFocusEventHandlers(::Windows::UI::Core::INavigationFocusEventArgs *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsApplicationTerminated@CBridgeWindow@@UEAAHXZ
    virtual int IsApplicationTerminated();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsApplicationVisible@CBridgeWindow@@UEAAHXZ
    virtual int IsApplicationVisible();
    // Category: Method | Source: PDB Internal
    // Symbol: ?KeepInputQueueDetached@CBridgeWindow@@UEAAJH@Z
    virtual long KeepInputQueueDetached(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnActivationComplete@CBridgeWindow@@UEAAXJ@Z
    virtual void OnActivationComplete(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnActivationCompleteWithSplashScreenCallback@CBridgeWindow@@UEAAXJPEAUISplashScreenPriv@@@Z
    virtual void OnActivationCompleteWithSplashScreenCallback(long, ISplashScreenPriv *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnListenedPropertyChanged@CBridgeWindow@@UEAAXPEAVElement@DirectUI@@PEBUPropertyInfo@3@HPEAVValue@3@2@Z
    virtual void OnListenedPropertyChanged(::DirectUI::Element *, ::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CBridgeWindow@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetContent@CBridgeWindow@@UEAAJPEAUIUnknown@@@Z
    virtual long SetContent(IUnknown *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetEventSink@CBridgeWindow@@UEAAJPEAUIWeakReference@@@Z
    virtual long SetEventSink(IWeakReference *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHostedApplication@CBridgeWindow@@UEAAJPEAUIHostedApplication@@@Z
    virtual long SetHostedApplication(IHostedApplication *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHostedWindow@CBridgeWindow@@UEAAJPEAUHWND__@@@Z
    virtual long SetHostedWindow(HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTaskCompletionCategory@CBridgeWindow@@UEAAJW4PLM_TASKCOMPLETION_CATEGORY_FLAGS@@@Z
    virtual long SetTaskCompletionCategory(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUseTopLevelWindow@CBridgeWindow@@UEAAJH@Z
    virtual long SetUseTopLevelWindow(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowApplication@CBridgeWindow@@UEAAJW4APP_TRANSITION_TYPE@@PEAUHWND__@@@Z
    virtual long ShowApplication(int, HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShutdownApplication@CBridgeWindow@@UEAAJXZ
    virtual long ShutdownApplication();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrackDesktopSwitches@CBridgeWindow@@UEAAJXZ
    virtual long TrackDesktopSwitches();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TranslateAcceleratorIO@CBridgeWindow@@UEAAJPEAUtagMSG@@@Z
    virtual long TranslateAcceleratorIO(tagMSG *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UIActivateIO@CBridgeWindow@@UEAAJHPEAUtagMSG@@@Z
    virtual long UIActivateIO(int, tagMSG *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AttachOrDetachInputQueues@CBridgeWindow@@AEAAJ_NPEAUHWND__@@0@Z
    long _AttachOrDetachInputQueues(bool, HWND__*, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_BeginTaskCompletion@CBridgeWindow@@AEAAJPEAUHWND__@@W4PLM_TASKCOMPLETION_CATEGORY_FLAGS@@PEAPEAUIOSTaskCompletion@@@Z
    long _BeginTaskCompletion(HWND__*, int, IOSTaskCompletion * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CleanupExemptions@CBridgeWindow@@AEAAXXZ
    void _CleanupExemptions();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CloakWindow@CBridgeWindow@@AEAAJH@Z
    long _CloakWindow(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CloseApp@CBridgeWindow@@AEAAXXZ
    void _CloseApp();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureBridgeWindow@CBridgeWindow@@AEAAJPEAUHWND__@@@Z
    long _EnsureBridgeWindow(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureCustomFrame@CBridgeWindow@@AEAAJXZ
    long _EnsureCustomFrame();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureDuiElement@CBridgeWindow@@AEAAJXZ
    long _EnsureDuiElement();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureFrameWindow@CBridgeWindow@@AEAAJXZ
    long _EnsureFrameWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureRegisteredPLMExemption@CBridgeWindow@@AEAAJPEAUHWND__@@@Z
    long _EnsureRegisteredPLMExemption(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetHostId@CBridgeWindow@@AEAAJPEA_K@Z
    long _GetHostId(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleDesktopSwitchEvent@CBridgeWindow@@CAXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@Z
    static void _HandleDesktopSwitchEvent(HWINEVENTHOOK__*, unsigned long, HWND__*, long, long, unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MaybeNotifySplashScreenDismissed@CBridgeWindow@@AEAAXXZ
    void _MaybeNotifySplashScreenDismissed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MaybeShowAppWindow@CBridgeWindow@@AEAAXPEAUHWND__@@@Z
    void _MaybeShowAppWindow(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_NotifyViewHosted@CBridgeWindow@@AEAAJXZ
    long _NotifyViewHosted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RemoveOwner@CBridgeWindow@@AEAAXJ@Z
    void _RemoveOwner(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RemovePLMExemption@CBridgeWindow@@AEAAXXZ
    void _RemovePLMExemption();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetVisibility@CBridgeWindow@@AEAAX_NW4APP_TRANSITION_TYPE@@PEAUHWND__@@@Z
    void _SetVisibility(bool, int, HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShowCrashText@CBridgeWindow@@AEAAXXZ
    void _ShowCrashText();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SyncWindowPosition@CBridgeWindow@@AEAAXXZ
    void _SyncWindowPosition();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TranslateAcceleratorFromHostedWindow@CBridgeWindow@@AEAAHI_K_J@Z
    int _TranslateAcceleratorFromHostedWindow(unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UIActivateAppInstance@CBridgeWindow@@AEAAX_NPEAUtagMSG@@@Z
    void _UIActivateAppInstance(bool, tagMSG *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_WndProc@CBridgeWindow@@EEAA_JPEAUHWND__@@I_K_J@Z
    virtual int64_t v_WndProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CBridgeWindow@@EEAA@XZ
    virtual ~CBridgeWindow();
};
