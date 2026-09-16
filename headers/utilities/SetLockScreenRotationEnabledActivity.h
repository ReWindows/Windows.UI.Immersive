#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 4 member(s).
namespace LockScreenTelemetry {
class SetLockScreenRotationEnabledActivity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@SetLockScreenRotationEnabledActivity@LockScreenTelemetry@@QEAAX_N@Z
    void StartActivity(bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SetLockScreenRotationEnabledActivity@LockScreenTelemetry@@QEAA@XZ
    ~SetLockScreenRotationEnabledActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@SetLockScreenRotationEnabledActivity@LockScreenTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@SetLockScreenRotationEnabledActivity@LockScreenTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace LockScreenTelemetry
