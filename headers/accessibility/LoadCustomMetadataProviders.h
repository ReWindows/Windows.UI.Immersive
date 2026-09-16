#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 6 member(s).
namespace PopupWindowTelemetry {
class LoadCustomMetadataProviders {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@LoadCustomMetadataProviders@PopupWindowTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1LoadCustomMetadataProviders@PopupWindowTelemetry@@QEAA@XZ
    ~LoadCustomMetadataProviders();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@LoadCustomMetadataProviders@PopupWindowTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@LoadCustomMetadataProviders@PopupWindowTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace PopupWindowTelemetry
