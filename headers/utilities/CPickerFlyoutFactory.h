#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 4 member(s).
namespace Windows::Internal {
class CPickerFlyoutFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreatePickerUNCAutoCompleteFlyout@CPickerFlyoutFactory@Internal@Windows@@UEAAJPEAUHWND__@@AEBUtagRECT@@UtagSIZE@@PEAPEAUIPopupWindow@@@Z
    virtual long CreatePickerUNCAutoCompleteFlyout(HWND__*, tagRECT const &, tagSIZE, IPopupWindow * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateQuickAccessFlyout@CPickerFlyoutFactory@Internal@Windows@@UEAAJPEAUHWND__@@AEBUtagPOINT@@PEAPEAUIPopupWindow@@@Z
    virtual long CreateQuickAccessFlyout(HWND__*, tagPOINT const &, IPopupWindow * *);
};
} // namespace Windows::Internal
