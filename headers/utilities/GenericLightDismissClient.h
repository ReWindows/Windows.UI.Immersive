#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 5 member(s).
namespace Windows::Internal {
class GenericLightDismissClient {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reregister@GenericLightDismissClient@Internal@Windows@@QEAAJPEAUHWND__@@@Z
    long Reregister(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unregister@GenericLightDismissClient@Internal@Windows@@QEAAJXZ
    long Unregister();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update@GenericLightDismissClient@Internal@Windows@@QEAAJPEAUHWND__@@@Z
    long Update(HWND__*);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1GenericLightDismissClient@Internal@Windows@@QEAA@XZ
    ~GenericLightDismissClient();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetLightDismissManager@GenericLightDismissClient@Internal@Windows@@AEAAJPEAPEAUILightDismissProvider@@@Z
    long _GetLightDismissManager(ILightDismissProvider * *);
};
} // namespace Windows::Internal
