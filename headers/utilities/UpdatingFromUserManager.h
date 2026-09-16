#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 4 member(s).
namespace UserInfoTelemetry {
class UpdatingFromUserManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@UpdatingFromUserManager@UserInfoTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1UpdatingFromUserManager@UserInfoTelemetry@@QEAA@XZ
    ~UpdatingFromUserManager();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@UpdatingFromUserManager@UserInfoTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@UpdatingFromUserManager@UserInfoTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace UserInfoTelemetry
