#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 5 member(s).
namespace Windows::Internal {
class CDismissingClosePopupCommand {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Handler@CDismissingClosePopupCommand@Internal@Windows@@UEAAJPEAPEAUIPopupCommandHandler@@@Z
    virtual long get_Handler(IPopupCommandHandler * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ID@CDismissingClosePopupCommand@Internal@Windows@@UEAAJPEAI@Z
    virtual long get_ID(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Label@CDismissingClosePopupCommand@Internal@Windows@@UEAAJPEAPEAG@Z
    virtual long get_Label(unsigned short * *);
};
} // namespace Windows::Internal
