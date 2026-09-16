#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 6 member(s).
namespace Windows::Internal {
class EnterExitAnimationTrait {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndEnter@EnterExitAnimationTrait@Internal@Windows@@UEAAJPEAUHWND__@@@Z
    virtual long EndEnter(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndExit@EnterExitAnimationTrait@Internal@Windows@@UEAAJPEAUHWND__@@@Z
    virtual long EndExit(HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTransitionEnabled@EnterExitAnimationTrait@Internal@Windows@@UEAAX_N@Z
    virtual void SetTransitionEnabled(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldAnimateContent@EnterExitAnimationTrait@Internal@Windows@@UEAA_NXZ
    virtual bool ShouldAnimateContent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartEnter@EnterExitAnimationTrait@Internal@Windows@@UEAAJPEAUHWND__@@@Z
    virtual long StartEnter(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartExit@EnterExitAnimationTrait@Internal@Windows@@UEAAJPEAUHWND__@@@Z
    virtual long StartExit(HWND__*);
};
} // namespace Windows::Internal
