#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 5 member(s).
namespace Windows::Internal {
class RelativePositionBase {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Position@RelativePositionBase@Internal@Windows@@UEBA?AUtagRECT@@AEBVCConstraint@Immersive@UI@3@AEBUtagSIZE@@_NAEBU4@W4DEVICE_SCALE_FACTOR@@@Z
    virtual tagRECT Position(::Windows::UI::Immersive::CConstraint const &, tagSIZE const &, bool, tagRECT const &, int) const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0RelativePositionBase@Internal@Windows@@QEAA@AEBUtagRECT@@W4FLYOUT_PLACEMENT@@_NPEAVFlyoutAnimationTrait@12@@Z
    RelativePositionBase(tagRECT const &, int, bool, ::Windows::Internal::FlyoutAnimationTrait *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Size@RelativePositionBase@Internal@Windows@@UEBA?AUtagSIZE@@AEBVCConstraint@Immersive@UI@3@AEBU4@_NAEBUtagRECT@@W4DEVICE_SCALE_FACTOR@@@Z
    virtual tagSIZE Size(::Windows::UI::Immersive::CConstraint const &, tagSIZE const &, bool, tagRECT const &, int) const;
};
} // namespace Windows::Internal
