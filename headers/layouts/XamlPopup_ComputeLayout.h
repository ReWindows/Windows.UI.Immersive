#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 8 member(s).
namespace PopupWindowTelemetry {
class XamlPopup_ComputeLayout {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@XamlPopup_ComputeLayout@PopupWindowTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1XamlPopup_ComputeLayout@PopupWindowTelemetry@@QEAA@XZ
    ~XamlPopup_ComputeLayout();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@XamlPopup_ComputeLayout@PopupWindowTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@XamlPopup_ComputeLayout@PopupWindowTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace PopupWindowTelemetry
