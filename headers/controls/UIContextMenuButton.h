#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 5 member(s).
// Base evidence: DirectUI::TouchButton (likely; classinfo-template-instantiation).
class UIContextMenuButton {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@UIContextMenuButton@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetElementProviderImpl@UIContextMenuButton@@UEAAJPEAVInvokeHelper@DirectUI@@PEAPEAVElementProvider@3@@Z
    virtual long GetElementProviderImpl(::DirectUI::InvokeHelper *, ::DirectUI::ElementProvider * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@UIContextMenuButton@@SAJXZ
    static long Register();
};
