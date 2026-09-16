#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 12 member(s).
namespace LockScreenTelemetry {
class GetImageForUserActivity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@GetImageForUserActivity@LockScreenTelemetry@@QEAAX_NH00@Z
    void StartActivity(bool, int, bool, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1GetImageForUserActivity@LockScreenTelemetry@@QEAA@XZ
    ~GetImageForUserActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@GetImageForUserActivity@LockScreenTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@GetImageForUserActivity@LockScreenTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace LockScreenTelemetry
