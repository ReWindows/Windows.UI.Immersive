#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 25 member(s).
namespace Windows::Internal {
class DialogWindowTrait {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanActivate@DialogWindowTrait@Internal@Windows@@UEAA_NPEAUHWND__@@@Z
    virtual bool CanActivate(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanMove@DialogWindowTrait@Internal@Windows@@UEBA_NXZ
    virtual bool CanMove() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanShowWindow@DialogWindowTrait@Internal@Windows@@UEAA_NPEAUHWND__@@@Z
    virtual bool CanShowWindow(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClassName@DialogWindowTrait@Internal@Windows@@UEBAXPEAG_K@Z
    virtual void ClassName(unsigned short *, uint64_t) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConstrainingRect@DialogWindowTrait@Internal@Windows@@UEBA?AVCConstraint@Immersive@UI@3@PEAUHMONITOR__@@PEAUHWND__@@@Z
    virtual ::Windows::UI::Immersive::CConstraint ConstrainingRect(HMONITOR__*, HWND__*) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreatePopupWindow@DialogWindowTrait@Internal@Windows@@UEAAPEAUHWND__@@KPEBGKPEAU4@PEAUHMONITOR__@@W4POPUP_OPTIONS@@W4XamlPopupOptions@@@Z
    virtual HWND__* CreatePopupWindow(unsigned long, unsigned short const *, unsigned long, HWND__*, HMONITOR__*, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DUIResourceFile@DialogWindowTrait@Internal@Windows@@UEBAHXZ
    virtual int DUIResourceFile() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyWindow@DialogWindowTrait@Internal@Windows@@UEAAXPEAUHWND__@@@Z
    virtual void DestroyWindow(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnforceAppAttachment@DialogWindowTrait@Internal@Windows@@UEAAX_N@Z
    virtual void EnforceAppAttachment(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExStyles@DialogWindowTrait@Internal@Windows@@UEBAHXZ
    virtual int ExStyles() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInitialPlacementOffset@DialogWindowTrait@Internal@Windows@@UEBA?AUtagPOINT@@XZ
    virtual tagPOINT GetInitialPlacementOffset() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPopupType@DialogWindowTrait@Internal@Windows@@UEBA?AW4POPUP_TYPE@23@XZ
    virtual int GetPopupType() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?HideWindow@DialogWindowTrait@Internal@Windows@@UEAAXPEAUHWND__@@@Z
    virtual void HideWindow(HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTabletMode@DialogWindowTrait@Internal@Windows@@UEAAX_N@Z
    virtual void SetTabletMode(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWidthOverride@DialogWindowTrait@Internal@Windows@@UEAAXI@Z
    virtual void SetWidthOverride(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWindowPos@DialogWindowTrait@Internal@Windows@@UEAAXPEAUHWND__@@AEBUtagRECT@@K@Z
    virtual void SetWindowPos(HWND__*, tagRECT const &, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowWindow@DialogWindowTrait@Internal@Windows@@UEAAXPEAUHWND__@@@Z
    virtual void ShowWindow(HWND__*);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DialogWindowTrait@Internal@Windows@@UEAA@XZ
    virtual ~DialogWindowTrait();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DisableOwner@DialogWindowTrait@Internal@Windows@@AEAAXPEAUHWND__@@@Z
    void _DisableOwner(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnableOwner@DialogWindowTrait@Internal@Windows@@AEAAXPEAUHWND__@@@Z
    void _EnableOwner(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureBroker@DialogWindowTrait@Internal@Windows@@AEAAJXZ
    long _EnsureBroker();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HideDimmingWindow@DialogWindowTrait@Internal@Windows@@AEAAX_N@Z
    void _HideDimmingWindow(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetWindowVisualPolicy@DialogWindowTrait@Internal@Windows@@CAXPEAUHWND__@@_N@Z
    static void _SetWindowVisualPolicy(HWND__*, bool);
};
} // namespace Windows::Internal
