#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 50 member(s).
namespace Windows::Internal {
class CWindowDialog {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CWindowDialog@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CWindowDialog@Internal@Windows@@QEAA@XZ
    CWindowDialog();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CWindowDialog@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CWindowDialog@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CWindowDialog@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CWindowDialog@Internal@Windows@@UEAAJPEAUHWND__@@@Z
    virtual long Initialize(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CWindowDialog@Internal@Windows@@UEAAJPEAUICoreWindow@Core@UI@3@@Z
    virtual long Initialize(::Windows::UI::Core::ICoreWindow *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@CWindowDialog@Internal@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@CWindowDialog@Internal@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CWindowDialog@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CWindowDialog@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowAsync@CWindowDialog@Internal@Windows@@UEAAJPEAPEAU?$IAsyncOperation@PEAUIUICommand@Popups@UI@Windows@@@Foundation@3@@Z
    virtual long ShowAsync(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Showing@CWindowDialog@Internal@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVCoreWindow@Core@UI@Windows@@PEAVCoreWindowPopupShowingEventArgs@234@@Foundation@3@PEAUEventRegistrationToken@@@Z
    virtual long add_Showing(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BackButtonCommand@CWindowDialog@Internal@Windows@@UEAAJPEAPEAUIUICommandInvokedHandler@Popups@UI@3@@Z
    virtual long get_BackButtonCommand(::Windows::UI::Popups::IUICommandInvokedHandler * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CancelCommandIndex@CWindowDialog@Internal@Windows@@UEAAJPEAI@Z
    virtual long get_CancelCommandIndex(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Commands@CWindowDialog@Internal@Windows@@UEAAJPEAPEAU?$IVector@PEAUIUICommand@Popups@UI@Windows@@@Collections@Foundation@3@@Z
    virtual long get_Commands(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DefaultCommandIndex@CWindowDialog@Internal@Windows@@UEAAJPEAI@Z
    virtual long get_DefaultCommandIndex(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsInteractionDelayed@CWindowDialog@Internal@Windows@@UEAAJPEAH@Z
    virtual long get_IsInteractionDelayed(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MaxSize@CWindowDialog@Internal@Windows@@UEAAJPEAUSize@Foundation@3@@Z
    virtual long get_MaxSize(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MinSize@CWindowDialog@Internal@Windows@@UEAAJPEAUSize@Foundation@3@@Z
    virtual long get_MinSize(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Title@CWindowDialog@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Title(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_BackButtonCommand@CWindowDialog@Internal@Windows@@UEAAJPEAUIUICommandInvokedHandler@Popups@UI@3@@Z
    virtual long put_BackButtonCommand(::Windows::UI::Popups::IUICommandInvokedHandler *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_CancelCommandIndex@CWindowDialog@Internal@Windows@@UEAAJI@Z
    virtual long put_CancelCommandIndex(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_DefaultCommandIndex@CWindowDialog@Internal@Windows@@UEAAJI@Z
    virtual long put_DefaultCommandIndex(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsInteractionDelayed@CWindowDialog@Internal@Windows@@UEAAJH@Z
    virtual long put_IsInteractionDelayed(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Title@CWindowDialog@Internal@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_Title(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Showing@CWindowDialog@Internal@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Showing(EventRegistrationToken);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreatePopup@CWindowDialog@Internal@Windows@@EEAAJPEAUHWND__@@HPEAPEAUIPopupWindow@@@Z
    virtual long _CreatePopup(HWND__*, int, IPopupWindow * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetMaximumCommandCount@CWindowDialog@Internal@Windows@@EEBAIXZ
    virtual unsigned int _GetMaximumCommandCount() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetMinimumCommandCount@CWindowDialog@Internal@Windows@@EEBAIXZ
    virtual unsigned int _GetMinimumCommandCount() const;
};
} // namespace Windows::Internal
