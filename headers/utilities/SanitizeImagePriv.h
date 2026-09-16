#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 4 member(s).
namespace ImageSanitizationTelemetry {
class SanitizeImagePriv {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@SanitizeImagePriv@ImageSanitizationTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SanitizeImagePriv@ImageSanitizationTelemetry@@QEAA@XZ
    ~SanitizeImagePriv();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@SanitizeImagePriv@ImageSanitizationTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@SanitizeImagePriv@ImageSanitizationTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace ImageSanitizationTelemetry
