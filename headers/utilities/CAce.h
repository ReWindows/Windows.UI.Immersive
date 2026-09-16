#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 5 member(s).
class CAce {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CAce@@SAJPEAU_ACE_HEADER@@PEAPEAV1@@Z
    static long CreateInstance(_ACE_HEADER *, CAce * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EqualAce@CAce@@QEBA_NPEBV1@@Z
    bool EqualAce(CAce const *) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAce@@QEAA@XZ
    ~CAce();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Init@CAce@@AEAAJPEAXKEEG0@Z
    long _Init(void *, unsigned long, unsigned char, unsigned char, unsigned short, void *);
};
