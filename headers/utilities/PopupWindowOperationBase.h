#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 13 member(s).
namespace Windows::Internal {
class PopupWindowOperationBase {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PopupWindowOperationBase@Internal@Windows@@QEAA@XZ
    PopupWindowOperationBase();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@PopupWindowOperationBase@Internal@Windows@@QEAAJPEAXPEAUHSTRING__@@PEAUIPopupWindow@@VCMarshaledInterface@@III3_N@Z
    long RuntimeClassInitialize(void *, HSTRING__*, IPopupWindow *, CMarshaledInterface, unsigned int, unsigned int, unsigned int, CMarshaledInterface, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Show@PopupWindowOperationBase@Internal@Windows@@QEAAJPEAPEAUIUICommand@Popups@UI@3@@Z
    long Show(::Windows::UI::Popups::IUICommand * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PopupWindowOperationBase@Internal@Windows@@UEAA@XZ
    virtual ~PopupWindowOperationBase();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDestroyEvent@PopupWindowOperationBase@Internal@Windows@@MEAAJPEAUIPopupWindow@@@Z
    virtual long OnDestroyEvent(IPopupWindow *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDismissEvent@PopupWindowOperationBase@Internal@Windows@@MEAAJPEAUIPopupWindow@@@Z
    virtual long OnDismissEvent(IPopupWindow *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBackButtonCommand@PopupWindowOperationBase@Internal@Windows@@AEAAJPEAUIPopupWindow@@@Z
    long OnBackButtonCommand(IPopupWindow *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AdjustButtons@PopupWindowOperationBase@Internal@Windows@@AEAAJPEAUIPopupWindow@@_N@Z
    long _AdjustButtons(IPopupWindow *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateBackCommand@PopupWindowOperationBase@Internal@Windows@@AEAAJPEAPEAUIUICommand@Popups@UI@3@@Z
    long _CreateBackCommand(::Windows::UI::Popups::IUICommand * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateCloseCommand@PopupWindowOperationBase@Internal@Windows@@AEAAJPEAPEAUIUICommand@Popups@UI@3@@Z
    long _CreateCloseCommand(::Windows::UI::Popups::IUICommand * *);
};
} // namespace Windows::Internal
