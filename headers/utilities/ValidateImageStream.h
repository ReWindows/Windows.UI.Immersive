#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 4 member(s).
namespace ImageSanitizationTelemetry {
class ValidateImageStream {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@ValidateImageStream@ImageSanitizationTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ValidateImageStream@ImageSanitizationTelemetry@@QEAA@XZ
    ~ValidateImageStream();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@ValidateImageStream@ImageSanitizationTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@ValidateImageStream@ImageSanitizationTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace ImageSanitizationTelemetry
