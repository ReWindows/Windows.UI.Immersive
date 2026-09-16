#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 4 member(s).
namespace LockScreenTelemetry {
class ImageSanitizationBrokerInitActivity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@ImageSanitizationBrokerInitActivity@LockScreenTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ImageSanitizationBrokerInitActivity@LockScreenTelemetry@@QEAA@XZ
    ~ImageSanitizationBrokerInitActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@ImageSanitizationBrokerInitActivity@LockScreenTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@ImageSanitizationBrokerInitActivity@LockScreenTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace LockScreenTelemetry
