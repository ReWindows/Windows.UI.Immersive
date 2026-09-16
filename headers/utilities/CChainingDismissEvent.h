#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 4 member(s).
namespace Windows::Internal {
class CChainingDismissEvent {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@CChainingDismissEvent@Internal@Windows@@UEAAJPEAUIPopupWindow@@@Z
    virtual long Invoke(IPopupWindow *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CChainingDismissEvent@Internal@Windows@@UEAA@XZ
    virtual ~CChainingDismissEvent();
};
} // namespace Windows::Internal
