#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 10 member(s).
namespace Windows::Internal {
class DialogPositionTrait {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?MaxSize@DialogPositionTrait@Internal@Windows@@UEBA?AUtagSIZE@@W4DEVICE_SCALE_FACTOR@@@Z
    virtual tagSIZE MaxSize(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?MinSize@DialogPositionTrait@Internal@Windows@@UEBA?AUtagSIZE@@W4DEVICE_SCALE_FACTOR@@@Z
    virtual tagSIZE MinSize(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Position@DialogPositionTrait@Internal@Windows@@UEBA?AUtagRECT@@AEBVCConstraint@Immersive@UI@3@AEBUtagSIZE@@_NAEBU4@W4DEVICE_SCALE_FACTOR@@@Z
    virtual tagRECT Position(::Windows::UI::Immersive::CConstraint const &, tagSIZE const &, bool, tagRECT const &, int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?PositionWithOffset@DialogPositionTrait@Internal@Windows@@UEBA?AUtagRECT@@AEBVCConstraint@Immersive@UI@3@AEBUtagSIZE@@AEBUtagPOINT@@AEBU4@_N3W4DEVICE_SCALE_FACTOR@@@Z
    virtual tagRECT PositionWithOffset(::Windows::UI::Immersive::CConstraint const &, tagSIZE const &, tagPOINT const &, tagRECT const &, bool, tagRECT const &, int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPositionOptions@DialogPositionTrait@Internal@Windows@@UEAAXW4POSITION_OPTIONS@23@@Z
    virtual void SetPositionOptions(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Size@DialogPositionTrait@Internal@Windows@@UEBA?AUtagSIZE@@AEBVCConstraint@Immersive@UI@3@AEBU4@_NAEBUtagRECT@@W4DEVICE_SCALE_FACTOR@@@Z
    virtual tagSIZE Size(::Windows::UI::Immersive::CConstraint const &, tagSIZE const &, bool, tagRECT const &, int) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DialogPositionTrait@Internal@Windows@@UEAA@XZ
    virtual ~DialogPositionTrait();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PositionWithVerticalOffset@DialogPositionTrait@Internal@Windows@@AEBA?AUtagRECT@@AEBVCConstraint@Immersive@UI@3@AEBUtagSIZE@@HAEBU4@@Z
    tagRECT _PositionWithVerticalOffset(::Windows::UI::Immersive::CConstraint const &, tagSIZE const &, int, tagRECT const &) const;
};
} // namespace Windows::Internal
