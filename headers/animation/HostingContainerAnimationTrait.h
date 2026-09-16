#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 7 member(s).
namespace Windows::Internal {
class HostingContainerAnimationTrait {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEnterStoryboardId@HostingContainerAnimationTrait@Internal@Windows@@UEAAHXZ
    virtual int GetEnterStoryboardId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetExitStoryboardId@HostingContainerAnimationTrait@Internal@Windows@@UEAAHXZ
    virtual int GetExitStoryboardId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHideAnimationDelay@HostingContainerAnimationTrait@Internal@Windows@@UEAAIXZ
    virtual unsigned int GetHideAnimationDelay();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEnterTransition@HostingContainerAnimationTrait@Internal@Windows@@UEAAJPEAUHWND__@@@Z
    virtual long OnEnterTransition(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnExitTransition@HostingContainerAnimationTrait@Internal@Windows@@UEAAJPEAUHWND__@@@Z
    virtual long OnExitTransition(HWND__*);
};
} // namespace Windows::Internal
