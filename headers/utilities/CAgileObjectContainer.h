#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 6 member(s).
class CAgileObjectContainer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CAgileObjectContainer@@QEAAKXZ
    unsigned long Release();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CAgileObjectContainer@@IEAA@PEAUIUnknown@@K@Z
    CAgileObjectContainer(IUnknown *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_GetCurrentApartmentId@CAgileObjectContainer@@KAJPEAK@Z
    static long s_GetCurrentApartmentId(unsigned long *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAgileObjectContainer@@IEAA@XZ
    ~CAgileObjectContainer();
};
