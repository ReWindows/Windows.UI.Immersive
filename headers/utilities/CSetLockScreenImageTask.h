#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 22 member(s).
class CSetLockScreenImageTask {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSetLockScreenImageTask@@QEAA@XZ
    CSetLockScreenImageTask();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTask@CSetLockScreenImageTask@@QEAAJPEAUIRandomAccessStream@Streams@Storage@Windows@@PEBGPEAPEAUIAsyncAction@Foundation@5@@Z
    long CreateTask(::Windows::Storage::Streams::IRandomAccessStream *, unsigned short const *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTask@CSetLockScreenImageTask@@QEAAJPEAUIStorageFile@Storage@Windows@@PEBGHPEAPEAUIAsyncAction@Foundation@4@@Z
    long CreateTask(::Windows::Storage::IStorageFile *, unsigned short const *, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetHistory@CSetLockScreenImageTask@@QEAAJXZ
    long ResetHistory();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetImageStreamFromRoamingHandler@CSetLockScreenImageTask@@QEAAJAEBU_GUID@@PEAUIStream@@PEBG@Z
    long SetImageStreamFromRoamingHandler(_GUID const &, IStream *, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLockScreenCreative@CSetLockScreenImageTask@@QEAAJPEBULOCK_SCREEN_CREATIVE@@@Z
    long SetLockScreenCreative(LOCK_SCREEN_CREATIVE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_SendChangeNotification@CSetLockScreenImageTask@@SAXXZ
    static void s_SendChangeNotification();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSetLockScreenImageTask@@UEAA@XZ
    virtual ~CSetLockScreenImageTask();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateNewEntry@CSetLockScreenImageTask@@AEAAJPEAUIShellItem@@0PEBGPEBU_GUID@@PEAUIImageSanitizationBroker@@_NPEAPEAVCLockScreenHistoryEntry@CLockScreenHistory@@@Z
    long _CreateNewEntry(IShellItem *, IShellItem *, unsigned short const *, _GUID const *, IImageSanitizationBroker *, bool, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DisableRotatingLockScreenInRegistry@CSetLockScreenImageTask@@AEAAJXZ
    long _DisableRotatingLockScreenInRegistry();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureCreativeEntryRemovedFromHistory@CSetLockScreenImageTask@@AEAAJXZ
    long _EnsureCreativeEntryRemovedFromHistory();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InsertNewCustomOrCreativeEntry@CSetLockScreenImageTask@@AEAAJPEAPEAVCLockScreenHistoryEntry@CLockScreenHistory@@_N1@Z
    long _InsertNewCustomOrCreativeEntry(WindissectOpaque * *, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PrefetchCurrentImageFromThumbnailCache@CSetLockScreenImageTask@@AEAAXXZ
    void _PrefetchCurrentImageFromThumbnailCache();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetFile@CSetLockScreenImageTask@@AEAAJPEAUIShellItem@@0PEBGPEBU_GUID@@_N@Z
    long _SetFile(IShellItem *, IShellItem *, unsigned short const *, _GUID const *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_GetAvailableCustomHistoryEntry@CSetLockScreenImageTask@@CAGPEBGPEAX@Z
    static unsigned short s_GetAvailableCustomHistoryEntry(unsigned short const *, void *);
};
