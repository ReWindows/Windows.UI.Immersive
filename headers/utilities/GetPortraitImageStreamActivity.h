#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 4 member(s).
namespace LockScreenTelemetry {
class GetPortraitImageStreamActivity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@GetPortraitImageStreamActivity@LockScreenTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1GetPortraitImageStreamActivity@LockScreenTelemetry@@QEAA@XZ
    ~GetPortraitImageStreamActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@GetPortraitImageStreamActivity@LockScreenTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@GetPortraitImageStreamActivity@LockScreenTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace LockScreenTelemetry
