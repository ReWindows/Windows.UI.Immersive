#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 3 member(s).
namespace Windows::Internal {
class CDefaultKeyboardVisibilityEvent {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@CDefaultKeyboardVisibilityEvent@Internal@Windows@@UEAAJPEAUIPopupWindow@@AEBUtagRECT@@@Z
    virtual long Invoke(IPopupWindow *, tagRECT const &);
};
} // namespace Windows::Internal
