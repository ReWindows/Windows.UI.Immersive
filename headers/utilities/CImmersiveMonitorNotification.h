#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 4 member(s).
namespace Windows::Internal {
class CImmersiveMonitorNotification {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisplaySettingsChange@CImmersiveMonitorNotification@Internal@Windows@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z
    virtual long DisplaySettingsChange(IImmersiveMonitor *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MonitorAdded@CImmersiveMonitorNotification@Internal@Windows@@UEAAJPEAUIImmersiveMonitor@@@Z
    virtual long MonitorAdded(IImmersiveMonitor *);
};
} // namespace Windows::Internal
