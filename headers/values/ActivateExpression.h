#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 8 member(s).
namespace ImageSanitizationTelemetry {
class ActivateExpression {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@ActivateExpression@ImageSanitizationTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ActivateExpression@ImageSanitizationTelemetry@@QEAA@XZ
    ~ActivateExpression();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@ActivateExpression@ImageSanitizationTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@ActivateExpression@ImageSanitizationTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace ImageSanitizationTelemetry
