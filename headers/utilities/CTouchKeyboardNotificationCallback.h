#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 8 member(s).
namespace Windows::Internal {
class CTouchKeyboardNotificationCallback {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CurrentIHMRect@CTouchKeyboardNotificationCallback@Internal@Windows@@QEBA?AUtagRECT@@XZ
    tagRECT CurrentIHMRect() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Hiding@CTouchKeyboardNotificationCallback@Internal@Windows@@UEAAJH@Z
    virtual long Hiding(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Showing@CTouchKeyboardNotificationCallback@Internal@Windows@@UEAAJPEAUtagRECT@@H@Z
    virtual long Showing(tagRECT *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TouchKeyboardHiding@CTouchKeyboardNotificationCallback@Internal@Windows@@UEAAX_N@Z
    virtual void TouchKeyboardHiding(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TouchKeyboardShowing@CTouchKeyboardNotificationCallback@Internal@Windows@@UEAAXUtagRECT@@_N1@Z
    virtual void TouchKeyboardShowing(tagRECT, bool, bool);
};
} // namespace Windows::Internal
