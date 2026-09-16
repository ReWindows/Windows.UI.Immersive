#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 3 member(s).
namespace LightDismissFrameworkTelemetry {
class LightDismissDismissClient {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@LightDismissDismissClient@LightDismissFrameworkTelemetry@@QEAAXH@Z
    void StartActivity(int);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@LightDismissDismissClient@LightDismissFrameworkTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@LightDismissDismissClient@LightDismissFrameworkTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace LightDismissFrameworkTelemetry
