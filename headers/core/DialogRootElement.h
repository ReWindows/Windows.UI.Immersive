#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 6 member(s).
// Base evidence: DirectUI::Element (likely; classinfo-template-instantiation).
namespace Windows::Internal {
class DialogRootElement {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@DialogRootElement@Internal@Windows@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@DialogRootElement@Internal@Windows@@SAJXZ
    static long Register();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SelfLayoutDoLayout@DialogRootElement@Internal@Windows@@EEAAXHH@Z
    virtual void _SelfLayoutDoLayout(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SelfLayoutUpdateDesiredSize@DialogRootElement@Internal@Windows@@EEAA?AUtagSIZE@@HHPEAVSurface@DirectUI@@@Z
    virtual tagSIZE _SelfLayoutUpdateDesiredSize(int, int, ::DirectUI::Surface *);
};
} // namespace Windows::Internal
