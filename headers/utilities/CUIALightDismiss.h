#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 8 member(s).
class CUIALightDismiss {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPatternProvider@CUIALightDismiss@@UEAAJHPEAPEAUIUnknown@@@Z
    virtual long GetPatternProvider(int, IUnknown * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertyValue@CUIALightDismiss@@UEAAJHPEAUtagVARIANT@@@Z
    virtual long GetPropertyValue(int, tagVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@CUIALightDismiss@@UEAAJXZ
    virtual long Invoke();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHWND@CUIALightDismiss@@UEAAXPEAUHWND__@@@Z
    virtual void SetHWND(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HostRawElementProvider@CUIALightDismiss@@UEAAJPEAPEAUIRawElementProviderSimple@@@Z
    virtual long get_HostRawElementProvider(IRawElementProviderSimple * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ProviderOptions@CUIALightDismiss@@UEAAJPEAW4ProviderOptions@@@Z
    virtual long get_ProviderOptions(int *);
};
