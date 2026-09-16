#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 2 member(s).
class ApplicationTheme {
public:
    class AppThemeApiImplementation;
    class AppThemeBrokeredApiImplementation;
    class AppThemeBrokeredPlatformApiImplementation;
    class ThemeColorsChangedEvent;
    class ThemeImageStream;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreatePathUri@ApplicationTheme@@YAJPEBGPEAPEAUIUriRuntimeClass@Foundation@Windows@@@Z
    long CreatePathUri(unsigned short const *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAbsolutePathWithOptionalStorageFile@ApplicationTheme@@YAJPEAUIStorageFile@Storage@Windows@@AEAVString@Internal@4@PEAPEAU234@@Z
    long GetAbsolutePathWithOptionalStorageFile(::Windows::Storage::IStorageFile *, ::Windows::Internal::String &, ::Windows::Storage::IStorageFile * *);
};
