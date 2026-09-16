#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 3 member(s).
namespace CreativeFramework {
class Policy {
public:
    class Details;
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAnyMicrosoftDomainAccount@Policy@CreativeFramework@@YA_NXZ
    bool IsAnyMicrosoftDomainAccount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsContentDeliveryPolicyEnforced@Policy@CreativeFramework@@YA_NXZ
    bool IsContentDeliveryPolicyEnforced();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsContentDeliverySkuPolicyAllowed@Policy@CreativeFramework@@YA_N_N@Z
    bool IsContentDeliverySkuPolicyAllowed(bool);
};
} // namespace CreativeFramework
