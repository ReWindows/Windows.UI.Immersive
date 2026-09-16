#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 7 member(s).
namespace Windows::Internal {
class SystemDialogAnimationTrait {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEnterStoryboardId@SystemDialogAnimationTrait@Internal@Windows@@UEAAHXZ
    virtual int GetEnterStoryboardId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetExitStoryboardId@SystemDialogAnimationTrait@Internal@Windows@@UEAAHXZ
    virtual int GetExitStoryboardId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHideAnimationDelay@SystemDialogAnimationTrait@Internal@Windows@@UEAAIXZ
    virtual unsigned int GetHideAnimationDelay();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEnterTransition@SystemDialogAnimationTrait@Internal@Windows@@UEAAJPEAUHWND__@@@Z
    virtual long OnEnterTransition(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnExitTransition@SystemDialogAnimationTrait@Internal@Windows@@UEAAJPEAUHWND__@@@Z
    virtual long OnExitTransition(HWND__*);
};
} // namespace Windows::Internal
