#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 12 member(s).
class CSetImageFeedDialog {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAndShow@CSetImageFeedDialog@@QEAAJXZ
    long CreateAndShow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAndShowMessageDialog@CSetImageFeedDialog@@QEAAJPEA_N@Z
    long CreateAndShowMessageDialog(bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCommand@CSetImageFeedDialog@@QEAAJPEAUIPopupWindow@@PEAUIPopupCommand@@@Z
    long OnCommand(IPopupWindow *, IPopupCommand *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDismissCommand@CSetImageFeedDialog@@QEAAJPEAUIPopupWindow@@@Z
    long OnDismissCommand(IPopupWindow *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Close@CSetImageFeedDialog@@AEAAXXZ
    void _Close();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitDialog@CSetImageFeedDialog@@AEAAJPEAUHWND__@@PEBG@Z
    long _InitDialog(HWND__*, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PresentDialog@CSetImageFeedDialog@@AEAAJPEA_N@Z
    long _PresentDialog(bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetCommands@CSetImageFeedDialog@@AEAAJPEAUIPopupWindow@@PEAII@Z
    long _SetCommands(IPopupWindow *, unsigned int *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetDialogDUI@CSetImageFeedDialog@@AEAAJPEAVElement@DirectUI@@@Z
    long _SetDialogDUI(::DirectUI::Element *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSetImageFeedDialog@@EEAA@XZ
    virtual ~CSetImageFeedDialog();
};
