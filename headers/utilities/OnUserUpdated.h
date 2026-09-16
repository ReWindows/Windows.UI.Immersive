#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 6 member(s).
namespace UserInfoTelemetry {
class OnUserUpdated {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@OnUserUpdated@UserInfoTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@OnUserUpdated@UserInfoTelemetry@@QEAAX_N@Z
    void Stop(bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1OnUserUpdated@UserInfoTelemetry@@QEAA@XZ
    ~OnUserUpdated();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@OnUserUpdated@UserInfoTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@OnUserUpdated@UserInfoTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace UserInfoTelemetry
