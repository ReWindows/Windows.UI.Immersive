#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 5 member(s).
namespace LockScreenTelemetry {
class SaveHistoryActivity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@SaveHistoryActivity@LockScreenTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SaveHistoryActivity@LockScreenTelemetry@@QEAA@XZ
    ~SaveHistoryActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@SaveHistoryActivity@LockScreenTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@SaveHistoryActivity@LockScreenTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace LockScreenTelemetry
