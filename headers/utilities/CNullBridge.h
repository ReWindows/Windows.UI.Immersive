#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 21 member(s).
class CNullBridge {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppWindowIsReady@CNullBridge@@UEAAJXZ
    virtual long AppWindowIsReady();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFrame@CNullBridge@@UEAAJPEBUtagRECT@@PEAUHWND__@@@Z
    virtual long CreateFrame(tagRECT const *, HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBridgeWindow@CNullBridge@@UEAAJPEAPEAUHWND__@@@Z
    virtual long GetBridgeWindow(HWND__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentPosition@CNullBridge@@UEAAJPEAUtagRECT@@@Z
    virtual long GetContentPosition(tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFrameWindow@CNullBridge@@UEAAJPEAPEAUHWND__@@@Z
    virtual long GetFrameWindow(HWND__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HideApplication@CNullBridge@@UEAAJW4APP_TRANSITION_TYPE@@@Z
    virtual long HideApplication(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeBridge@CNullBridge@@UEAAJAEBU_GUID@@@Z
    virtual long InitializeBridge(_GUID const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsApplicationTerminated@CNullBridge@@UEAAHXZ
    virtual int IsApplicationTerminated();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsApplicationVisible@CNullBridge@@UEAAHXZ
    virtual int IsApplicationVisible();
    // Category: Method | Source: PDB Internal
    // Symbol: ?KeepInputQueueDetached@CNullBridge@@UEAAJH@Z
    virtual long KeepInputQueueDetached(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnActivationComplete@CNullBridge@@UEAAXJ@Z
    virtual void OnActivationComplete(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnActivationCompleteWithSplashScreenCallback@CNullBridge@@UEAAXJPEAUISplashScreenPriv@@@Z
    virtual void OnActivationCompleteWithSplashScreenCallback(long, ISplashScreenPriv *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetContent@CNullBridge@@UEAAJPEAUIUnknown@@@Z
    virtual long SetContent(IUnknown *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetEventSink@CNullBridge@@UEAAJPEAUIWeakReference@@@Z
    virtual long SetEventSink(IWeakReference *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHostedApplication@CNullBridge@@UEAAJPEAUIHostedApplication@@@Z
    virtual long SetHostedApplication(IHostedApplication *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHostedWindow@CNullBridge@@UEAAJPEAUHWND__@@@Z
    virtual long SetHostedWindow(HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTaskCompletionCategory@CNullBridge@@UEAAJW4PLM_TASKCOMPLETION_CATEGORY_FLAGS@@@Z
    virtual long SetTaskCompletionCategory(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUseTopLevelWindow@CNullBridge@@UEAAJH@Z
    virtual long SetUseTopLevelWindow(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowApplication@CNullBridge@@UEAAJW4APP_TRANSITION_TYPE@@PEAUHWND__@@@Z
    virtual long ShowApplication(int, HWND__*);
};
