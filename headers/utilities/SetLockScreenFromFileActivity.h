#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 5 member(s).
namespace LockScreenTelemetry {
class SetLockScreenFromFileActivity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@SetLockScreenFromFileActivity@LockScreenTelemetry@@QEAAX_N@Z
    void StartActivity(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@SetLockScreenFromFileActivity@LockScreenTelemetry@@QEAAXJH_K0@Z
    void Stop(long, int, uint64_t, uint64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SetLockScreenFromFileActivity@LockScreenTelemetry@@QEAA@XZ
    ~SetLockScreenFromFileActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@SetLockScreenFromFileActivity@LockScreenTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@SetLockScreenFromFileActivity@LockScreenTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace LockScreenTelemetry
