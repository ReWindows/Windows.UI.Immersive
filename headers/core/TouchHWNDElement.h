#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 10 member(s).
namespace DirectUI {
class TouchHWNDElement {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateTooltip@TouchHWNDElement@DirectUI@@UEAAXPEAVElement@2@K@Z
    virtual void ActivateTooltip(::DirectUI::Element *, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsMSAAEnabled@TouchHWNDElement@DirectUI@@UEAA_NXZ
    virtual bool IsMSAAEnabled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MessageCallback@TouchHWNDElement@DirectUI@@UEAAIPEAUtagGMSG@@@Z
    virtual unsigned int MessageCallback(tagGMSG *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDestroy@TouchHWNDElement@DirectUI@@UEAAXXZ
    virtual void OnDestroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyFocusMoved@TouchHWNDElement@DirectUI@@UEAAXPEAVElement@2@0@Z
    virtual void OnKeyFocusMoved(::DirectUI::Element *, ::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@TouchHWNDElement@DirectUI@@UEAAXPEBUPropertyInfo@2@HPEAVValue@2@1@Z
    virtual void OnPropertyChanged(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveTooltip@TouchHWNDElement@DirectUI@@UEAAXPEAVElement@2@@Z
    virtual void RemoveTooltip(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTooltip@TouchHWNDElement@DirectUI@@UEAAXPEAVElement@2@@Z
    virtual void UpdateTooltip(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WndProc@TouchHWNDElement@DirectUI@@UEAA_JPEAUHWND__@@I_K_J@Z
    virtual int64_t WndProc(HWND__*, unsigned int, uint64_t, int64_t);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnUIStateChanged@TouchHWNDElement@DirectUI@@MEAAXGG@Z
    virtual void _OnUIStateChanged(unsigned short, unsigned short);
};
} // namespace DirectUI
