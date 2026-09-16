#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 5 member(s).
namespace Windows::Internal {
class CCustomTouchKeyboardNotificationCallback {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CurrentIHMRect@CCustomTouchKeyboardNotificationCallback@Internal@Windows@@QEBA?AUtagRECT@@XZ
    tagRECT CurrentIHMRect() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TouchKeyboardHiding@CCustomTouchKeyboardNotificationCallback@Internal@Windows@@UEAAX_N@Z
    virtual void TouchKeyboardHiding(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TouchKeyboardShowing@CCustomTouchKeyboardNotificationCallback@Internal@Windows@@UEAAXUtagRECT@@_N1@Z
    virtual void TouchKeyboardShowing(tagRECT, bool, bool);
};
} // namespace Windows::Internal
