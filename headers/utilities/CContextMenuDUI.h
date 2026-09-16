#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 16 member(s).
class CContextMenuDUI {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CContextMenuDUI@@QEAA@PEAU?$IVector@PEAUIUICommand@Popups@UI@Windows@@@Collections@Foundation@Windows@@W4PopupMenuMenuStyle@@@Z
    CContextMenuDUI(WindissectOpaque *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseFlyout@CContextMenuDUI@@QEAAXXZ
    void CloseFlyout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFlyoutWindow@CContextMenuDUI@@QEAAJPEAUHWND__@@PEBUtagRECT@@W4FLYOUT_PLACEMENT@@@Z
    long CreateFlyoutWindow(HWND__*, tagRECT const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnListenedEvent@CContextMenuDUI@@UEAAXPEAVElement@DirectUI@@PEAUEvent@3@@Z
    virtual void OnListenedEvent(::DirectUI::Element *, ::DirectUI::Event *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportSQM@CContextMenuDUI@@QEAAXXZ
    void ReportSQM();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RunMessageLoop@CContextMenuDUI@@QEAAJXZ
    long RunMessageLoop();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowFlyoutWindow@CContextMenuDUI@@QEAAJXZ
    long ShowFlyoutWindow();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CContextMenuDUI@@UEAA@XZ
    virtual ~CContextMenuDUI();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_WndProc@CContextMenuDUI@@MEAA_JPEAUHWND__@@I_K_J@Z
    virtual int64_t v_WndProc(HWND__*, unsigned int, uint64_t, int64_t);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleKeyDown@CContextMenuDUI@@AEAAX_K_J@Z
    void _HandleKeyDown(uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InsertButton@CContextMenuDUI@@AEAAJPEBGPEAUIInspectable@@@Z
    long _InsertButton(unsigned short const *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InsertSeparator@CContextMenuDUI@@AEAAJXZ
    long _InsertSeparator();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetUpCommands@CContextMenuDUI@@AEAAJXZ
    long _SetUpCommands();
};
