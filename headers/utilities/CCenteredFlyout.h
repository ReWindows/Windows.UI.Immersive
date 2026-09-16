#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 14 member(s).
namespace Windows::Internal {
class CCenteredFlyout {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CCenteredFlyout@Internal@Windows@@QEAA@W4POPUP_OPTIONS@@W4FLYOUT_ANIMATION_DIRECTION@@@Z
    CCenteredFlyout(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowProgress@CCenteredFlyout@Internal@Windows@@UEAAJH@Z
    virtual long ShowProgress(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ApplicationImage@CCenteredFlyout@Internal@Windows@@UEAAJPEAPEAUIUnknown@@@Z
    virtual long get_ApplicationImage(IUnknown * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HeaderColor@CCenteredFlyout@Internal@Windows@@UEAAJPEAK@Z
    virtual long get_HeaderColor(unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ApplicationImage@CCenteredFlyout@Internal@Windows@@UEAAJPEAUIUnknown@@@Z
    virtual long put_ApplicationImage(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_HeaderColor@CCenteredFlyout@Internal@Windows@@UEAAJK@Z
    virtual long put_HeaderColor(unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CCenteredFlyout@Internal@Windows@@UEAA@XZ
    virtual ~CCenteredFlyout();
};
} // namespace Windows::Internal
