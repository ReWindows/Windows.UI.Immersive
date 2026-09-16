#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 18 member(s).
namespace Windows::Internal {
class SystemDialogWindowTrait {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanActivate@SystemDialogWindowTrait@Internal@Windows@@UEAA_NPEAUHWND__@@@Z
    virtual bool CanActivate(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanShowWindow@SystemDialogWindowTrait@Internal@Windows@@UEAA_NPEAUHWND__@@@Z
    virtual bool CanShowWindow(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClassName@SystemDialogWindowTrait@Internal@Windows@@UEBAXPEAG_K@Z
    virtual void ClassName(unsigned short *, uint64_t) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConstrainingRect@SystemDialogWindowTrait@Internal@Windows@@UEBA?AVCConstraint@Immersive@UI@3@PEAUHMONITOR__@@PEAUHWND__@@@Z
    virtual ::Windows::UI::Immersive::CConstraint ConstrainingRect(HMONITOR__*, HWND__*) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreatePopupWindow@SystemDialogWindowTrait@Internal@Windows@@UEAAPEAUHWND__@@KPEBGKPEAU4@PEAUHMONITOR__@@W4POPUP_OPTIONS@@W4XamlPopupOptions@@@Z
    virtual HWND__* CreatePopupWindow(unsigned long, unsigned short const *, unsigned long, HWND__*, HMONITOR__*, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DUIResourceFile@SystemDialogWindowTrait@Internal@Windows@@UEBAHXZ
    virtual int DUIResourceFile() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyWindow@SystemDialogWindowTrait@Internal@Windows@@UEAAXPEAUHWND__@@@Z
    virtual void DestroyWindow(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnforceDisplayAttachment@SystemDialogWindowTrait@Internal@Windows@@UEAAX_N@Z
    virtual void EnforceDisplayAttachment(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExStyles@SystemDialogWindowTrait@Internal@Windows@@UEBAHXZ
    virtual int ExStyles() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPopupType@SystemDialogWindowTrait@Internal@Windows@@UEBA?AW4POPUP_TYPE@23@XZ
    virtual int GetPopupType() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTaskbarProxyWindow@SystemDialogWindowTrait@Internal@Windows@@UEBAPEAUHWND__@@XZ
    virtual HWND__* GetTaskbarProxyWindow() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?HideWindow@SystemDialogWindowTrait@Internal@Windows@@UEAAXPEAUHWND__@@@Z
    virtual void HideWindow(HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSystemModal@SystemDialogWindowTrait@Internal@Windows@@UEBA_NXZ
    virtual bool IsSystemModal() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWindowPos@SystemDialogWindowTrait@Internal@Windows@@UEAAXPEAUHWND__@@AEBUtagRECT@@K@Z
    virtual void SetWindowPos(HWND__*, tagRECT const &, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowWindow@SystemDialogWindowTrait@Internal@Windows@@UEAAXPEAUHWND__@@@Z
    virtual void ShowWindow(HWND__*);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SystemDialogWindowTrait@Internal@Windows@@UEAA@XZ
    virtual ~SystemDialogWindowTrait();
};
} // namespace Windows::Internal
