#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 7 member(s).
// Base evidence: DirectUI::Element (likely; classinfo-template-instantiation).
namespace Windows::Internal {
class HostingContainerRootElement {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@HostingContainerRootElement@Internal@Windows@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInput@HostingContainerRootElement@Internal@Windows@@UEAAXPEAUInputEvent@DirectUI@@@Z
    virtual void OnInput(::DirectUI::InputEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@HostingContainerRootElement@Internal@Windows@@SAJXZ
    static long Register();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SelfLayoutDoLayout@HostingContainerRootElement@Internal@Windows@@EEAAXHH@Z
    virtual void _SelfLayoutDoLayout(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SelfLayoutUpdateDesiredSize@HostingContainerRootElement@Internal@Windows@@EEAA?AUtagSIZE@@HHPEAVSurface@DirectUI@@@Z
    virtual tagSIZE _SelfLayoutUpdateDesiredSize(int, int, ::DirectUI::Surface *);
};
} // namespace Windows::Internal
