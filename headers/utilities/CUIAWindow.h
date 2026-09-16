#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 27 member(s).
class CUIAWindow {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CUIAWindow@@QEAA@XZ
    CUIAWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@CUIAWindow@@UEAAJXZ
    virtual long Close();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPatternProvider@CUIAWindow@@UEAAJHPEAPEAUIUnknown@@@Z
    virtual long GetPatternProvider(int, IUnknown * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertyValue@CUIAWindow@@UEAAJHPEAUtagVARIANT@@@Z
    virtual long GetPropertyValue(int, tagVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Move@CUIAWindow@@UEAAJNN@Z
    virtual long Move(double, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Resize@CUIAWindow@@UEAAJNN@Z
    virtual long Resize(double, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Rotate@CUIAWindow@@UEAAJN@Z
    virtual long Rotate(double);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHWND@CUIAWindow@@UEAAXPEAUHWND__@@@Z
    virtual void SetHWND(HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetName@CUIAWindow@@QEAAJPEBG@Z
    long SetName(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVisualState@CUIAWindow@@UEAAJW4WindowVisualState@@@Z
    virtual long SetVisualState(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitForInputIdle@CUIAWindow@@UEAAJHPEAH@Z
    virtual long WaitForInputIdle(int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetControlType@CUIAWindow@@UEAAJPEAJ@Z
    virtual long _GetControlType(long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetPropertyAutomationId@CUIAWindow@@UEAAJPEAGI@Z
    virtual long _GetPropertyAutomationId(unsigned short *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CanMaximize@CUIAWindow@@UEAAJPEAH@Z
    virtual long get_CanMaximize(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CanMinimize@CUIAWindow@@UEAAJPEAH@Z
    virtual long get_CanMinimize(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CanMove@CUIAWindow@@UEAAJPEAH@Z
    virtual long get_CanMove(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CanResize@CUIAWindow@@UEAAJPEAH@Z
    virtual long get_CanResize(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CanRotate@CUIAWindow@@UEAAJPEAH@Z
    virtual long get_CanRotate(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HostRawElementProvider@CUIAWindow@@UEAAJPEAPEAUIRawElementProviderSimple@@@Z
    virtual long get_HostRawElementProvider(IRawElementProviderSimple * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsModal@CUIAWindow@@UEAAJPEAH@Z
    virtual long get_IsModal(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsTopmost@CUIAWindow@@UEAAJPEAH@Z
    virtual long get_IsTopmost(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ProviderOptions@CUIAWindow@@UEAAJPEAW4ProviderOptions@@@Z
    virtual long get_ProviderOptions(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_WindowInteractionState@CUIAWindow@@UEAAJPEAW4WindowInteractionState@@@Z
    virtual long get_WindowInteractionState(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_WindowVisualState@CUIAWindow@@UEAAJPEAW4WindowVisualState@@@Z
    virtual long get_WindowVisualState(int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CUIAWindow@@UEAA@XZ
    virtual ~CUIAWindow();
};
