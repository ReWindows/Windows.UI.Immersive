#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 16 member(s).
namespace Windows::Internal {
class CAppCharm {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CAppCharm@Internal@Windows@@QEAA@W4CHARMS_SIZE@@W4POPUP_OPTIONS@@@Z
    CAppCharm(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareForChainedTransition@CAppCharm@Internal@Windows@@UEAAJPEAUIPopupBase@@@Z
    virtual long PrepareForChainedTransition(IPopupBase *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowProgress@CAppCharm@Internal@Windows@@UEAAJH@Z
    virtual long ShowProgress(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ApplicationImage@CAppCharm@Internal@Windows@@UEAAJPEAPEAUIUnknown@@@Z
    virtual long get_ApplicationImage(IUnknown * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ApplicationImage@CAppCharm@Internal@Windows@@UEAAJPEAUIUnknown@@@Z
    virtual long put_ApplicationImage(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Height@CAppCharm@Internal@Windows@@UEAAJI@Z
    virtual long put_Height(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Width@CAppCharm@Internal@Windows@@UEAAJI@Z
    virtual long put_Width(unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAppCharm@Internal@Windows@@UEAA@XZ
    virtual ~CAppCharm();
};
} // namespace Windows::Internal
