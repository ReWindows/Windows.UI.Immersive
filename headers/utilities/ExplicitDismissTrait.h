#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 7 member(s).
namespace Windows::Internal {
class ExplicitDismissTrait {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DismissOnESC@ExplicitDismissTrait@Internal@Windows@@UEBA_NXZ
    virtual bool DismissOnESC() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reregister@ExplicitDismissTrait@Internal@Windows@@UEAAJPEAUHWND__@@@Z
    virtual long Reregister(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unregister@ExplicitDismissTrait@Internal@Windows@@UEAAJXZ
    virtual long Unregister();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update@ExplicitDismissTrait@Internal@Windows@@UEAAJPEAUHWND__@@@Z
    virtual long Update(HWND__*);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ExplicitDismissTrait@Internal@Windows@@UEAA@XZ
    virtual ~ExplicitDismissTrait();
};
} // namespace Windows::Internal
