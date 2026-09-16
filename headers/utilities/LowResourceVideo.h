#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 8 member(s).
// Base evidence: DirectUI::Element (likely; classinfo-template-instantiation).
class LowResourceVideo {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@LowResourceVideo@@SAJPEBGPEAPEAVElement@DirectUI@@@Z
    static long CreateInstance(unsigned short const *, ::DirectUI::Element * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@LowResourceVideo@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVideo@LowResourceVideo@@QEAAJPEBG@Z
    long SetVideo(unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1LowResourceVideo@@UEAA@XZ
    virtual ~LowResourceVideo();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDestroy@LowResourceVideo@@MEAAXXZ
    virtual void OnDestroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Paint@LowResourceVideo@@MEAAXPEAUHDC__@@PEBUtagRECT@@1PEAU3@2@Z
    virtual void Paint(HDC__*, tagRECT const *, tagRECT const *, tagRECT *, tagRECT *);
};
