#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 8 member(s).
namespace Windows::Internal {
class CChainingManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DismissEntireChain@CChainingManager@Internal@Windows@@QEAAJXZ
    long DismissEntireChain();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveChain@CChainingManager@Internal@Windows@@QEAAJXZ
    long RemoveChain();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReturnToPreviousPopup@CChainingManager@Internal@Windows@@QEAAJXZ
    long ReturnToPreviousPopup();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CChainingManager@Internal@Windows@@QEAAJPEAUIPopupWindow@@PEAUIPopupBase@@@Z
    long RuntimeClassInitialize(IPopupWindow *, IPopupBase *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDismissEvent@CChainingManager@Internal@Windows@@QEAAJPEAUIPopupEventHandler@@@Z
    long SetDismissEvent(IPopupEventHandler *);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CChainingManager@Internal@Windows@@EEAA@XZ
    virtual ~CChainingManager();
};
} // namespace Windows::Internal
