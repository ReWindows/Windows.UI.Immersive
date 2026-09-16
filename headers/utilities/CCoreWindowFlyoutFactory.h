#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 5 member(s).
namespace Windows::Internal {
class CCoreWindowFlyoutFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@CCoreWindowFlyoutFactory@Internal@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CCoreWindowFlyoutFactory@Internal@Windows@@UEAAJUPoint@Foundation@3@PEAPEAUICoreWindowFlyout@Core@UI@3@@Z
    virtual long Create(WindissectOpaque, ::Windows::UI::Core::ICoreWindowFlyout * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateWithTitle@CCoreWindowFlyoutFactory@Internal@Windows@@UEAAJUPoint@Foundation@3@PEAUHSTRING__@@PEAPEAUICoreWindowFlyout@Core@UI@3@@Z
    virtual long CreateWithTitle(WindissectOpaque, HSTRING__*, ::Windows::UI::Core::ICoreWindowFlyout * *);
};
} // namespace Windows::Internal
