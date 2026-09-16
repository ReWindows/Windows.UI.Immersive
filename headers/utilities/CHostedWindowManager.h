#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 9 member(s).
class CHostedWindowManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostTranslateAccelerator@CHostedWindowManager@@UEAAJPEAUtagMSG@@PEAE@Z
    virtual long PostTranslateAccelerator(tagMSG *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreTranslateAccelerator@CHostedWindowManager@@UEAAJPEAUtagMSG@@PEAE@Z
    virtual long PreTranslateAccelerator(tagMSG *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CHostedWindowManager@@QEAAJAEBU_GUID@@AEBUtagRECT@@PEAUHWND__@@PEAU3@@Z
    long RuntimeClassInitialize(_GUID const &, tagRECT const &, HWND__*, tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHostedWindow@CHostedWindowManager@@QEAAJPEAUICoreWindowFactoryPriv@@PEAUICoreWindow@Core@UI@Windows@@@Z
    long SetHostedWindow(ICoreWindowFactoryPriv *, ::Windows::UI::Core::ICoreWindow *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CHostedWindowManager@@UEAA@XZ
    virtual ~CHostedWindowManager();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ConfigureDispatcher@CHostedWindowManager@@AEAAJPEAUICoreWindow@Core@UI@Windows@@@Z
    long _ConfigureDispatcher(::Windows::UI::Core::ICoreWindow *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HostTranslateAccelerator@CHostedWindowManager@@AEAAJPEAUtagMSG@@@Z
    long _HostTranslateAccelerator(tagMSG *);
};
