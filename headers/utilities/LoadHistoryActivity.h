#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 5 member(s).
namespace LockScreenTelemetry {
class LoadHistoryActivity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@LoadHistoryActivity@LockScreenTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@LoadHistoryActivity@LockScreenTelemetry@@QEAAXJ_N@Z
    void Stop(long, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1LoadHistoryActivity@LockScreenTelemetry@@QEAA@XZ
    ~LoadHistoryActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@LoadHistoryActivity@LockScreenTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@LoadHistoryActivity@LockScreenTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace LockScreenTelemetry
