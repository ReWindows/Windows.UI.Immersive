#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 16 member(s).
class CUserInfoDialog {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelDialog@CUserInfoDialog@@UEAAJXZ
    virtual long CancelDialog();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitConsentDialog@CUserInfoDialog@@UEAAJPEAUHWND__@@PEBG11EI@Z
    virtual long InitConsentDialog(HWND__*, unsigned short const *, unsigned short const *, unsigned short const *, unsigned char, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitErrorDialog@CUserInfoDialog@@UEAAJPEAUHWND__@@IIJPEBG@Z
    virtual long InitErrorDialog(HWND__*, unsigned int, unsigned int, long, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CUserInfoDialog@@UEAAJI@Z
    virtual long Initialize(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowErrorDialogAndWait@CUserInfoDialog@@UEAAJXZ
    virtual long ShowErrorDialogAndWait();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowUserInfoConsentDialogAndWait@CUserInfoDialog@@UEAAJPEAE@Z
    virtual long ShowUserInfoConsentDialogAndWait(unsigned char *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Close@CUserInfoDialog@@AEAAXXZ
    void _Close();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateAndShow@CUserInfoDialog@@AEAAJXZ
    long _CreateAndShow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitDialog@CUserInfoDialog@@AEAAJPEAUHWND__@@PEBG1@Z
    long _InitDialog(HWND__*, unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnCommand@CUserInfoDialog@@AEAAJPEAUIPopupWindow@@PEAUIPopupCommand@@@Z
    long _OnCommand(IPopupWindow *, IPopupCommand *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnDismissCommand@CUserInfoDialog@@AEAAJPEAUIPopupWindow@@@Z
    long _OnDismissCommand(IPopupWindow *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetCommands@CUserInfoDialog@@AEAAJPEAUIPopupWindow@@PEAII@Z
    long _SetCommands(IPopupWindow *, unsigned int *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetDialogDUI@CUserInfoDialog@@AEAAJPEAVElement@DirectUI@@@Z
    long _SetDialogDUI(::DirectUI::Element *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CUserInfoDialog@@EEAA@XZ
    virtual ~CUserInfoDialog();
};
