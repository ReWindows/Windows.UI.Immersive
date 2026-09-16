#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 6 member(s).
class CUserInfoDialogCommand {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Handler@CUserInfoDialogCommand@@UEAAJPEAPEAUIPopupCommandHandler@@@Z
    virtual long get_Handler(IPopupCommandHandler * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ID@CUserInfoDialogCommand@@UEAAJPEAI@Z
    virtual long get_ID(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Label@CUserInfoDialogCommand@@UEAAJPEAPEAG@Z
    virtual long get_Label(unsigned short * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CUserInfoDialogCommand@@UEAA@XZ
    virtual ~CUserInfoDialogCommand();
};
