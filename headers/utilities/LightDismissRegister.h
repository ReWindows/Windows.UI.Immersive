#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 4 member(s).
namespace LightDismissFrameworkTelemetry {
class LightDismissRegister {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@LightDismissRegister@LightDismissFrameworkTelemetry@@QEAAXH@Z
    void StartActivity(int);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@LightDismissRegister@LightDismissFrameworkTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@LightDismissRegister@LightDismissFrameworkTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace LightDismissFrameworkTelemetry
