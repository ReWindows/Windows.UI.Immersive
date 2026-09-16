#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 20 member(s).
namespace Windows::Internal {
class CPopupWindowFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddMetadataProviderSource@CPopupWindowFactory@Internal@Windows@@UEAAJPEAUIPopupXamlMetadataProviderSource@@@Z
    virtual long AddMetadataProviderSource(IPopupXamlMetadataProviderSource *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CPopupWindowFactory@Internal@Windows@@QEAA@XZ
    CPopupWindowFactory();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCenterPositionedFlyout@CPopupWindowFactory@Internal@Windows@@UEAAJPEAUHWND__@@PEAUtagPOINT@@PEAPEAUIPopupWindow@@@Z
    virtual long CreateCenterPositionedFlyout(HWND__*, tagPOINT *, IPopupWindow * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCharmWindow@CPopupWindowFactory@Internal@Windows@@UEAAJW4CHARMS_SIZE@@PEAPEAUIPopupWindow@@@Z
    virtual long CreateCharmWindow(int, IPopupWindow * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCharmWindowForApp@CPopupWindowFactory@Internal@Windows@@UEAAJW4CHARMS_SIZE@@PEAUIUnknown@@PEAPEAUIPopupWindow@@@Z
    virtual long CreateCharmWindowForApp(int, IUnknown *, IPopupWindow * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDialogPopup@CPopupWindowFactory@Internal@Windows@@UEAAJPEAUHWND__@@PEAPEAUIPopupWindow@@@Z
    virtual long CreateDialogPopup(HWND__*, IPopupWindow * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDockedCharmWindow@CPopupWindowFactory@Internal@Windows@@UEAAJPEAUHWND__@@W4CHARMS_SIZE@@PEAPEAUIPopupWindow@@@Z
    virtual long CreateDockedCharmWindow(HWND__*, int, IPopupWindow * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateExplicitlyPositionedFlyout@CPopupWindowFactory@Internal@Windows@@UEAAJPEAUHWND__@@AEBUtagPOINT@@PEAPEAUIPopupWindow@@@Z
    virtual long CreateExplicitlyPositionedFlyout(HWND__*, tagPOINT const &, IPopupWindow * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateHostingContainer@CPopupWindowFactory@Internal@Windows@@UEAAJPEAUHWND__@@PEAPEAUIPopupWindow@@@Z
    virtual long CreateHostingContainer(HWND__*, IPopupWindow * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateRelativeFlyout@CPopupWindowFactory@Internal@Windows@@UEAAJPEAUHWND__@@AEBUtagRECT@@W4FLYOUT_PLACEMENT@@PEAPEAUIPopupWindow@@@Z
    virtual long CreateRelativeFlyout(HWND__*, tagRECT const &, int, IPopupWindow * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateRelativeFlyoutForApp@CPopupWindowFactory@Internal@Windows@@UEAAJPEAUHWND__@@AEBUtagRECT@@W4FLYOUT_PLACEMENT@@PEAUIUnknown@@PEAPEAUIPopupWindow@@@Z
    virtual long CreateRelativeFlyoutForApp(HWND__*, tagRECT const &, int, IUnknown *, IPopupWindow * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSystemModalDialogPopup@CPopupWindowFactory@Internal@Windows@@UEAAJPEAPEAUIPopupWindow@@@Z
    virtual long CreateSystemModalDialogPopup(IPopupWindow * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAnimationDirection@CPopupWindowFactory@Internal@Windows@@UEAAJW4FLYOUT_ANIMATION_DIRECTION@@@Z
    virtual long SetAnimationDirection(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetExtendedOptions@CPopupWindowFactory@Internal@Windows@@UEAAJW4XamlPopupOptions@@@Z
    virtual long SetExtendedOptions(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOptions@CPopupWindowFactory@Internal@Windows@@UEAAJW4POPUP_OPTIONS@@@Z
    virtual long SetOptions(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPopupPersonality@CPopupWindowFactory@Internal@Windows@@UEAAJW4POPUP_PERSONALITY@@@Z
    virtual long SetPopupPersonality(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPopupWindowFactory@Internal@Windows@@UEAA@XZ
    virtual ~CPopupWindowFactory();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitializePopup@CPopupWindowFactory@Internal@Windows@@AEAAJPEAUHWND__@@IIPEAVCPopupWindow@23@W4POPUP_PERSONALITY@@PEAUHMONITOR__@@AEBU_GUID@@PEAPEAX@Z
    long _InitializePopup(HWND__*, unsigned int, unsigned int, ::Windows::Internal::CPopupWindow *, int, HMONITOR__*, _GUID const &, void * *);
};
} // namespace Windows::Internal
