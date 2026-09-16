#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 4 member(s).
namespace DirectUI {
class DuiPVLTrigger {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?TriggerContentTransition@DuiPVLTrigger@DirectUI@@QEAAJPEAV?$DynamicArray@PEAVElement@DirectUI@@$0A@@2@0PEAVElement@2@UtagPOINT@@HPEAK@Z
    long TriggerContentTransition(WindissectOpaque *, WindissectOpaque *, ::DirectUI::Element *, tagPOINT, int, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TriggerFade@DuiPVLTrigger@DirectUI@@QEAAJPEAVElement@2@IPEAK@Z
    long TriggerFade(::DirectUI::Element *, unsigned int, unsigned long *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DuiPVLTrigger@DirectUI@@QEAA@XZ
    ~DuiPVLTrigger();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureObject@DuiPVLTrigger@DirectUI@@IEAAJXZ
    long EnsureObject();
};
} // namespace DirectUI
