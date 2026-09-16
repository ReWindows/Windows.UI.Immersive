#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 14 member(s).
namespace Windows::Internal {
class CustomPopupWindowOperation {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFrameWindow@CustomPopupWindowOperation@Internal@Windows@@QEAAJPEAPEAUHWND__@@@Z
    long CreateFrameWindow(HWND__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeBridgeToCoreWindow@CustomPopupWindowOperation@Internal@Windows@@QEAAJPEAV?$GitEventSource@U?$ITypedEventHandler@PEAVCoreWindow@Core@UI@Windows@@PEAVCoreWindowPopupShowingEventArgs@234@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@23@PEAUIPopupWindow@@@Z
    long InitializeBridgeToCoreWindow(WindissectOpaque *, IPopupWindow *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CustomPopupWindowOperation@Internal@Windows@@QEAAJPEAXPEAUHSTRING__@@PEAUIPopupWindow@@AEBVCMarshaledInterface@@III3@Z
    long RuntimeClassInitialize(void *, HSTRING__*, IPopupWindow *, CMarshaledInterface const &, unsigned int, unsigned int, unsigned int, CMarshaledInterface const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAppWindow@CustomPopupWindowOperation@Internal@Windows@@UEAAJJ@Z
    virtual long SetAppWindow(long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAppWindowAndGetHostProcess@CustomPopupWindowOperation@Internal@Windows@@UEAAJJPEA_K@Z
    virtual long SetAppWindowAndGetHostProcess(long, uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUpHostDUI@CustomPopupWindowOperation@Internal@Windows@@QEAAJPEAPEAVElement@DirectUI@@@Z
    long SetUpHostDUI(::DirectUI::Element * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CustomPopupWindowOperation@Internal@Windows@@UEAA@XZ
    virtual ~CustomPopupWindowOperation();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHideWindow@CustomPopupWindowOperation@Internal@Windows@@MEAAXXZ
    virtual void OnHideWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnShowWindow@CustomPopupWindowOperation@Internal@Windows@@MEAAXXZ
    virtual void OnShowWindow();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_CoreWindowInitThreadProc@CustomPopupWindowOperation@Internal@Windows@@CAKPEAX@Z
    static unsigned long s_CoreWindowInitThreadProc(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_CoreWindowThreadProc@CustomPopupWindowOperation@Internal@Windows@@CAKPEAX@Z
    static unsigned long s_CoreWindowThreadProc(void *);
};
} // namespace Windows::Internal
