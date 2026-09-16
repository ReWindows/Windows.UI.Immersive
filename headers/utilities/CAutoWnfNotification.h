#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 4 member(s).
class CAutoWnfNotification {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshCurrentState@CAutoWnfNotification@@QEAAJXZ
    long RefreshCurrentState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Subscribe@CAutoWnfNotification@@QEAAJU_WNF_STATE_NAME@@PEAUIAutoWnfNotificationCallback@@@Z
    long Subscribe(_WNF_STATE_NAME, IAutoWnfNotificationCallback *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unsubscribe@CAutoWnfNotification@@QEAAXXZ
    void Unsubscribe();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_WnfCallback@CAutoWnfNotification@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z
    static long s_WnfCallback(_WNF_STATE_NAME, unsigned long, _WNF_TYPE_ID *, void *, void const *, unsigned long);
};
