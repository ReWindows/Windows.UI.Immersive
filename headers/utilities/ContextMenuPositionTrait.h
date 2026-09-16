#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 5 member(s).
namespace Windows::Internal {
class ContextMenuPositionTrait {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?MaxSize@ContextMenuPositionTrait@Internal@Windows@@UEBA?AUtagSIZE@@W4DEVICE_SCALE_FACTOR@@@Z
    virtual tagSIZE MaxSize(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?MinSize@ContextMenuPositionTrait@Internal@Windows@@UEBA?AUtagSIZE@@W4DEVICE_SCALE_FACTOR@@@Z
    virtual tagSIZE MinSize(int) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ContextMenuPositionTrait@Internal@Windows@@UEAA@XZ
    virtual ~ContextMenuPositionTrait();
};
} // namespace Windows::Internal
