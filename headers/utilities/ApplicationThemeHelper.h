#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 8 member(s).
class ApplicationThemeHelper {
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppDataFolderPath@ApplicationThemeHelper@@YAJPEAVString@Internal@Windows@@@Z
    long GetAppDataFolderPath(::Windows::Internal::String *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppInstallFolderPath@ApplicationThemeHelper@@YAJPEAVString@Internal@Windows@@@Z
    long GetAppInstallFolderPath(::Windows::Internal::String *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLockImage@ApplicationThemeHelper@@YAJPEAGH@Z
    long GetLockImage(unsigned short *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWallpaper@ApplicationThemeHelper@@YAJPEAGH@Z
    long GetWallpaper(unsigned short *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWallpaperStream@ApplicationThemeHelper@@YAJPEAPEAUIRandomAccessStream@Streams@Storage@Windows@@@Z
    long GetWallpaperStream(::Windows::Storage::Streams::IRandomAccessStream * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLockImage@ApplicationThemeHelper@@YAJPEBGPEAUIStorageFile@Storage@Windows@@@Z
    long SetLockImage(unsigned short const *, ::Windows::Storage::IStorageFile *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWallpaper@ApplicationThemeHelper@@YAJPEBG@Z
    long SetWallpaper(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VerifyPathInAppStorage@ApplicationThemeHelper@@YAJAEBVString@Internal@Windows@@@Z
    long VerifyPathInAppStorage(::Windows::Internal::String const &);
};
