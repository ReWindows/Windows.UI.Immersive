#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 4 member(s).
namespace ImageSanitizationTelemetry {
class SaveScaledImageStream {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@SaveScaledImageStream@ImageSanitizationTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SaveScaledImageStream@ImageSanitizationTelemetry@@QEAA@XZ
    ~SaveScaledImageStream();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@SaveScaledImageStream@ImageSanitizationTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@SaveScaledImageStream@ImageSanitizationTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace ImageSanitizationTelemetry
