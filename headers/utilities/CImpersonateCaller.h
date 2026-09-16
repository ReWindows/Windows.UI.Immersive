#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 4 member(s).
class CImpersonateCaller {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCallerSID@CImpersonateCaller@@SAJPEAPEAX@Z
    static long GetCallerSID(void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCallerSIDString@CImpersonateCaller@@SAJPEAPEAG@Z
    static long GetCallerSIDString(unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Impersonate@CImpersonateCaller@@QEAAJXZ
    long Impersonate();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CImpersonateCaller@@QEAA@XZ
    ~CImpersonateCaller();
};
