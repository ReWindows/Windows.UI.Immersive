#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 3 member(s).
class BehaviorEngineHelper {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterBehaviorFactory@BehaviorEngineHelper@@QEAAJPEBGPEAUIDuiBehaviorFactory@@@Z
    long RegisterBehaviorFactory(unsigned short const *, IDuiBehaviorFactory *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BehaviorEngineHelper@@QEAA@XZ
    ~BehaviorEngineHelper();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureObject@BehaviorEngineHelper@@IEAAJXZ
    long EnsureObject();
};
