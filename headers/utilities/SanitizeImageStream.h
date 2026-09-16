#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 4 member(s).
namespace ImageSanitizationTelemetry {
class SanitizeImageStream {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@SanitizeImageStream@ImageSanitizationTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SanitizeImageStream@ImageSanitizationTelemetry@@QEAA@XZ
    ~SanitizeImageStream();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@SanitizeImageStream@ImageSanitizationTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@SanitizeImageStream@ImageSanitizationTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace ImageSanitizationTelemetry
