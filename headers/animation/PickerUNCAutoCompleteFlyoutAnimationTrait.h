#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 7 member(s).
namespace Windows::Internal {
class PickerUNCAutoCompleteFlyoutAnimationTrait {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DwmTransitionChanged@PickerUNCAutoCompleteFlyoutAnimationTrait@Internal@Windows@@UEAAXPEAUHWND__@@_KW4DWMTRANSITION_STORYBOARD_STATE@@@Z
    virtual void DwmTransitionChanged(HWND__*, uint64_t, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndRepositionForKeyboard@PickerUNCAutoCompleteFlyoutAnimationTrait@Internal@Windows@@UEAAJPEAUHWND__@@_N@Z
    virtual long EndRepositionForKeyboard(HWND__*, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldAnimateContent@PickerUNCAutoCompleteFlyoutAnimationTrait@Internal@Windows@@UEAA_NXZ
    virtual bool ShouldAnimateContent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartAnimateContent@PickerUNCAutoCompleteFlyoutAnimationTrait@Internal@Windows@@UEAAXPEAUHWND__@@@Z
    virtual void StartAnimateContent(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartRepositionForKeyboard@PickerUNCAutoCompleteFlyoutAnimationTrait@Internal@Windows@@UEAAJPEAUHWND__@@_N@Z
    virtual long StartRepositionForKeyboard(HWND__*, bool);
};
} // namespace Windows::Internal
