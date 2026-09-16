#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 3 member(s).
namespace Windows::Internal {
class DialogKeyboardAnimationTrait {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndRepositionForKeyboard@DialogKeyboardAnimationTrait@Internal@Windows@@UEAAJPEAUHWND__@@_N@Z
    virtual long EndRepositionForKeyboard(HWND__*, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartRepositionForKeyboard@DialogKeyboardAnimationTrait@Internal@Windows@@UEAAJPEAUHWND__@@_N@Z
    virtual long StartRepositionForKeyboard(HWND__*, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DialogKeyboardAnimationTrait@Internal@Windows@@UEAA@XZ
    virtual ~DialogKeyboardAnimationTrait();
};
} // namespace Windows::Internal
