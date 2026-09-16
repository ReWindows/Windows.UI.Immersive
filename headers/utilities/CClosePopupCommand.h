#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 5 member(s).
namespace Windows::Internal {
class CClosePopupCommand {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Handler@CClosePopupCommand@Internal@Windows@@UEAAJPEAPEAUIPopupCommandHandler@@@Z
    virtual long get_Handler(IPopupCommandHandler * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ID@CClosePopupCommand@Internal@Windows@@UEAAJPEAI@Z
    virtual long get_ID(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Label@CClosePopupCommand@Internal@Windows@@UEAAJPEAPEAG@Z
    virtual long get_Label(unsigned short * *);
};
} // namespace Windows::Internal
