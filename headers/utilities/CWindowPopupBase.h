#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 4 member(s).
namespace Windows::Internal {
class CWindowPopupBase {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CWindowPopupBase@Internal@Windows@@QEAAJPEAUHSTRING__@@@Z
    long RuntimeClassInitialize(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowAsync@CWindowPopupBase@Internal@Windows@@QEAAJPEAPEAU?$IAsyncOperation@PEAUIUICommand@Popups@UI@Windows@@@Foundation@3@@Z
    long ShowAsync(WindissectOpaque * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CWindowPopupBase@Internal@Windows@@QEAA@XZ
    ~CWindowPopupBase();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_BackgroundThread@CWindowPopupBase@Internal@Windows@@IEAAJPEAXPEAUIPopupWindow@@AEBVCMarshaledInterface@@2IIHPEAUHSTRING__@@PEAPEAUIUICommand@Popups@UI@3@@Z
    long _BackgroundThread(void *, IPopupWindow *, CMarshaledInterface const &, CMarshaledInterface const &, unsigned int, unsigned int, int, HSTRING__*, ::Windows::UI::Popups::IUICommand * *);
};
} // namespace Windows::Internal
