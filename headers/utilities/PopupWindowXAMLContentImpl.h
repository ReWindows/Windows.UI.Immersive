#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 5 member(s).
namespace Windows::Internal {
class PopupWindowXAMLContentImpl {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContent@PopupWindowXAMLContentImpl@Internal@Windows@@UEAAJPEAPEAUIPopupXamlContentProvider@@@Z
    virtual long GetContent(IPopupXamlContentProvider * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PopupWindowXAMLContentImpl@Internal@Windows@@QEAA@PEAUIUnknown@@@Z
    PopupWindowXAMLContentImpl(IUnknown *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PopupWindowXAMLContentImpl@Internal@Windows@@UEAA@XZ
    virtual ~PopupWindowXAMLContentImpl();
};
} // namespace Windows::Internal
