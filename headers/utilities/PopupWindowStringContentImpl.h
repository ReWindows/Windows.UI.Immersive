#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 5 member(s).
namespace Windows::Internal {
class PopupWindowStringContentImpl {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContent@PopupWindowStringContentImpl@Internal@Windows@@UEAAJPEAPEAG@Z
    virtual long GetContent(unsigned short * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PopupWindowStringContentImpl@Internal@Windows@@QEAA@PEBG@Z
    PopupWindowStringContentImpl(unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PopupWindowStringContentImpl@Internal@Windows@@UEAA@XZ
    virtual ~PopupWindowStringContentImpl();
};
} // namespace Windows::Internal
