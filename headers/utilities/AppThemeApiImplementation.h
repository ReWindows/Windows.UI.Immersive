#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 26 member(s).
namespace ApplicationTheme {
class AppThemeApiImplementation {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@AppThemeApiImplementation@ApplicationTheme@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@AppThemeApiImplementation@ApplicationTheme@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@AppThemeApiImplementation@ApplicationTheme@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetThemeColor@AppThemeApiImplementation@ApplicationTheme@@UEAAJW4ThemeAccentColorVariant@2@PEAUColor@UI@Windows@@@Z
    virtual long GetThemeColor(int, ::Windows::UI::Color *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@AppThemeApiImplementation@ApplicationTheme@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@AppThemeApiImplementation@ApplicationTheme@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevelStatic@AppThemeApiImplementation@ApplicationTheme@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@AppThemeApiImplementation@ApplicationTheme@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetThemeAccentColor@AppThemeApiImplementation@ApplicationTheme@@UEAAJUColor@UI@Windows@@@Z
    virtual long SetThemeAccentColor(::Windows::UI::Color);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetThemeBaseApplicationColor@AppThemeApiImplementation@ApplicationTheme@@UEAAJUColor@UI@Windows@@@Z
    virtual long SetThemeBaseApplicationColor(::Windows::UI::Color);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetThemeBaseSystemColor@AppThemeApiImplementation@ApplicationTheme@@UEAAJUColor@UI@Windows@@@Z
    virtual long SetThemeBaseSystemColor(::Windows::UI::Color);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ThemeColorsChanged@AppThemeApiImplementation@ApplicationTheme@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_ThemeColorsChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AdvancedEffectsEnabled@AppThemeApiImplementation@ApplicationTheme@@UEAAJPEAE@Z
    virtual long get_AdvancedEffectsEnabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ThemeColorsChanged@AppThemeApiImplementation@ApplicationTheme@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_ThemeColorsChanged(EventRegistrationToken);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSingletonEventSource@AppThemeApiImplementation@ApplicationTheme@@EEAAJPEAPEAVThemeColorsChangedEvent@2@@Z
    virtual long GetSingletonEventSource(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyOfSettingsChange@AppThemeApiImplementation@ApplicationTheme@@EEAAJXZ
    virtual long NotifyOfSettingsChange();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBaseColorImpl@AppThemeApiImplementation@ApplicationTheme@@EEAAJPEBGUColor@UI@Windows@@@Z
    virtual long SetBaseColorImpl(unsigned short const *, ::Windows::UI::Color);
};
} // namespace ApplicationTheme
