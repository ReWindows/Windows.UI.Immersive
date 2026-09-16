#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 31 member(s).
class CLockScreenHistory {
public:
    class CLockScreenHistoryEntry;
    class CSynchronizedOperation;
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSidType@CLockScreenHistory@@SAJPEAXPEAW4_SID_NAME_USE@@@Z
    static long GetSidType(void *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PathIsSubFolder@CLockScreenHistory@@SA_NPEBG0@Z
    static bool PathIsSubFolder(unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_GetCacheFilename@CLockScreenHistory@@SAJGPEAPEAG@Z
    static long s_GetCacheFilename(unsigned short, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_GetCacheFilenameAtResolution@CLockScreenHistory@@SAJPEBGII_NPEAPEAG@Z
    static long s_GetCacheFilenameAtResolution(unsigned short const *, unsigned int, unsigned int, bool, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_GetCachePreviewFilenameAndEnsureLockScreenPreviewStore@CLockScreenHistory@@SAJPEBGGPEAPEAG@Z
    static long s_GetCachePreviewFilenameAndEnsureLockScreenPreviewStore(unsigned short const *, unsigned short, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_GetCallerDisplayString@CLockScreenHistory@@SAJPEBGPEAPEAG@Z
    static long s_GetCallerDisplayString(unsigned short const *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_GetCreativeLockScreenPath@CLockScreenHistory@@SAJPEBGPEAPEAG11PEA_N@Z
    static long s_GetCreativeLockScreenPath(unsigned short const *, unsigned short * *, unsigned short * *, unsigned short * *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_GetHistoryEntryAt@CLockScreenHistory@@SAGIPEAX@Z
    static unsigned short s_GetHistoryEntryAt(unsigned int, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_GetLocalSystemUserSid@CLockScreenHistory@@SAJPEAPEAX@Z
    static long s_GetLocalSystemUserSid(void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_GetLockScreenBackupIndex@CLockScreenHistory@@SAJPEAXPEAG@Z
    static long s_GetLockScreenBackupIndex(void *, unsigned short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_GetSecureCustomLockScreenPath@CLockScreenHistory@@SAJPEAXG_N1PEAPEAG@Z
    static long s_GetSecureCustomLockScreenPath(void *, unsigned short, bool, bool, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_GetSecureInboxLockScreenPath@CLockScreenHistory@@SAJGPEAPEAG@Z
    static long s_GetSecureInboxLockScreenPath(unsigned short, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_GetSecureLockScreenDirectory@CLockScreenHistory@@SAJPEAXG_NPEAGI@Z
    static long s_GetSecureLockScreenDirectory(void *, unsigned short, bool, unsigned short *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_HasUserCustomizedImage@CLockScreenHistory@@SA_NPEAX@Z
    static bool s_HasUserCustomizedImage(void *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CLockScreenHistory@@QEAA@XZ
    ~CLockScreenHistory();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateAndInitEntry@CLockScreenHistory@@IEAAJGPEAPEAVCLockScreenHistoryEntry@1@@Z
    long _CreateAndInitEntry(unsigned short, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateKey@CLockScreenHistory@@IEAAJPEAPEAUHKEY__@@@Z
    long _CreateKey(HKEY__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureCurrentUserSid@CLockScreenHistory@@IEAAJXZ
    long _EnsureCurrentUserSid();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureKnownFolderPath@CLockScreenHistory@@IEAAJXZ
    long _EnsureKnownFolderPath();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureSanitizationBroker@CLockScreenHistory@@IEAAJXZ
    long _EnsureSanitizationBroker();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ExpireEntry@CLockScreenHistory@@IEAAXPEAVCLockScreenHistoryEntry@1@@Z
    void _ExpireEntry(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetCacheFormat@CLockScreenHistory@@IEAAXDPEAW4CacheFormat@@@Z
    void _GetCacheFormat(char, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetEntry@CLockScreenHistory@@IEAAJGPEAPEAVCLockScreenHistoryEntry@1@@Z
    long _GetEntry(unsigned short, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetPreviewImage@CLockScreenHistory@@IEAAJGII_NPEAPEAUHBITMAP__@@@Z
    long _GetPreviewImage(unsigned short, unsigned int, unsigned int, bool, HBITMAP__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetPrimaryImageSize@CLockScreenHistory@@IEAAJPEAI0@Z
    long _GetPrimaryImageSize(unsigned int *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitAndEnsureGPEntry@CLockScreenHistory@@IEAAJPEAVCLockScreenHistoryEntry@1@G@Z
    long _InitAndEnsureGPEntry(WindissectOpaque *, unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitOrUpdateGPImages@CLockScreenHistory@@IEAAJPEBG@Z
    long _InitOrUpdateGPImages(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OpenKey@CLockScreenHistory@@IEAAJKPEAPEAUHKEY__@@@Z
    long _OpenKey(unsigned long, HKEY__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_s_CreatePreview@CLockScreenHistory@@KAPEAUHBITMAP__@@PEAUIShellItem@@II_NII@Z
    static HBITMAP__* _s_CreatePreview(IShellItem *, unsigned int, unsigned int, bool, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_s_DrawImage@CLockScreenHistory@@KAXPEAUHDC__@@II_NPEAUHBITMAP__@@@Z
    static void _s_DrawImage(HDC__*, unsigned int, unsigned int, bool, HBITMAP__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_s_GetLockScreenHistoryOrderInternal@CLockScreenHistory@@KAJPEAX_NPEAPEAG@Z
    static long _s_GetLockScreenHistoryOrderInternal(void *, bool, unsigned short * *);
};
