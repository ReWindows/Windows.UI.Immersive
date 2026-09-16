#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 6 member(s).
namespace Windows::Internal {
class CMessageDialogFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@CMessageDialogFactory@Internal@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CMessageDialogFactory@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUIMessageDialog@Popups@UI@3@@Z
    virtual long Create(HSTRING__*, ::Windows::UI::Popups::IMessageDialog * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateWithTitle@CMessageDialogFactory@Internal@Windows@@UEAAJPEAUHSTRING__@@0PEAPEAUIMessageDialog@Popups@UI@3@@Z
    virtual long CreateWithTitle(HSTRING__*, HSTRING__*, ::Windows::UI::Popups::IMessageDialog * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateHelper@CMessageDialogFactory@Internal@Windows@@AEAAJPEAUHSTRING__@@0PEAPEAUIMessageDialog@Popups@UI@3@@Z
    long _CreateHelper(HSTRING__*, HSTRING__*, ::Windows::UI::Popups::IMessageDialog * *);
};
} // namespace Windows::Internal
