#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 6 member(s).
class TouchEditContextMenuBehavior {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCallbackFilters@TouchEditContextMenuBehavior@@UEAAJPEAW4Flags@DuiBehaviorFilters@@@Z
    virtual long GetCallbackFilters(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEvent@TouchEditContextMenuBehavior@@UEAAJPEAVElement@DirectUI@@PEAUEvent@3@@Z
    virtual long OnEvent(::DirectUI::Element *, ::DirectUI::Event *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddCommand@TouchEditContextMenuBehavior@@AEAAJPEAUIPopupMenu@Popups@UI@Windows@@IPEAUIUICommandInvokedHandler@345@@Z
    long _AddCommand(::Windows::UI::Popups::IPopupMenu *, unsigned int, ::Windows::UI::Popups::IUICommandInvokedHandler *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DisplayContextMenu@TouchEditContextMenuBehavior@@AEAAJPEAVTouchEdit2@DirectUI@@AEBUtagRECT@@@Z
    long _DisplayContextMenu(::DirectUI::TouchEdit2*, tagRECT const &);
};
