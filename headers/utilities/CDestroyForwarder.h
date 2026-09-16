#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 4 member(s).
namespace Windows::Internal {
class CDestroyForwarder {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@CDestroyForwarder@Internal@Windows@@UEAAJPEAUIPopupWindow@@@Z
    virtual long Invoke(IPopupWindow *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDestroyForwarder@Internal@Windows@@UEAA@XZ
    virtual ~CDestroyForwarder();
};
} // namespace Windows::Internal
