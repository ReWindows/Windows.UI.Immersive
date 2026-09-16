#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 4 member(s).
namespace ImageSanitizationTelemetry {
class DeleteDirectory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@DeleteDirectory@ImageSanitizationTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DeleteDirectory@ImageSanitizationTelemetry@@QEAA@XZ
    ~DeleteDirectory();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@DeleteDirectory@ImageSanitizationTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@DeleteDirectory@ImageSanitizationTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace ImageSanitizationTelemetry
