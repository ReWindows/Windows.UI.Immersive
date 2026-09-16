#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 14 member(s).
namespace Windows::Internal {
class CRelativeFlyout {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CRelativeFlyout@Internal@Windows@@QEAA@W4POPUP_OPTIONS@@AEBUtagRECT@@W4FLYOUT_PLACEMENT@@@Z
    CRelativeFlyout(int, tagRECT const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowProgress@CRelativeFlyout@Internal@Windows@@UEAAJH@Z
    virtual long ShowProgress(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ApplicationImage@CRelativeFlyout@Internal@Windows@@UEAAJPEAPEAUIUnknown@@@Z
    virtual long get_ApplicationImage(IUnknown * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HeaderColor@CRelativeFlyout@Internal@Windows@@UEAAJPEAK@Z
    virtual long get_HeaderColor(unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ApplicationImage@CRelativeFlyout@Internal@Windows@@UEAAJPEAUIUnknown@@@Z
    virtual long put_ApplicationImage(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_HeaderColor@CRelativeFlyout@Internal@Windows@@UEAAJK@Z
    virtual long put_HeaderColor(unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CRelativeFlyout@Internal@Windows@@UEAA@XZ
    virtual ~CRelativeFlyout();
};
} // namespace Windows::Internal
