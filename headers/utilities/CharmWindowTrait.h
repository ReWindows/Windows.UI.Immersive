#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 18 member(s).
namespace Windows::Internal {
class CharmWindowTrait {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanActivate@CharmWindowTrait@Internal@Windows@@UEAA_NPEAUHWND__@@@Z
    virtual bool CanActivate(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanShowWindow@CharmWindowTrait@Internal@Windows@@UEAA_NPEAUHWND__@@@Z
    virtual bool CanShowWindow(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClassName@CharmWindowTrait@Internal@Windows@@UEBAXPEAG_K@Z
    virtual void ClassName(unsigned short *, uint64_t) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConstrainingRect@CharmWindowTrait@Internal@Windows@@UEBA?AVCConstraint@Immersive@UI@3@PEAUHMONITOR__@@PEAUHWND__@@@Z
    virtual ::Windows::UI::Immersive::CConstraint ConstrainingRect(HMONITOR__*, HWND__*) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreatePopupWindow@CharmWindowTrait@Internal@Windows@@UEAAPEAUHWND__@@KPEBGKPEAU4@PEAUHMONITOR__@@W4POPUP_OPTIONS@@W4XamlPopupOptions@@@Z
    virtual HWND__* CreatePopupWindow(unsigned long, unsigned short const *, unsigned long, HWND__*, HMONITOR__*, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreatePopupWindow@CharmWindowTrait@Internal@Windows@@QEAAPEAUHWND__@@KPEBGKPEAU4@PEAUHMONITOR__@@W4POPUP_OPTIONS@@@Z
    HWND__* CreatePopupWindow(unsigned long, unsigned short const *, unsigned long, HWND__*, HMONITOR__*, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DUIResourceFile@CharmWindowTrait@Internal@Windows@@UEBAHXZ
    virtual int DUIResourceFile() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyWindow@CharmWindowTrait@Internal@Windows@@UEAAXPEAUHWND__@@@Z
    virtual void DestroyWindow(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExStyles@CharmWindowTrait@Internal@Windows@@UEBAHXZ
    virtual int ExStyles() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPopupType@CharmWindowTrait@Internal@Windows@@UEBA?AW4POPUP_TYPE@23@XZ
    virtual int GetPopupType() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?HideWindow@CharmWindowTrait@Internal@Windows@@UEAAXPEAUHWND__@@@Z
    virtual void HideWindow(HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWindowPos@CharmWindowTrait@Internal@Windows@@UEAAXPEAUHWND__@@AEBUtagRECT@@K@Z
    virtual void SetWindowPos(HWND__*, tagRECT const &, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowWindow@CharmWindowTrait@Internal@Windows@@UEAAXPEAUHWND__@@@Z
    virtual void ShowWindow(HWND__*);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CharmWindowTrait@Internal@Windows@@UEAA@XZ
    virtual ~CharmWindowTrait();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TryToSubscribeToMonitorNotifications@CharmWindowTrait@Internal@Windows@@IEAAXPEAUHWND__@@@Z
    void _TryToSubscribeToMonitorNotifications(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TryToUnsubscribeToMonitorNotifications@CharmWindowTrait@Internal@Windows@@IEAAXXZ
    void _TryToUnsubscribeToMonitorNotifications();
};
} // namespace Windows::Internal
