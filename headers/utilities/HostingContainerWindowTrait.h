#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 15 member(s).
namespace Windows::Internal {
class HostingContainerWindowTrait {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanActivate@HostingContainerWindowTrait@Internal@Windows@@UEAA_NPEAUHWND__@@@Z
    virtual bool CanActivate(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanShowWindow@HostingContainerWindowTrait@Internal@Windows@@UEAA_NPEAUHWND__@@@Z
    virtual bool CanShowWindow(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClassName@HostingContainerWindowTrait@Internal@Windows@@UEBAXPEAG_K@Z
    virtual void ClassName(unsigned short *, uint64_t) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConstrainingRect@HostingContainerWindowTrait@Internal@Windows@@UEBA?AVCConstraint@Immersive@UI@3@PEAUHMONITOR__@@PEAUHWND__@@@Z
    virtual ::Windows::UI::Immersive::CConstraint ConstrainingRect(HMONITOR__*, HWND__*) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreatePopupWindow@HostingContainerWindowTrait@Internal@Windows@@UEAAPEAUHWND__@@KPEBGKPEAU4@PEAUHMONITOR__@@W4POPUP_OPTIONS@@W4XamlPopupOptions@@@Z
    virtual HWND__* CreatePopupWindow(unsigned long, unsigned short const *, unsigned long, HWND__*, HMONITOR__*, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DUIResourceFile@HostingContainerWindowTrait@Internal@Windows@@UEBAHXZ
    virtual int DUIResourceFile() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyWindow@HostingContainerWindowTrait@Internal@Windows@@UEAAXPEAUHWND__@@@Z
    virtual void DestroyWindow(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExStyles@HostingContainerWindowTrait@Internal@Windows@@UEBAHXZ
    virtual int ExStyles() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPopupType@HostingContainerWindowTrait@Internal@Windows@@UEBA?AW4POPUP_TYPE@23@XZ
    virtual int GetPopupType() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?HideWindow@HostingContainerWindowTrait@Internal@Windows@@UEAAXPEAUHWND__@@@Z
    virtual void HideWindow(HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWindowPos@HostingContainerWindowTrait@Internal@Windows@@UEAAXPEAUHWND__@@AEBUtagRECT@@K@Z
    virtual void SetWindowPos(HWND__*, tagRECT const &, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowWindow@HostingContainerWindowTrait@Internal@Windows@@UEAAXPEAUHWND__@@@Z
    virtual void ShowWindow(HWND__*);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1HostingContainerWindowTrait@Internal@Windows@@UEAA@XZ
    virtual ~HostingContainerWindowTrait();
};
} // namespace Windows::Internal
