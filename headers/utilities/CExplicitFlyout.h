#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 14 member(s).
namespace Windows::Internal {
class CExplicitFlyout {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CExplicitFlyout@Internal@Windows@@QEAA@W4POPUP_OPTIONS@@AEBUtagPOINT@@W4FLYOUT_ANIMATION_DIRECTION@@@Z
    CExplicitFlyout(int, tagPOINT const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowProgress@CExplicitFlyout@Internal@Windows@@UEAAJH@Z
    virtual long ShowProgress(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ApplicationImage@CExplicitFlyout@Internal@Windows@@UEAAJPEAPEAUIUnknown@@@Z
    virtual long get_ApplicationImage(IUnknown * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HeaderColor@CExplicitFlyout@Internal@Windows@@UEAAJPEAK@Z
    virtual long get_HeaderColor(unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ApplicationImage@CExplicitFlyout@Internal@Windows@@UEAAJPEAUIUnknown@@@Z
    virtual long put_ApplicationImage(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_HeaderColor@CExplicitFlyout@Internal@Windows@@UEAAJK@Z
    virtual long put_HeaderColor(unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CExplicitFlyout@Internal@Windows@@UEAA@XZ
    virtual ~CExplicitFlyout();
};
} // namespace Windows::Internal
