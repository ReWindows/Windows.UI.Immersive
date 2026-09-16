#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 6 member(s).
class CSetImageFeedDialogCommand {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Handler@CSetImageFeedDialogCommand@@UEAAJPEAPEAUIPopupCommandHandler@@@Z
    virtual long get_Handler(IPopupCommandHandler * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ID@CSetImageFeedDialogCommand@@UEAAJPEAI@Z
    virtual long get_ID(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Label@CSetImageFeedDialogCommand@@UEAAJPEAPEAG@Z
    virtual long get_Label(unsigned short * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSetImageFeedDialogCommand@@UEAA@XZ
    virtual ~CSetImageFeedDialogCommand();
};
