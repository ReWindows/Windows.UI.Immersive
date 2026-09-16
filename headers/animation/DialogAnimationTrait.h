#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 7 member(s).
namespace Windows::Internal {
class DialogAnimationTrait {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEnterStoryboardId@DialogAnimationTrait@Internal@Windows@@UEAAHXZ
    virtual int GetEnterStoryboardId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetExitStoryboardId@DialogAnimationTrait@Internal@Windows@@UEAAHXZ
    virtual int GetExitStoryboardId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHideAnimationDelay@DialogAnimationTrait@Internal@Windows@@UEAAIXZ
    virtual unsigned int GetHideAnimationDelay();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEnterTransition@DialogAnimationTrait@Internal@Windows@@UEAAJPEAUHWND__@@@Z
    virtual long OnEnterTransition(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnExitTransition@DialogAnimationTrait@Internal@Windows@@UEAAJPEAUHWND__@@@Z
    virtual long OnExitTransition(HWND__*);
};
} // namespace Windows::Internal
