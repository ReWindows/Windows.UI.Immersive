#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 4 member(s).
class CSimpleLightDismissProvider {
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateOverlayWindow@CSimpleLightDismissProvider@@MEAAPEAUHWND__@@KPEBGKAEBUtagRECT@@PEAUHINSTANCE__@@PEAXW4ZBID@@@Z
    virtual HWND__* CreateOverlayWindow(unsigned long, unsigned short const *, unsigned long, tagRECT const &, HINSTANCE__*, void *, int);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSimpleLightDismissProvider@@EEAA@XZ
    virtual ~CSimpleLightDismissProvider();
};
