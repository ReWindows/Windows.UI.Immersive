#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 4 member(s).
class CGetDomainNameTask {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTask@CGetDomainNameTask@@QEAAJPEAPEAU?$IAsyncOperation@PEAUHSTRING__@@@Foundation@Windows@@@Z
    long CreateTask(WindissectOpaque * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetDomainName@CGetDomainNameTask@@AEAAJAEAVString@Internal@Windows@@@Z
    long _GetDomainName(::Windows::Internal::String &);
};
