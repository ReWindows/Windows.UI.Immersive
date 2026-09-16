#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 10 member(s).
// Base evidence: DirectUI::TouchHWNDElement (likely; classinfo-template-instantiation).
namespace Windows::Internal {
class FlyoutElement {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@FlyoutElement@Internal@Windows@@SAJPEAUHWND__@@_NHIPEAVElement@DirectUI@@1PEAKPEAPEAV56@@Z
    static long Create(HWND__*, bool, int, unsigned int, ::DirectUI::Element *, bool, unsigned long *, ::DirectUI::Element * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@FlyoutElement@Internal@Windows@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetElementProviderImpl@FlyoutElement@Internal@Windows@@UEAAJPEAVInvokeHelper@DirectUI@@PEAPEAVElementProvider@5@@Z
    virtual long GetElementProviderImpl(::DirectUI::InvokeHelper *, ::DirectUI::ElementProvider * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@FlyoutElement@Internal@Windows@@SAJXZ
    static long Register();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEvent@FlyoutElement@Internal@Windows@@EEAAXPEAUEvent@DirectUI@@@Z
    virtual void OnEvent(::DirectUI::Event *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInput@FlyoutElement@Internal@Windows@@EEAAXPEAUInputEvent@DirectUI@@@Z
    virtual void OnInput(::DirectUI::InputEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_BackToPreviousFlyout@FlyoutElement@Internal@Windows@@AEAA_NXZ
    bool _BackToPreviousFlyout();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1FlyoutElement@Internal@Windows@@EEAA@XZ
    virtual ~FlyoutElement();
};
} // namespace Windows::Internal
