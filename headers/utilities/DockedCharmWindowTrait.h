#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 8 member(s).
namespace Windows::Internal {
class DockedCharmWindowTrait {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConstrainingRect@DockedCharmWindowTrait@Internal@Windows@@UEBA?AVCConstraint@Immersive@UI@3@PEAUHMONITOR__@@PEAUHWND__@@@Z
    virtual ::Windows::UI::Immersive::CConstraint ConstrainingRect(HMONITOR__*, HWND__*) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreatePopupWindow@DockedCharmWindowTrait@Internal@Windows@@UEAAPEAUHWND__@@KPEBGKPEAU4@PEAUHMONITOR__@@W4POPUP_OPTIONS@@W4XamlPopupOptions@@@Z
    virtual HWND__* CreatePopupWindow(unsigned long, unsigned short const *, unsigned long, HWND__*, HMONITOR__*, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreatePopupWindow@DockedCharmWindowTrait@Internal@Windows@@QEAAPEAUHWND__@@KPEBGKPEAU4@PEAUHMONITOR__@@W4POPUP_OPTIONS@@@Z
    HWND__* CreatePopupWindow(unsigned long, unsigned short const *, unsigned long, HWND__*, HMONITOR__*, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyWindow@DockedCharmWindowTrait@Internal@Windows@@UEAAXPEAUHWND__@@@Z
    virtual void DestroyWindow(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HideWindow@DockedCharmWindowTrait@Internal@Windows@@UEAAXPEAUHWND__@@@Z
    virtual void HideWindow(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowWindow@DockedCharmWindowTrait@Internal@Windows@@UEAAXPEAUHWND__@@@Z
    virtual void ShowWindow(HWND__*);
};
} // namespace Windows::Internal
