#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 2 member(s).
namespace CreativeFramework {
class LockScreenCategoryConfig {
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRotationEnabledFromRegistry@LockScreenCategoryConfig@CreativeFramework@@YAJPEBGPEA_N@Z
    long GetRotationEnabledFromRegistry(unsigned short const *, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRotationInRegistryAndInvokeContentDeliveryManager@LockScreenCategoryConfig@CreativeFramework@@YAJ_N@Z
    long SetRotationInRegistryAndInvokeContentDeliveryManager(bool);
};
} // namespace CreativeFramework
