#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 16 member(s).
namespace Windows::Internal {
class CCharmWindow {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CCharmWindow@Internal@Windows@@QEAA@W4CHARMS_SIZE@@W4POPUP_OPTIONS@@@Z
    CCharmWindow(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareForChainedTransition@CCharmWindow@Internal@Windows@@UEAAJPEAUIPopupBase@@@Z
    virtual long PrepareForChainedTransition(IPopupBase *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowProgress@CCharmWindow@Internal@Windows@@UEAAJH@Z
    virtual long ShowProgress(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ApplicationImage@CCharmWindow@Internal@Windows@@UEAAJPEAPEAUIUnknown@@@Z
    virtual long get_ApplicationImage(IUnknown * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ApplicationImage@CCharmWindow@Internal@Windows@@UEAAJPEAUIUnknown@@@Z
    virtual long put_ApplicationImage(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Height@CCharmWindow@Internal@Windows@@UEAAJI@Z
    virtual long put_Height(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Width@CCharmWindow@Internal@Windows@@UEAAJI@Z
    virtual long put_Width(unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CCharmWindow@Internal@Windows@@UEAA@XZ
    virtual ~CCharmWindow();
};
} // namespace Windows::Internal
