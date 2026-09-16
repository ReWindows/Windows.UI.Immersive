#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 9 member(s).
namespace PopupWindowTelemetry {
class InitializeDialog {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@InitializeDialog@PopupWindowTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1InitializeDialog@PopupWindowTelemetry@@QEAA@XZ
    ~InitializeDialog();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@InitializeDialog@PopupWindowTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@InitializeDialog@PopupWindowTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace PopupWindowTelemetry
