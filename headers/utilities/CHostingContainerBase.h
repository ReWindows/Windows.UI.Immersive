#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 10 member(s).
namespace Windows::Internal {
class CHostingContainerBase {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CHostingContainerBase@Internal@Windows@@QEAA@PEAUPositionTraits@12@PEAUDismissTraits@12@PEAUWindowTraits@12@PEAUAnimationTraits@12@@Z
    CHostingContainerBase(::Windows::Internal::PositionTraits *, ::Windows::Internal::DismissTraits *, ::Windows::Internal::WindowTraits *, ::Windows::Internal::AnimationTraits *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeHostingContainer@CHostingContainerBase@Internal@Windows@@QEAAJXZ
    long InitializeHostingContainer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BackButtonEvent@CHostingContainerBase@Internal@Windows@@UEAAJPEAPEAUIPopupEventHandler@@@Z
    virtual long get_BackButtonEvent(IPopupEventHandler * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_BackButtonEvent@CHostingContainerBase@Internal@Windows@@UEAAJPEAUIPopupEventHandler@@@Z
    virtual long put_BackButtonEvent(IPopupEventHandler *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Height@CHostingContainerBase@Internal@Windows@@UEAAJI@Z
    virtual long put_Height(unsigned int);
};
} // namespace Windows::Internal
