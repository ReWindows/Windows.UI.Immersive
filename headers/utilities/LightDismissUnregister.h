#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 5 member(s).
namespace LightDismissFrameworkTelemetry {
class LightDismissUnregister {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@LightDismissUnregister@LightDismissFrameworkTelemetry@@QEAAXHKK@Z
    void StartActivity(int, unsigned long, unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1LightDismissUnregister@LightDismissFrameworkTelemetry@@QEAA@XZ
    ~LightDismissUnregister();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@LightDismissUnregister@LightDismissFrameworkTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@LightDismissUnregister@LightDismissFrameworkTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace LightDismissFrameworkTelemetry
