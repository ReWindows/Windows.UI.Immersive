#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 4 member(s).
namespace Windows::Internal {
class PositionTraits {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?PositionWithOffset@PositionTraits@Internal@Windows@@UEBA?AUtagRECT@@AEBVCConstraint@Immersive@UI@3@AEBUtagSIZE@@AEBUtagPOINT@@AEBU4@_N3W4DEVICE_SCALE_FACTOR@@@Z
    virtual tagRECT PositionWithOffset(::Windows::UI::Immersive::CConstraint const &, tagSIZE const &, tagPOINT const &, tagRECT const &, bool, tagRECT const &, int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPositionOptions@PositionTraits@Internal@Windows@@UEAAXW4POSITION_OPTIONS@23@@Z
    virtual void SetPositionOptions(int);
};
} // namespace Windows::Internal
