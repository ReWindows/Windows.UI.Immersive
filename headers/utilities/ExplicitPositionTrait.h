#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 7 member(s).
namespace Windows::Internal {
class ExplicitPositionTrait {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?MaxSize@ExplicitPositionTrait@Internal@Windows@@UEBA?AUtagSIZE@@W4DEVICE_SCALE_FACTOR@@@Z
    virtual tagSIZE MaxSize(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?MinSize@ExplicitPositionTrait@Internal@Windows@@UEBA?AUtagSIZE@@W4DEVICE_SCALE_FACTOR@@@Z
    virtual tagSIZE MinSize(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Position@ExplicitPositionTrait@Internal@Windows@@UEBA?AUtagRECT@@AEBVCConstraint@Immersive@UI@3@AEBUtagSIZE@@_NAEBU4@W4DEVICE_SCALE_FACTOR@@@Z
    virtual tagRECT Position(::Windows::UI::Immersive::CConstraint const &, tagSIZE const &, bool, tagRECT const &, int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Size@ExplicitPositionTrait@Internal@Windows@@UEBA?AUtagSIZE@@AEBVCConstraint@Immersive@UI@3@AEBU4@_NAEBUtagRECT@@W4DEVICE_SCALE_FACTOR@@@Z
    virtual tagSIZE Size(::Windows::UI::Immersive::CConstraint const &, tagSIZE const &, bool, tagRECT const &, int) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ExplicitPositionTrait@Internal@Windows@@UEAA@XZ
    virtual ~ExplicitPositionTrait();
};
} // namespace Windows::Internal
