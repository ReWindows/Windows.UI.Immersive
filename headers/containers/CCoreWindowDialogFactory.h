#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 4 member(s).
namespace Windows::Internal {
class CCoreWindowDialogFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@CCoreWindowDialogFactory@Internal@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateWithTitle@CCoreWindowDialogFactory@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUICoreWindowDialog@Core@UI@3@@Z
    virtual long CreateWithTitle(HSTRING__*, ::Windows::UI::Core::ICoreWindowDialog * *);
};
} // namespace Windows::Internal
