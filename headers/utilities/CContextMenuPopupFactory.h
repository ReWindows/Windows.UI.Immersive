#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 3 member(s).
namespace Windows::Internal {
class CContextMenuPopupFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateContextMenuPopup@CContextMenuPopupFactory@Internal@Windows@@UEAAJPEAUHWND__@@AEBUtagRECT@@W4FLYOUT_PLACEMENT@@W4POPUP_ACTIVATION_POLICY@@PEAPEAUIPopupWindow@@@Z
    virtual long CreateContextMenuPopup(HWND__*, tagRECT const &, int, int, IPopupWindow * *);
};
} // namespace Windows::Internal
