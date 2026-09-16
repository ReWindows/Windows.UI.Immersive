#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 7 member(s).
namespace Windows::Internal {
class HostingContainerDismissTrait {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DismissOnESC@HostingContainerDismissTrait@Internal@Windows@@UEBA_NXZ
    virtual bool DismissOnESC() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reregister@HostingContainerDismissTrait@Internal@Windows@@UEAAJPEAUHWND__@@@Z
    virtual long Reregister(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unregister@HostingContainerDismissTrait@Internal@Windows@@UEAAJXZ
    virtual long Unregister();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update@HostingContainerDismissTrait@Internal@Windows@@UEAAJPEAUHWND__@@@Z
    virtual long Update(HWND__*);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1HostingContainerDismissTrait@Internal@Windows@@UEAA@XZ
    virtual ~HostingContainerDismissTrait();
};
} // namespace Windows::Internal
