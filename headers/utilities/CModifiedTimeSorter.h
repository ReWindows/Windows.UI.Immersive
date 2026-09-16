#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 2 member(s).
class CModifiedTimeSorter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Compare@CModifiedTimeSorter@@QEBAHAEBV?$ComPtr@UIShellItem2@@@WRL@Microsoft@@0@Z
    int Compare(WindissectOpaque const &, WindissectOpaque const &) const;
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetFileTimeFromFullPath@CModifiedTimeSorter@@AEBAJPEBGPEAU_FILETIME@@@Z
    long _GetFileTimeFromFullPath(unsigned short const *, _FILETIME *) const;
};
