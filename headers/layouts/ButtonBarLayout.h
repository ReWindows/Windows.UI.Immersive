#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 6 member(s).
namespace Windows::Internal {
class ButtonBarLayout {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAndAttachButtonBarLayout@ButtonBarLayout@Internal@Windows@@SAJPEAVElement@DirectUI@@@Z
    static long CreateAndAttachButtonBarLayout(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoLayout@ButtonBarLayout@Internal@Windows@@UEAAXPEAVElement@DirectUI@@HH@Z
    virtual void DoLayout(::DirectUI::Element *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateDesiredSize@ButtonBarLayout@Internal@Windows@@UEAA?AUtagSIZE@@PEAVElement@DirectUI@@HHPEAVSurface@6@@Z
    virtual tagSIZE UpdateDesiredSize(::DirectUI::Element *, int, int, ::DirectUI::Surface *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CalculateDesiredSizeMetrics@ButtonBarLayout@Internal@Windows@@AEAAXPEAVElement@DirectUI@@HHPEAVSurface@5@PEAH22@Z
    void _CalculateDesiredSizeMetrics(::DirectUI::Element *, int, int, ::DirectUI::Surface *, int *, int *, int *);
};
} // namespace Windows::Internal
