#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 37 member(s).
class CLightDismissClientStore {
public:
    class CLIENT_INFO;
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CLightDismissClientStore@@QEAA@XZ
    CLightDismissClientStore();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DismissAll@CLightDismissClientStore@@UEAAJXZ
    virtual long DismissAll();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableLightDismiss@CLightDismissClientStore@@UEAAJH@Z
    virtual long EnableLightDismiss(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableVisualization@CLightDismissClientStore@@UEAAJH@Z
    virtual long EnableVisualization(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@CLightDismissClientStore@@UEAAJULIGHT_DISMISS_POLICY@@PEAUILightDismissNotification@@PEAK@Z
    virtual long Register(LIGHT_DISMISS_POLICY, ILightDismissNotification *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unregister@CLightDismissClientStore@@UEAAJK@Z
    virtual long Unregister(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePolicy@CLightDismissClientStore@@UEAAJKULIGHT_DISMISS_POLICY@@@Z
    virtual long UpdatePolicy(unsigned long, LIGHT_DISMISS_POLICY);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CLightDismissClientStore@@UEAA@XZ
    virtual ~CLightDismissClientStore();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DismissAllClientsWithFlags@CLightDismissClientStore@@IEAAJKK@Z
    long DismissAllClientsWithFlags(unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DismissAllInactiveClients@CLightDismissClientStore@@IEAAJPEAUHWND__@@@Z
    long DismissAllInactiveClients(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureTabletModeSubscription@CLightDismissClientStore@@IEAAJXZ
    long EnsureTabletModeSubscription();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowPosChanging@CLightDismissClientStore@@MEAA_NPEAUtagWINDOWPOS@@@Z
    virtual bool OnWindowPosChanging(tagWINDOWPOS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShutdownProvider@CLightDismissClientStore@@IEAAXXZ
    void ShutdownProvider();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CleanOutWaits@CLightDismissClientStore@@AEAAXXZ
    void _CleanOutWaits();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ClientInfoFromCookie@CLightDismissClientStore@@AEBAPEAUCLIENT_INFO@1@K@Z
    WindissectOpaque * _ClientInfoFromCookie(unsigned long) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ClosestNodeForHWND@CLightDismissClientStore@@AEBAPEAUCLIENT_INFO@1@PEAUHWND__@@@Z
    WindissectOpaque * _ClosestNodeForHWND(HWND__*) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateIMEWinEventHook@CLightDismissClientStore@@AEAAJXZ
    long _CreateIMEWinEventHook();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateMessageWindow@CLightDismissClientStore@@AEAAJXZ
    long _CreateMessageWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateOverlay@CLightDismissClientStore@@AEAAJXZ
    long _CreateOverlay();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DestroyIMEWinEventHook@CLightDismissClientStore@@AEAAXXZ
    void _DestroyIMEWinEventHook();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DismissClients@CLightDismissClientStore@@AEAAJXZ
    long _DismissClients();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FilterChain@CLightDismissClientStore@@AEAAXPEAUCLIENT_INFO@1@KK@Z
    void _FilterChain(WindissectOpaque *, unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetMostCascaded@CLightDismissClientStore@@AEBAPEAUCLIENT_INFO@1@XZ
    WindissectOpaque * _GetMostCascaded() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetNodeInChain@CLightDismissClientStore@@AEBAPEAUCLIENT_INFO@1@PEAU21@PEAUHWND__@@@Z
    WindissectOpaque * _GetNodeInChain(WindissectOpaque *, HWND__*) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetScreenRegionForWindow@CLightDismissClientStore@@AEBAPEAUHRGN__@@PEAUHWND__@@@Z
    HRGN__* _GetScreenRegionForWindow(HWND__*) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleDialog@CLightDismissClientStore@@AEAAXPEAUHWND__@@@Z
    void _HandleDialog(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleNewFocusLostObject@CLightDismissClientStore@@AEAAXPEAUCLIENT_INFO@1@@Z
    void _HandleNewFocusLostObject(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnMouseUp@CLightDismissClientStore@@AEAAXHHI@Z
    void _OnMouseUp(int, int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnWaitEnded@CLightDismissClientStore@@AEAAXK@Z
    void _OnWaitEnded(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RemoveChain@CLightDismissClientStore@@AEAAJPEAUCLIENT_INFO@1@@Z
    long _RemoveChain(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateOverlayRegion@CLightDismissClientStore@@AEAAJXZ
    long _UpdateOverlayRegion();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateOverlayVisibility@CLightDismissClientStore@@AEAAXXZ
    void _UpdateOverlayVisibility();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdatePolicyInternal@CLightDismissClientStore@@AEAAJKULIGHT_DISMISS_POLICY@@W4UpdatePolicySource@1@@Z
    long _UpdatePolicyInternal(unsigned long, LIGHT_DISMISS_POLICY, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_MessageProc@CLightDismissClientStore@@CA_JPEAUHWND__@@I_K_J@Z
    static int64_t s_MessageProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_OverlayProc@CLightDismissClientStore@@CA_JPEAUHWND__@@I_K_J@Z
    static int64_t s_OverlayProc(HWND__*, unsigned int, uint64_t, int64_t);
};
