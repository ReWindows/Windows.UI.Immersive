#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 6 member(s).
namespace Windows::Internal {
class CCommandWrapper {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Handler@CCommandWrapper@Internal@Windows@@UEAAJPEAPEAUIPopupCommandHandler@@@Z
    virtual long get_Handler(IPopupCommandHandler * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ID@CCommandWrapper@Internal@Windows@@UEAAJPEAI@Z
    virtual long get_ID(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Label@CCommandWrapper@Internal@Windows@@UEAAJPEAPEAG@Z
    virtual long get_Label(unsigned short * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CCommandWrapper@Internal@Windows@@UEAA@XZ
    virtual ~CCommandWrapper();
};
} // namespace Windows::Internal
