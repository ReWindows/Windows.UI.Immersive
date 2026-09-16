#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 32 member(s).
namespace ApplicationTheme {
class AppThemeBrokeredPlatformApiImplementation {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@AppThemeBrokeredPlatformApiImplementation@ApplicationTheme@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@AppThemeBrokeredPlatformApiImplementation@ApplicationTheme@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@AppThemeBrokeredPlatformApiImplementation@ApplicationTheme@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@AppThemeBrokeredPlatformApiImplementation@ApplicationTheme@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@AppThemeBrokeredPlatformApiImplementation@ApplicationTheme@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevelStatic@AppThemeBrokeredPlatformApiImplementation@ApplicationTheme@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@AppThemeBrokeredPlatformApiImplementation@ApplicationTheme@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsSlideshowEnabled@AppThemeBrokeredPlatformApiImplementation@ApplicationTheme@@EEAAJW4ThemeImageType@2@PEAE@Z
    virtual long GetIsSlideshowEnabled(int, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSlideshowFolder@AppThemeBrokeredPlatformApiImplementation@ApplicationTheme@@EEAAJW4ThemeImageType@2@PEAPEAUIStorageFolder@Storage@Windows@@@Z
    virtual long GetSlideshowFolder(int, ::Windows::Storage::IStorageFolder * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSlideshowOptions@AppThemeBrokeredPlatformApiImplementation@ApplicationTheme@@EEAAJW4ThemeImageType@2@PEAW4SlideshowOption@2@PEAI@Z
    virtual long GetSlideshowOptions(int, int *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStorageFileFromUri@AppThemeBrokeredPlatformApiImplementation@ApplicationTheme@@EEAAJPEAUIUriRuntimeClass@Foundation@Windows@@PEAPEAUIStorageFile@Storage@5@@Z
    virtual long GetStorageFileFromUri(WindissectOpaque *, ::Windows::Storage::IStorageFile * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetThemeImage@AppThemeBrokeredPlatformApiImplementation@ApplicationTheme@@EEAAJW4ThemeImageType@2@PEAPEAUIUriRuntimeClass@Foundation@Windows@@@Z
    virtual long GetThemeImage(int, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetThemeImageSource@AppThemeBrokeredPlatformApiImplementation@ApplicationTheme@@EEAAJW4ThemeImageType@2@PEAW4ThemeImageSource@2@@Z
    virtual long GetThemeImageSource(int, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetThemeImageStream@AppThemeBrokeredPlatformApiImplementation@ApplicationTheme@@EEAAJW4ThemeImageType@2@PEAPEAUIThemeImageStream@2@@Z
    virtual long GetThemeImageStream(int, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetThemeSound@AppThemeBrokeredPlatformApiImplementation@ApplicationTheme@@EEAAJW4ThemeSoundType@2@PEAPEAUIUriRuntimeClass@Foundation@Windows@@@Z
    virtual long GetThemeSound(int, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSupported@AppThemeBrokeredPlatformApiImplementation@ApplicationTheme@@EEAAJPEAE@Z
    virtual long IsSupported(unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsThemeImageSetByPolicy@AppThemeBrokeredPlatformApiImplementation@ApplicationTheme@@EEAAJW4ThemeImageType@2@PEAE@Z
    virtual long IsThemeImageSetByPolicy(int, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsSlideshowEnabled@AppThemeBrokeredPlatformApiImplementation@ApplicationTheme@@EEAAJW4ThemeImageType@2@E@Z
    virtual long SetIsSlideshowEnabled(int, unsigned char);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSlideshowFolder@AppThemeBrokeredPlatformApiImplementation@ApplicationTheme@@EEAAJW4ThemeImageType@2@PEAUIStorageFolder@Storage@Windows@@@Z
    virtual long SetSlideshowFolder(int, ::Windows::Storage::IStorageFolder *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSlideshowOptions@AppThemeBrokeredPlatformApiImplementation@ApplicationTheme@@EEAAJW4ThemeImageType@2@W4SlideshowOption@2@I@Z
    virtual long SetSlideshowOptions(int, int, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetThemeImage@AppThemeBrokeredPlatformApiImplementation@ApplicationTheme@@EEAAJW4ThemeImageType@2@PEAUIStorageFile@Storage@Windows@@@Z
    virtual long SetThemeImage(int, ::Windows::Storage::IStorageFile *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetThemeImageStream@AppThemeBrokeredPlatformApiImplementation@ApplicationTheme@@EEAAJW4ThemeImageType@2@PEAUIThemeImageStream@2@@Z
    virtual long SetThemeImageStream(int, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetThemeSound@AppThemeBrokeredPlatformApiImplementation@ApplicationTheme@@EEAAJW4ThemeSoundType@2@PEAUIStorageFile@Storage@Windows@@@Z
    virtual long SetThemeSound(int, ::Windows::Storage::IStorageFile *);
};
} // namespace ApplicationTheme
