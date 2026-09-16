#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 47 member(s).
namespace Windows::Internal {
class CWindowFlyout {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CWindowFlyout@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CWindowFlyout@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CWindowFlyout@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CWindowFlyout@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CWindowFlyout@Internal@Windows@@UEAAJPEAUHWND__@@@Z
    virtual long Initialize(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CWindowFlyout@Internal@Windows@@UEAAJPEAUICoreWindow@Core@UI@3@@Z
    virtual long Initialize(::Windows::UI::Core::ICoreWindow *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@CWindowFlyout@Internal@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@CWindowFlyout@Internal@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CWindowFlyout@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CWindowFlyout@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowAsync@CWindowFlyout@Internal@Windows@@UEAAJPEAPEAU?$IAsyncOperation@PEAUIUICommand@Popups@UI@Windows@@@Foundation@3@@Z
    virtual long ShowAsync(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Showing@CWindowFlyout@Internal@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVCoreWindow@Core@UI@Windows@@PEAVCoreWindowPopupShowingEventArgs@234@@Foundation@3@PEAUEventRegistrationToken@@@Z
    virtual long add_Showing(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BackButtonCommand@CWindowFlyout@Internal@Windows@@UEAAJPEAPEAUIUICommandInvokedHandler@Popups@UI@3@@Z
    virtual long get_BackButtonCommand(::Windows::UI::Popups::IUICommandInvokedHandler * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Commands@CWindowFlyout@Internal@Windows@@UEAAJPEAPEAU?$IVector@PEAUIUICommand@Popups@UI@Windows@@@Collections@Foundation@3@@Z
    virtual long get_Commands(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DefaultCommandIndex@CWindowFlyout@Internal@Windows@@UEAAJPEAI@Z
    virtual long get_DefaultCommandIndex(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsInteractionDelayed@CWindowFlyout@Internal@Windows@@UEAAJPEAH@Z
    virtual long get_IsInteractionDelayed(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MaxSize@CWindowFlyout@Internal@Windows@@UEAAJPEAUSize@Foundation@3@@Z
    virtual long get_MaxSize(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MinSize@CWindowFlyout@Internal@Windows@@UEAAJPEAUSize@Foundation@3@@Z
    virtual long get_MinSize(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Title@CWindowFlyout@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Title(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_BackButtonCommand@CWindowFlyout@Internal@Windows@@UEAAJPEAUIUICommandInvokedHandler@Popups@UI@3@@Z
    virtual long put_BackButtonCommand(::Windows::UI::Popups::IUICommandInvokedHandler *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_DefaultCommandIndex@CWindowFlyout@Internal@Windows@@UEAAJI@Z
    virtual long put_DefaultCommandIndex(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsInteractionDelayed@CWindowFlyout@Internal@Windows@@UEAAJH@Z
    virtual long put_IsInteractionDelayed(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Title@CWindowFlyout@Internal@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_Title(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Showing@CWindowFlyout@Internal@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Showing(EventRegistrationToken);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreatePopup@CWindowFlyout@Internal@Windows@@EEAAJPEAUHWND__@@HPEAPEAUIPopupWindow@@@Z
    virtual long _CreatePopup(HWND__*, int, IPopupWindow * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetMaximumCommandCount@CWindowFlyout@Internal@Windows@@EEBAIXZ
    virtual unsigned int _GetMaximumCommandCount() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetMinimumCommandCount@CWindowFlyout@Internal@Windows@@EEBAIXZ
    virtual unsigned int _GetMinimumCommandCount() const;
};
} // namespace Windows::Internal
