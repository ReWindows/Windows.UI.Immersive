#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 5 member(s).
namespace Windows::Internal {
class CContextMenuPopup {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CContextMenuPopup@Internal@Windows@@QEAA@W4POPUP_ACTIVATION_POLICY@@AEBUtagRECT@@W4FLYOUT_PLACEMENT@@@Z
    CContextMenuPopup(int, tagRECT const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CContextMenuPopup@Internal@Windows@@QEAAJPEAUHWND__@@IIW4POPUP_OPTIONS@@W4POPUP_PERSONALITY@@PEAUHMONITOR__@@@Z
    long Initialize(HWND__*, unsigned int, unsigned int, int, int, HMONITOR__*);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CContextMenuPopup@Internal@Windows@@UEAA@XZ
    virtual ~CContextMenuPopup();
};
} // namespace Windows::Internal
