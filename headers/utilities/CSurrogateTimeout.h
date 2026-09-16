#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 5 member(s).
class CSurrogateTimeout {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartTimer@CSurrogateTimeout@@QEAAJIP6AXPEAX@Z@Z
    long StartTimer(unsigned int, void ( *)(void *));
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopTimer@CSurrogateTimeout@@QEAAXXZ
    void StopTimer();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSurrogateTimeout@@QEAA@XZ
    ~CSurrogateTimeout();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_s_ReportTimeout@CSurrogateTimeout@@CAKPEAX@Z
    static unsigned long _s_ReportTimeout(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_s_TimeOutThreadProc@CSurrogateTimeout@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z
    static void _s_TimeOutThreadProc(_TP_CALLBACK_INSTANCE *, void *, _TP_TIMER *);
};
