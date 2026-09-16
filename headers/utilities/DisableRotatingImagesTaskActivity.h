#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 4 member(s).
namespace LockScreenTelemetry {
class DisableRotatingImagesTaskActivity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@DisableRotatingImagesTaskActivity@LockScreenTelemetry@@QEAAX_N@Z
    void StartActivity(bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DisableRotatingImagesTaskActivity@LockScreenTelemetry@@QEAA@XZ
    ~DisableRotatingImagesTaskActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@DisableRotatingImagesTaskActivity@LockScreenTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@DisableRotatingImagesTaskActivity@LockScreenTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace LockScreenTelemetry
