#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 40 member(s).
class CHostedWindowFactory {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CHostedWindowFactory@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CHostedWindowFactory@@QEAA@XZ
    CHostedWindowFactory();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCoreWindow@CHostedWindowFactory@@UEAAJPEAUHSTRING__@@PEAPEAUICoreWindow@Core@UI@Windows@@@Z
    virtual long CreateCoreWindow(HSTRING__*, ::Windows::UI::Core::ICoreWindow * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSplashScreen@CHostedWindowFactory@@UEAAJW4SPLASHSCREEN_FLAGS@@PEAPEAUISplashScreen@@@Z
    virtual long CreateSplashScreen(int, ISplashScreen * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppWindow@CHostedWindowFactory@@UEAAJPEAPEAUHWND__@@@Z
    virtual long GetAppWindow(HWND__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CHostedWindowFactory@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CHostedWindowFactory@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CHostedWindowFactory@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasExistingSplashScreen@CHostedWindowFactory@@UEAAJPEAH@Z
    virtual long HasExistingSplashScreen(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CHostedWindowFactory@@UEAAJPEAUIImmersiveMonitor@@PEBG@Z
    virtual long Initialize(IImmersiveMonitor *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CHostedWindowFactory@@UEAAJPEAUIWeakReference@@PEBUtagRECT@@PEAUHWND__@@AEBU_GUID@@@Z
    virtual long Initialize(IWeakReference *, tagRECT const *, HWND__*, _GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeWithPosition@CHostedWindowFactory@@UEAAJPEAUIImmersiveMonitor@@PEBGPEBUtagRECT@@@Z
    virtual long InitializeWithPosition(IImmersiveMonitor *, unsigned short const *, tagRECT const *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CHostedWindowFactory@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CHostedWindowFactory@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAppWindow@CHostedWindowFactory@@UEAAJJ@Z
    virtual long SetAppWindow(long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAppWindowAndGetHostProcess@CHostedWindowFactory@@UEAAJJPEA_K@Z
    virtual long SetAppWindowAndGetHostProcess(long, uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetViewId@CHostedWindowFactory@@UEAAJK@Z
    virtual long SetViewId(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_WindowReuseAllowed@CHostedWindowFactory@@UEAAJPEAE@Z
    virtual long get_WindowReuseAllowed(unsigned char *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CHostedWindowFactory@@UEAA@XZ
    virtual ~CHostedWindowFactory();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetHandlerCLSID@CHostedWindowFactory@@EEAAAEBU_GUID@@XZ
    virtual _GUID const & v_GetHandlerCLSID();
};
