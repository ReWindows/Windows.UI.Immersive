#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 7 member(s).
class ThemeTelemetry {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetThemeImage_@ThemeTelemetry@@QEAAXJH@Z
    void GetThemeImage_(long, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetThemeSound_@ThemeTelemetry@@QEAAXJH@Z
    void GetThemeSound_(long, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEnabled@ThemeTelemetry@@SA_NE_K@Z
    static bool IsEnabled(unsigned char, uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetThemeImage_@ThemeTelemetry@@QEAAXJH@Z
    void SetThemeImage_(long, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetThemeSound_@ThemeTelemetry@@QEAAXJH@Z
    void SetThemeSound_(long, int);
};
