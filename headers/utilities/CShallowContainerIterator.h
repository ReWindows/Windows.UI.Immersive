#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 3 member(s).
class CShallowContainerIterator {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CShallowContainerIterator@@QEAA@PEAUIShellItem@@K@Z
    CShallowContainerIterator(IShellItem *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Next@CShallowContainerIterator@@QEAA_NPEAPEAUIShellItem2@@@Z
    bool Next(IShellItem2* *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CShallowContainerIterator@@QEAA@XZ
    ~CShallowContainerIterator();
};
