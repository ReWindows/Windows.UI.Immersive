#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 13 member(s).
namespace DirectUI {
class HWNDElement {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanSetFocus@HWNDElement@DirectUI@@UEAA_NXZ
    virtual bool CanSetFocus();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateStyleParser@HWNDElement@DirectUI@@UEAAJPEAPEAVDUIXmlParser@2@@Z
    virtual long CreateStyleParser(::DirectUI::DUIXmlParser * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAccessibleImpl@HWNDElement@DirectUI@@UEAAJPEAPEAUIAccessible@@@Z
    virtual long GetAccessibleImpl(IAccessible * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHWND@HWNDElement@DirectUI@@UEAAPEAUHWND__@@XZ
    virtual HWND__* GetHWND();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowClassNameAndStyle@HWNDElement@DirectUI@@UEAAXPEAPEBGPEAI@Z
    virtual void GetWindowClassNameAndStyle(unsigned short const * *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCompositionChanged@HWNDElement@DirectUI@@UEAAXXZ
    virtual void OnCompositionChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGetDlgCode@HWNDElement@DirectUI@@UEAAXPEAUtagMSG@@PEA_J@Z
    virtual void OnGetDlgCode(tagMSG *, int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGroupChanged@HWNDElement@DirectUI@@UEAAXH_N@Z
    virtual void OnGroupChanged(int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnImmersiveColorSchemeChanged@HWNDElement@DirectUI@@UEAAXXZ
    virtual void OnImmersiveColorSchemeChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNoChildWithShortcutFound@HWNDElement@DirectUI@@UEAAXPEAUKeyboardEvent@2@@Z
    virtual void OnNoChildWithShortcutFound(::DirectUI::KeyboardEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnThemeChanged@HWNDElement@DirectUI@@UEAAXPEAUThemeChangedEvent@2@@Z
    virtual void OnThemeChanged(::DirectUI::ThemeChangedEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWmSettingChanged@HWNDElement@DirectUI@@UEAAX_K_J@Z
    virtual void OnWmSettingChanged(uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWmThemeChanged@HWNDElement@DirectUI@@UEAAX_K_J@Z
    virtual void OnWmThemeChanged(uint64_t, int64_t);
};
} // namespace DirectUI
