#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 10 member(s).
namespace Windows::Internal {
class CRelativeFlyoutForApp {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CRelativeFlyoutForApp@Internal@Windows@@QEAA@W4POPUP_OPTIONS@@AEBUtagRECT@@W4FLYOUT_PLACEMENT@@@Z
    CRelativeFlyoutForApp(int, tagRECT const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowProgress@CRelativeFlyoutForApp@Internal@Windows@@UEAAJH@Z
    virtual long ShowProgress(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ApplicationImage@CRelativeFlyoutForApp@Internal@Windows@@UEAAJPEAPEAUIUnknown@@@Z
    virtual long get_ApplicationImage(IUnknown * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ApplicationImage@CRelativeFlyoutForApp@Internal@Windows@@UEAAJPEAUIUnknown@@@Z
    virtual long put_ApplicationImage(IUnknown *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CRelativeFlyoutForApp@Internal@Windows@@UEAA@XZ
    virtual ~CRelativeFlyoutForApp();
};
} // namespace Windows::Internal
