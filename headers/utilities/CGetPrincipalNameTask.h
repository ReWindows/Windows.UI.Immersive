#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 5 member(s).
class CGetPrincipalNameTask {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTask@CGetPrincipalNameTask@@QEAAJPEAPEAU?$IAsyncOperation@PEAUHSTRING__@@@Foundation@Windows@@@Z
    long CreateTask(WindissectOpaque * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetExplicitPrincipalName@CGetPrincipalNameTask@@AEAAJPEBG0AEAVString@Internal@Windows@@@Z
    long _GetExplicitPrincipalName(unsigned short const *, unsigned short const *, ::Windows::Internal::String &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetPrincipalName@CGetPrincipalNameTask@@AEAAJAEAVString@Internal@Windows@@@Z
    long _GetPrincipalName(::Windows::Internal::String &);
};
