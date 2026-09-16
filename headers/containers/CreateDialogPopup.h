#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 4 member(s).
namespace PopupWindowTelemetry {
class CreateDialogPopup {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@CreateDialogPopup@PopupWindowTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CreateDialogPopup@PopupWindowTelemetry@@QEAA@XZ
    ~CreateDialogPopup();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@CreateDialogPopup@PopupWindowTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@CreateDialogPopup@PopupWindowTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace PopupWindowTelemetry
