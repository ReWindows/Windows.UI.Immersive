#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 7 member(s).
class UIBridgeWindowProvider {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertyValue@UIBridgeWindowProvider@@UEAAJHPEAUtagVARIANT@@@Z
    virtual long GetPropertyValue(int, tagVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@UIBridgeWindowProvider@@UEAAJPEAVElement@DirectUI@@PEAVInvokeHelper@3@@Z
    virtual long Init(::DirectUI::Element *, ::DirectUI::InvokeHelper *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Navigate@UIBridgeWindowProvider@@UEAAJW4NavigateDirection@@PEAPEAUIRawElementProviderFragment@@@Z
    virtual long Navigate(int, IRawElementProviderFragment * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0UIBridgeWindowProvider@@QEAA@XZ
    UIBridgeWindowProvider();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1UIBridgeWindowProvider@@UEAA@XZ
    virtual ~UIBridgeWindowProvider();
};
