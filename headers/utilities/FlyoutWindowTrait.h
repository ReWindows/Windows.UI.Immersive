#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 20 member(s).
namespace Windows::Internal {
class FlyoutWindowTrait {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanActivate@FlyoutWindowTrait@Internal@Windows@@UEAA_NPEAUHWND__@@@Z
    virtual bool CanActivate(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanShowWindow@FlyoutWindowTrait@Internal@Windows@@UEAA_NPEAUHWND__@@@Z
    virtual bool CanShowWindow(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClassName@FlyoutWindowTrait@Internal@Windows@@UEBAXPEAG_K@Z
    virtual void ClassName(unsigned short *, uint64_t) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConstrainingRect@FlyoutWindowTrait@Internal@Windows@@UEBA?AVCConstraint@Immersive@UI@3@PEAUHMONITOR__@@PEAUHWND__@@@Z
    virtual ::Windows::UI::Immersive::CConstraint ConstrainingRect(HMONITOR__*, HWND__*) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreatePopupWindow@FlyoutWindowTrait@Internal@Windows@@UEAAPEAUHWND__@@KPEBGKPEAU4@PEAUHMONITOR__@@W4POPUP_OPTIONS@@W4XamlPopupOptions@@@Z
    virtual HWND__* CreatePopupWindow(unsigned long, unsigned short const *, unsigned long, HWND__*, HMONITOR__*, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreatePopupWindow@FlyoutWindowTrait@Internal@Windows@@QEAAPEAUHWND__@@KPEBGKPEAU4@PEAUHMONITOR__@@W4POPUP_OPTIONS@@@Z
    HWND__* CreatePopupWindow(unsigned long, unsigned short const *, unsigned long, HWND__*, HMONITOR__*, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DUIResourceFile@FlyoutWindowTrait@Internal@Windows@@UEBAHXZ
    virtual int DUIResourceFile() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyWindow@FlyoutWindowTrait@Internal@Windows@@UEAAXPEAUHWND__@@@Z
    virtual void DestroyWindow(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnforceAppAttachment@FlyoutWindowTrait@Internal@Windows@@UEAAX_N@Z
    virtual void EnforceAppAttachment(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnforceDisplayAttachment@FlyoutWindowTrait@Internal@Windows@@UEAAX_N@Z
    virtual void EnforceDisplayAttachment(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExStyles@FlyoutWindowTrait@Internal@Windows@@UEBAHXZ
    virtual int ExStyles() const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0FlyoutWindowTrait@Internal@Windows@@QEAA@AEBUtagRECT@@_N@Z
    FlyoutWindowTrait(tagRECT const &, bool);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0FlyoutWindowTrait@Internal@Windows@@QEAA@AEBUtagPOINT@@_N@Z
    FlyoutWindowTrait(tagPOINT const &, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPopupType@FlyoutWindowTrait@Internal@Windows@@UEBA?AW4POPUP_TYPE@23@XZ
    virtual int GetPopupType() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?HideWindow@FlyoutWindowTrait@Internal@Windows@@UEAAXPEAUHWND__@@@Z
    virtual void HideWindow(HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWindowPos@FlyoutWindowTrait@Internal@Windows@@UEAAXPEAUHWND__@@AEBUtagRECT@@K@Z
    virtual void SetWindowPos(HWND__*, tagRECT const &, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowWindow@FlyoutWindowTrait@Internal@Windows@@UEAAXPEAUHWND__@@@Z
    virtual void ShowWindow(HWND__*);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1FlyoutWindowTrait@Internal@Windows@@UEAA@XZ
    virtual ~FlyoutWindowTrait();
};
} // namespace Windows::Internal
