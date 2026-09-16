#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 7 member(s).
namespace ImageSanitizationTelemetry {
class SetImmersiveExpressionData {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@SetImmersiveExpressionData@ImageSanitizationTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SetImmersiveExpressionData@ImageSanitizationTelemetry@@QEAA@XZ
    ~SetImmersiveExpressionData();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@SetImmersiveExpressionData@ImageSanitizationTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@SetImmersiveExpressionData@ImageSanitizationTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace ImageSanitizationTelemetry
