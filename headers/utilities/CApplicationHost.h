#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 9 member(s).
namespace Windows::Internal {
class CApplicationHost {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CApplicationHost@Internal@Windows@@QEAA@PEAUHWND__@@PEAVElement@DirectUI@@@Z
    CApplicationHost(HWND__*, ::DirectUI::Element *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBackgroundColor@CApplicationHost@Internal@Windows@@UEAAJPEAK@Z
    virtual long GetBackgroundColor(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForegroundColor@CApplicationHost@Internal@Windows@@UEAAJPEAK@Z
    virtual long GetForegroundColor(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasFocusIO@CApplicationHost@Internal@Windows@@UEAAJXZ
    virtual long HasFocusIO();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TranslateAcceleratorIO@CApplicationHost@Internal@Windows@@UEAAJPEAUtagMSG@@@Z
    virtual long TranslateAcceleratorIO(tagMSG *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UIActivateIO@CApplicationHost@Internal@Windows@@UEAAJHPEAUtagMSG@@@Z
    virtual long UIActivateIO(int, tagMSG *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CApplicationHost@Internal@Windows@@UEAA@XZ
    virtual ~CApplicationHost();
};
} // namespace Windows::Internal
