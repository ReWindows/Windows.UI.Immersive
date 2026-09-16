#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 10 member(s).
class CSimpleLightDismissSingleton {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DismissAll@CSimpleLightDismissSingleton@@UEAAJXZ
    virtual long DismissAll();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableLightDismiss@CSimpleLightDismissSingleton@@UEAAJH@Z
    virtual long EnableLightDismiss(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableVisualization@CSimpleLightDismissSingleton@@UEAAJH@Z
    virtual long EnableVisualization(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@CSimpleLightDismissSingleton@@UEAAJULIGHT_DISMISS_POLICY@@PEAUILightDismissNotification@@PEAK@Z
    virtual long Register(LIGHT_DISMISS_POLICY, ILightDismissNotification *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CSimpleLightDismissSingleton@@QEAAJXZ
    long RuntimeClassInitialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unregister@CSimpleLightDismissSingleton@@UEAAJK@Z
    virtual long Unregister(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePolicy@CSimpleLightDismissSingleton@@UEAAJKULIGHT_DISMISS_POLICY@@@Z
    virtual long UpdatePolicy(unsigned long, LIGHT_DISMISS_POLICY);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSimpleLightDismissSingleton@@EEAA@XZ
    virtual ~CSimpleLightDismissSingleton();
};
