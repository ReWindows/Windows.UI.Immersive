#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 5 member(s).
namespace LockScreenTelemetry {
class RemoveCreativeHistoryEntryActivity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreativeHistoryEntryRemoved@RemoveCreativeHistoryEntryActivity@LockScreenTelemetry@@QEAAXXZ
    void CreativeHistoryEntryRemoved();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@RemoveCreativeHistoryEntryActivity@LockScreenTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RemoveCreativeHistoryEntryActivity@LockScreenTelemetry@@QEAA@XZ
    ~RemoveCreativeHistoryEntryActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@RemoveCreativeHistoryEntryActivity@LockScreenTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@RemoveCreativeHistoryEntryActivity@LockScreenTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace LockScreenTelemetry
