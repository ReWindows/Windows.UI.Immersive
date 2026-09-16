#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 6 member(s).
class CConnectedIdentityNotifier {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?IdentityUpdated@CConnectedIdentityNotifier@@UEAAJKPEBG@Z
    virtual long IdentityUpdated(unsigned long, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CConnectedIdentityNotifier@@QEAAJXZ
    long RuntimeClassInitialize();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Advise@CConnectedIdentityNotifier@@AEAAJPEAUIIdentityProvider@@@Z
    long Advise(IIdentityProvider *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CConnectedIdentityNotifier@@EEAA@XZ
    virtual ~CConnectedIdentityNotifier();
};
