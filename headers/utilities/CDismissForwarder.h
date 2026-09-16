#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 6 member(s).
namespace Windows::Internal {
class CDismissForwarder {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDismissForwarder@Internal@Windows@@QEAA@PEAUIPopupWindow@@@Z
    CDismissForwarder(IPopupWindow *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@CDismissForwarder@Internal@Windows@@UEAAJPEAUIPopupWindow@@@Z
    virtual long Invoke(IPopupWindow *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDismissEvent@CDismissForwarder@Internal@Windows@@QEAAJPEAUIPopupEventHandler@@@Z
    long SetDismissEvent(IPopupEventHandler *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDismissForwarder@Internal@Windows@@UEAA@XZ
    virtual ~CDismissForwarder();
};
} // namespace Windows::Internal
