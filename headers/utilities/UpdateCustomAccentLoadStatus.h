#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 4 member(s).
namespace ImageSanitizationTelemetry {
class UpdateCustomAccentLoadStatus {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@UpdateCustomAccentLoadStatus@ImageSanitizationTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1UpdateCustomAccentLoadStatus@ImageSanitizationTelemetry@@QEAA@XZ
    ~UpdateCustomAccentLoadStatus();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@UpdateCustomAccentLoadStatus@ImageSanitizationTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@UpdateCustomAccentLoadStatus@ImageSanitizationTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace ImageSanitizationTelemetry
