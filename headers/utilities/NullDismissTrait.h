#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 7 member(s).
namespace Windows::Internal {
class NullDismissTrait {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DismissOnESC@NullDismissTrait@Internal@Windows@@UEBA_NXZ
    virtual bool DismissOnESC() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reregister@NullDismissTrait@Internal@Windows@@UEAAJPEAUHWND__@@@Z
    virtual long Reregister(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unregister@NullDismissTrait@Internal@Windows@@UEAAJXZ
    virtual long Unregister();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update@NullDismissTrait@Internal@Windows@@UEAAJPEAUHWND__@@@Z
    virtual long Update(HWND__*);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1NullDismissTrait@Internal@Windows@@UEAA@XZ
    virtual ~NullDismissTrait();
};
} // namespace Windows::Internal
