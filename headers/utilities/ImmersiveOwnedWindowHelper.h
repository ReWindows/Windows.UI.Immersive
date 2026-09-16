#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 5 member(s).
class ImmersiveOwnedWindowHelper {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumImmersiveComponentOwnedWindows@ImmersiveOwnedWindowHelper@@YAHPEAUHWND__@@_J@Z
    int EnumImmersiveComponentOwnedWindows(HWND__*, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterOwnedWindow@ImmersiveOwnedWindowHelper@@YAJPEAUHWND__@@@Z
    long RegisterOwnedWindow(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RepositionOwnedWindows@ImmersiveOwnedWindowHelper@@YAJPEAUHWND__@@QEBUtagRECT@@@Z
    long RepositionOwnedWindows(HWND__*, tagRECT const * const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RepositionOwnedWindows@ImmersiveOwnedWindowHelper@@YAJPEAUHWND__@@QEBUtagWINDOWPOS@@@Z
    long RepositionOwnedWindows(HWND__*, tagWINDOWPOS const * const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterOwnedWindow@ImmersiveOwnedWindowHelper@@YAJPEAUHWND__@@@Z
    long UnregisterOwnedWindow(HWND__*);
};
