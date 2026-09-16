#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 7 member(s).
namespace Windows::Internal {
class LightDismissTrait {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DismissOnESC@LightDismissTrait@Internal@Windows@@UEBA_NXZ
    virtual bool DismissOnESC() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reregister@LightDismissTrait@Internal@Windows@@UEAAJPEAUHWND__@@@Z
    virtual long Reregister(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unregister@LightDismissTrait@Internal@Windows@@UEAAJXZ
    virtual long Unregister();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update@LightDismissTrait@Internal@Windows@@UEAAJPEAUHWND__@@@Z
    virtual long Update(HWND__*);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1LightDismissTrait@Internal@Windows@@UEAA@XZ
    virtual ~LightDismissTrait();
};
} // namespace Windows::Internal
