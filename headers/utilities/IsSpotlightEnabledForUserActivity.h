#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 5 member(s).
namespace LockScreenTelemetry {
class IsSpotlightEnabledForUserActivity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@IsSpotlightEnabledForUserActivity@LockScreenTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@IsSpotlightEnabledForUserActivity@LockScreenTelemetry@@QEAAXJ_N@Z
    void Stop(long, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1IsSpotlightEnabledForUserActivity@LockScreenTelemetry@@QEAA@XZ
    ~IsSpotlightEnabledForUserActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@IsSpotlightEnabledForUserActivity@LockScreenTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@IsSpotlightEnabledForUserActivity@LockScreenTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace LockScreenTelemetry
