#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 12 member(s).
class ThemeAssetTask {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableFodSyncTask@ThemeAssetTask@@UEAAJH@Z
    virtual long EnableFodSyncTask(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsThemeFodInstalled@ThemeAssetTask@@UEAAJPEAH@Z
    virtual long IsThemeFodInstalled(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Pause@ThemeAssetTask@@UEAAJXZ
    virtual long Pause();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Resume@ThemeAssetTask@@UEAAJXZ
    virtual long Resume();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Start@ThemeAssetTask@@UEAAJPEAUIUnknown@@PEAG@Z
    virtual long Start(IUnknown *, unsigned short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@ThemeAssetTask@@UEAAJPEAJ@Z
    virtual long Stop(long *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableTask@ThemeAssetTask@@AEAAJ_N@Z
    long EnableTask(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeAvailableMemory@ThemeAssetTask@@AEAAJXZ
    long InitializeAvailableMemory();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFODInstalled@ThemeAssetTask@@AEAAJPEA_N@Z
    long IsFODInstalled(bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFeatureSupported@ThemeAssetTask@@AEAAJPEA_N@Z
    long IsFeatureSupported(bool *);
};
