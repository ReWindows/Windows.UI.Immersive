#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 4 member(s).
namespace Windows::Internal {
class CBackButtonForwarder {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@CBackButtonForwarder@Internal@Windows@@UEAAJPEAUIPopupWindow@@@Z
    virtual long Invoke(IPopupWindow *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CBackButtonForwarder@Internal@Windows@@UEAA@XZ
    virtual ~CBackButtonForwarder();
};
} // namespace Windows::Internal
