#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 21 member(s).
namespace ApplicationTheme {
class AppThemeBrokeredApiImplementation {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@AppThemeBrokeredApiImplementation@ApplicationTheme@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@AppThemeBrokeredApiImplementation@ApplicationTheme@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@AppThemeBrokeredApiImplementation@ApplicationTheme@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetThemeImage@AppThemeBrokeredApiImplementation@ApplicationTheme@@UEAAJW4ThemeImageType@2@PEAPEAUIUriRuntimeClass@Foundation@Windows@@@Z
    virtual long GetThemeImage(int, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetThemeSound@AppThemeBrokeredApiImplementation@ApplicationTheme@@UEAAJW4ThemeSoundType@2@PEAPEAUIUriRuntimeClass@Foundation@Windows@@@Z
    virtual long GetThemeSound(int, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@AppThemeBrokeredApiImplementation@ApplicationTheme@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@AppThemeBrokeredApiImplementation@ApplicationTheme@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevelStatic@AppThemeBrokeredApiImplementation@ApplicationTheme@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSupported@AppThemeBrokeredApiImplementation@ApplicationTheme@@UEAAJPEAE@Z
    virtual long IsSupported(unsigned char *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@AppThemeBrokeredApiImplementation@ApplicationTheme@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetThemeImage@AppThemeBrokeredApiImplementation@ApplicationTheme@@UEAAJW4ThemeImageType@2@PEAUIStorageFile@Storage@Windows@@@Z
    virtual long SetThemeImage(int, ::Windows::Storage::IStorageFile *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetThemeSound@AppThemeBrokeredApiImplementation@ApplicationTheme@@UEAAJW4ThemeSoundType@2@PEAUIStorageFile@Storage@Windows@@@Z
    virtual long SetThemeSound(int, ::Windows::Storage::IStorageFile *);
};
} // namespace ApplicationTheme
