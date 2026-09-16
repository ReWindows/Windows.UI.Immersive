#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 10 member(s).
namespace Windows::Internal {
class CharmWindowAnimationTrait {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndEnter@CharmWindowAnimationTrait@Internal@Windows@@UEAAJPEAUHWND__@@@Z
    virtual long EndEnter(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndExit@CharmWindowAnimationTrait@Internal@Windows@@UEAAJPEAUHWND__@@@Z
    virtual long EndExit(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndRepositionForKeyboard@CharmWindowAnimationTrait@Internal@Windows@@UEAAJPEAUHWND__@@_N@Z
    virtual long EndRepositionForKeyboard(HWND__*, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHideAnimationDelay@CharmWindowAnimationTrait@Internal@Windows@@UEAAIXZ
    virtual unsigned int GetHideAnimationDelay();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldAnimateContent@CharmWindowAnimationTrait@Internal@Windows@@UEAA_NXZ
    virtual bool ShouldAnimateContent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartEnter@CharmWindowAnimationTrait@Internal@Windows@@UEAAJPEAUHWND__@@@Z
    virtual long StartEnter(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartExit@CharmWindowAnimationTrait@Internal@Windows@@UEAAJPEAUHWND__@@@Z
    virtual long StartExit(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartRepositionForKeyboard@CharmWindowAnimationTrait@Internal@Windows@@UEAAJPEAUHWND__@@_N@Z
    virtual long StartRepositionForKeyboard(HWND__*, bool);
};
} // namespace Windows::Internal
