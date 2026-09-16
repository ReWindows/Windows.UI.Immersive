#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 4 member(s).
namespace LockScreenTelemetry {
class SetLockScreenCreativeActivity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@SetLockScreenCreativeActivity@LockScreenTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SetLockScreenCreativeActivity@LockScreenTelemetry@@QEAA@XZ
    ~SetLockScreenCreativeActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@SetLockScreenCreativeActivity@LockScreenTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@SetLockScreenCreativeActivity@LockScreenTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace LockScreenTelemetry
