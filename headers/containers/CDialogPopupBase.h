#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 13 member(s).
namespace Windows::Internal {
class CDialogPopupBase {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDialogPopupBase@Internal@Windows@@QEAA@PEAUPositionTraits@12@PEAUDismissTraits@12@PEAUWindowTraits@12@PEAUAnimationTraits@12@@Z
    CDialogPopupBase(::Windows::Internal::PositionTraits *, ::Windows::Internal::DismissTraits *, ::Windows::Internal::WindowTraits *, ::Windows::Internal::AnimationTraits *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowProgress@CDialogPopupBase@Internal@Windows@@UEAAJH@Z
    virtual long ShowProgress(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ApplicationImage@CDialogPopupBase@Internal@Windows@@UEAAJPEAPEAUIUnknown@@@Z
    virtual long get_ApplicationImage(IUnknown * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HeaderColor@CDialogPopupBase@Internal@Windows@@UEAAJPEAK@Z
    virtual long get_HeaderColor(unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ApplicationImage@CDialogPopupBase@Internal@Windows@@UEAAJPEAUIUnknown@@@Z
    virtual long put_ApplicationImage(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_HeaderColor@CDialogPopupBase@Internal@Windows@@UEAAJK@Z
    virtual long put_HeaderColor(unsigned long);
};
} // namespace Windows::Internal
