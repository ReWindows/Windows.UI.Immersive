#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 6 member(s).
namespace Windows::Internal {
class RelativePositionTrait {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?MaxSize@RelativePositionTrait@Internal@Windows@@UEBA?AUtagSIZE@@W4DEVICE_SCALE_FACTOR@@@Z
    virtual tagSIZE MaxSize(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?MinSize@RelativePositionTrait@Internal@Windows@@UEBA?AUtagSIZE@@W4DEVICE_SCALE_FACTOR@@@Z
    virtual tagSIZE MinSize(int) const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0RelativePositionTrait@Internal@Windows@@QEAA@AEBUtagRECT@@W4FLYOUT_PLACEMENT@@_NPEAVFlyoutAnimationTrait@12@2@Z
    RelativePositionTrait(tagRECT const &, int, bool, ::Windows::Internal::FlyoutAnimationTrait *, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RelativePositionTrait@Internal@Windows@@UEAA@XZ
    virtual ~RelativePositionTrait();
};
} // namespace Windows::Internal
