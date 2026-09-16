#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 5 member(s).
namespace LockScreenTelemetry {
class SetLockScreenFromStreamActivity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@SetLockScreenFromStreamActivity@LockScreenTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SetLockScreenFromStreamActivity@LockScreenTelemetry@@QEAA@XZ
    ~SetLockScreenFromStreamActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@SetLockScreenFromStreamActivity@LockScreenTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@SetLockScreenFromStreamActivity@LockScreenTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace LockScreenTelemetry
