#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 4 member(s).
namespace Windows::Internal {
class CCommandHandlerWrapper {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@CCommandHandlerWrapper@Internal@Windows@@UEAAJPEAUIPopupWindow@@PEAUIPopupCommand@@@Z
    virtual long Invoke(IPopupWindow *, IPopupCommand *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CCommandHandlerWrapper@Internal@Windows@@UEAA@XZ
    virtual ~CCommandHandlerWrapper();
};
} // namespace Windows::Internal
