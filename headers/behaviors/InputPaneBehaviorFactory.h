#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 4 member(s).
namespace Windows::Internal {
class InputPaneBehaviorFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateBehavior@InputPaneBehaviorFactory@Internal@Windows@@UEAAJPEBGPEAPEAUIDuiBehavior@@@Z
    virtual long CreateBehavior(unsigned short const *, IDuiBehavior * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@InputPaneBehaviorFactory@Internal@Windows@@SAJXZ
    static long Register();
};
} // namespace Windows::Internal
