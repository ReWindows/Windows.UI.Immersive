#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 7 member(s).
namespace LockScreenTelemetry {
class SetImageStreamFromRoamingHandlerTaskActivity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?HistoryLoadFailure@SetImageStreamFromRoamingHandlerTaskActivity@LockScreenTelemetry@@QEAAXXZ
    void HistoryLoadFailure();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@SetImageStreamFromRoamingHandlerTaskActivity@LockScreenTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SetImageStreamFromRoamingHandlerTaskActivity@LockScreenTelemetry@@QEAA@XZ
    ~SetImageStreamFromRoamingHandlerTaskActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@SetImageStreamFromRoamingHandlerTaskActivity@LockScreenTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@SetImageStreamFromRoamingHandlerTaskActivity@LockScreenTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace LockScreenTelemetry
