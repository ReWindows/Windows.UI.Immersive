#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 12 member(s).
namespace Windows::Internal {
class FlyoutAnimationTrait {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DwmTransitionChanged@FlyoutAnimationTrait@Internal@Windows@@UEAAXPEAUHWND__@@_KW4DWMTRANSITION_STORYBOARD_STATE@@@Z
    virtual void DwmTransitionChanged(HWND__*, uint64_t, int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0FlyoutAnimationTrait@Internal@Windows@@QEAA@W4FLYOUT_ANIMATION_DIRECTION@@W4POPUP_OPTIONS@@@Z
    FlyoutAnimationTrait(int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEnterStoryboardId@FlyoutAnimationTrait@Internal@Windows@@UEAAHXZ
    virtual int GetEnterStoryboardId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetExitStoryboardId@FlyoutAnimationTrait@Internal@Windows@@UEAAHXZ
    virtual int GetExitStoryboardId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHideAnimationDelay@FlyoutAnimationTrait@Internal@Windows@@UEAAIXZ
    virtual unsigned int GetHideAnimationDelay();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEnterTransition@FlyoutAnimationTrait@Internal@Windows@@UEAAJPEAUHWND__@@@Z
    virtual long OnEnterTransition(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnExitTransition@FlyoutAnimationTrait@Internal@Windows@@UEAAJPEAUHWND__@@@Z
    virtual long OnExitTransition(HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAnimationDirection@FlyoutAnimationTrait@Internal@Windows@@QEAAXW4FLYOUT_ANIMATION_DIRECTION@@@Z
    void SetAnimationDirection(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldAnimateContent@FlyoutAnimationTrait@Internal@Windows@@UEAA_NXZ
    virtual bool ShouldAnimateContent();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetIsUIBusyPatternID@FlyoutAnimationTrait@Internal@Windows@@AEAAXXZ
    void _GetIsUIBusyPatternID();
};
} // namespace Windows::Internal
