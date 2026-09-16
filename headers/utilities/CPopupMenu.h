#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 51 member(s).
class CPopupMenu {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CPopupMenu@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginShow@CPopupMenu@@QEAAJXZ
    long BeginShow();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CPopupMenu@@QEAA@XZ
    CPopupMenu();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndShow@CPopupMenu@@QEAAXXZ
    void EndShow();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CPopupMenu@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CPopupMenu@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CPopupMenu@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CPopupMenu@@UEAAJPEAUHWND__@@@Z
    virtual long Initialize(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CPopupMenu@@UEAAJPEAUICoreWindow@Core@UI@Windows@@@Z
    virtual long Initialize(::Windows::UI::Core::ICoreWindow *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@CPopupMenu@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@CPopupMenu@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCancel@CPopupMenu@@QEAAJXZ
    long OnCancel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CPopupMenu@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CPopupMenu@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CPopupMenu@@QEAAJXZ
    long RuntimeClassInitialize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInputMode@CPopupMenu@@UEAAJW4PopupMenuInputMode@@@Z
    virtual long SetInputMode(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMenuFlags@CPopupMenu@@UEAAJW4PopupMenuPrivateFlags@@@Z
    virtual long SetMenuFlags(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMenuStyle@CPopupMenu@@UEAAJW4PopupMenuMenuStyle@@@Z
    virtual long SetMenuStyle(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMessageWindow@CPopupMenu@@QEAA_NPEAUHWND__@@@Z
    bool SetMessageWindow(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowAsync@CPopupMenu@@UEAAJUPoint@Foundation@Windows@@PEAPEAU?$IAsyncOperation@PEAUIUICommand@Popups@UI@Windows@@@34@@Z
    virtual long ShowAsync(WindissectOpaque, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowAsyncWithRect@CPopupMenu@@UEAAJURect@Foundation@Windows@@PEAPEAU?$IAsyncOperation@PEAUIUICommand@Popups@UI@Windows@@@34@@Z
    virtual long ShowAsyncWithRect(WindissectOpaque, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowAsyncWithRectAndPlacement@CPopupMenu@@UEAAJURect@Foundation@Windows@@W4Placement@Popups@UI@4@PEAPEAU?$IAsyncOperation@PEAUIUICommand@Popups@UI@Windows@@@34@@Z
    virtual long ShowAsyncWithRectAndPlacement(WindissectOpaque, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Commands@CPopupMenu@@UEAAJPEAPEAU?$IVector@PEAUIUICommand@Popups@UI@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long get_Commands(WindissectOpaque * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_CleanupMessageHook@CPopupMenu@@CAXXZ
    static void s_CleanupMessageHook();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_GetMessageHookProc@CPopupMenu@@CA_JH_K_J@Z
    static int64_t s_GetMessageHookProc(int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_GetRootParentWindowForSubclass@CPopupMenu@@CAPEAUHWND__@@PEAU2@@Z
    static HWND__* s_GetRootParentWindowForSubclass(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_InvokeCallback@CPopupMenu@@CAJPEAUIUICommand@Popups@UI@Windows@@@Z
    static long s_InvokeCallback(::Windows::UI::Popups::IUICommand *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_OwnerWindowSubclassProc@CPopupMenu@@CA_JPEAUHWND__@@I_K_J11@Z
    static int64_t s_OwnerWindowSubclassProc(HWND__*, unsigned int, uint64_t, int64_t, uint64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_ProcessMessage@CPopupMenu@@CA_JH_K_J@Z
    static int64_t s_ProcessMessage(int, uint64_t, int64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPopupMenu@@EEAA@XZ
    virtual ~CPopupMenu();
};
