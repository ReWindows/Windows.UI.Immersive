#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 14 member(s).
class CImmersiveLightDismissProvider {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppVisibilityOnMonitorChanged@CImmersiveLightDismissProvider@@UEAAJPEAUHMONITOR__@@W4MONITOR_APP_VISIBILITY@@1@Z
    virtual long AppVisibilityOnMonitorChanged(HMONITOR__*, int, int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CImmersiveLightDismissProvider@@QEAA@XZ
    CImmersiveLightDismissProvider();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LauncherVisibilityChange@CImmersiveLightDismissProvider@@UEAAJH@Z
    virtual long LauncherVisibilityChange(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnShellHookMessage@CImmersiveLightDismissProvider@@UEAAJ_K_J@Z
    virtual long OnShellHookMessage(uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CImmersiveLightDismissProvider@@QEAAJXZ
    long RuntimeClassInitialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubscribeToServices@CImmersiveLightDismissProvider@@UEAAJPEAUIServiceProvider@@@Z
    virtual long SubscribeToServices(IServiceProvider *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnsubscribeFromServices@CImmersiveLightDismissProvider@@UEAAJPEAUIServiceProvider@@@Z
    virtual long UnsubscribeFromServices(IServiceProvider *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CImmersiveLightDismissProvider@@UEAA@XZ
    virtual ~CImmersiveLightDismissProvider();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateOverlayWindow@CImmersiveLightDismissProvider@@MEAAPEAUHWND__@@KPEBGKAEBUtagRECT@@PEAUHINSTANCE__@@PEAXW4ZBID@@@Z
    virtual HWND__* CreateOverlayWindow(unsigned long, unsigned short const *, unsigned long, tagRECT const &, HINSTANCE__*, void *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowPosChanging@CImmersiveLightDismissProvider@@MEAA_NPEAUtagWINDOWPOS@@@Z
    virtual bool OnWindowPosChanging(tagWINDOWPOS *);
};
