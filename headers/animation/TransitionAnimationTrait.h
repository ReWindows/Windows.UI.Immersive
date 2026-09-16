#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 2 member(s).
namespace Windows::Internal {
class TransitionAnimationTrait {
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginTransitionRequest@TransitionAnimationTrait@Internal@Windows@@IEAAJH@Z
    long BeginTransitionRequest(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndTransitionRequest@TransitionAnimationTrait@Internal@Windows@@IEAAJH@Z
    long EndTransitionRequest(int);
};
} // namespace Windows::Internal
