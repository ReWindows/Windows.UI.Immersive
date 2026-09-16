#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 30 member(s).
namespace CLockScreenHistory {
class CLockScreenHistoryEntry {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CLockScreenHistoryEntry@CLockScreenHistory@@QEAA@XZ
    CLockScreenHistoryEntry();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearKey@CLockScreenHistoryEntry@CLockScreenHistory@@QEAAXPEAUHKEY__@@@Z
    void ClearKey(HKEY__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteCacheFile@CLockScreenHistoryEntry@CLockScreenHistory@@QEAAXPEAUIImageSanitizationBroker@@PEBG_N@Z
    void DeleteCacheFile(IImageSanitizationBroker *, unsigned short const *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDetails@CLockScreenHistoryEntry@CLockScreenHistory@@QEAAJPEAPEAG@Z
    long GetDetails(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOriginalFile@CLockScreenHistoryEntry@CLockScreenHistory@@QEAAJPEAPEAUIShellItem@@@Z
    long GetOriginalFile(IShellItem * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOriginalFile@CLockScreenHistoryEntry@CLockScreenHistory@@QEAAJPEAPEAUIUriRuntimeClass@Foundation@Windows@@@Z
    long GetOriginalFile(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStream@CLockScreenHistoryEntry@CLockScreenHistory@@QEAAJPEAPEAUIRandomAccessStream@Streams@Storage@Windows@@@Z
    long GetStream(::Windows::Storage::Streams::IRandomAccessStream * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStream@CLockScreenHistoryEntry@CLockScreenHistory@@QEAAJ_NPEAPEAUIStream@@@Z
    long GetStream(bool, IStream * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CLockScreenHistoryEntry@CLockScreenHistory@@QEAAJG@Z
    long Init(unsigned short);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEqual@CLockScreenHistoryEntry@CLockScreenHistory@@QEAAJPEAUIShellItem@@@Z
    long IsEqual(IShellItem *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFileModifiedTimeDifferentFromGPImage@CLockScreenHistoryEntry@CLockScreenHistory@@QEAA_NPEAXPEAUIShellItem@@@Z
    bool IsFileModifiedTimeDifferentFromGPImage(void *, IShellItem *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFileMoreRecentThanCache@CLockScreenHistoryEntry@CLockScreenHistory@@QEAA_NPEAUIShellItem@@@Z
    bool IsFileMoreRecentThanCache(IShellItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Load@CLockScreenHistoryEntry@CLockScreenHistory@@QEAAJPEAUHKEY__@@_N@Z
    long Load(HKEY__*, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadGPImageModifiedTime@CLockScreenHistoryEntry@CLockScreenHistory@@QEAAJPEAXPEAU_FILETIME@@@Z
    long ReadGPImageModifiedTime(void *, _FILETIME *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SanitizeCustomImageFile@CLockScreenHistoryEntry@CLockScreenHistory@@QEAAJPEAUIShellItem@@PEAUIImageSanitizationBroker@@_N@Z
    long SanitizeCustomImageFile(IShellItem *, IImageSanitizationBroker *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SanitizeCustomImageStream@CLockScreenHistoryEntry@CLockScreenHistory@@QEAAJPEAUIStream@@PEAUIImageSanitizationBroker@@@Z
    long SanitizeCustomImageStream(IStream *, IImageSanitizationBroker *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Save@CLockScreenHistoryEntry@CLockScreenHistory@@QEAAJPEAUHKEY__@@@Z
    long Save(HKEY__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCustomImage@CLockScreenHistoryEntry@CLockScreenHistory@@QEAAJPEAUIRandomAccessStream@Streams@Storage@Windows@@0PEBGAEBU_GUID@@PEAUIImageSanitizationBroker@@@Z
    long SetCustomImage(::Windows::Storage::Streams::IRandomAccessStream *, ::Windows::Storage::Streams::IRandomAccessStream *, unsigned short const *, _GUID const &, IImageSanitizationBroker *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCustomImage@CLockScreenHistoryEntry@CLockScreenHistory@@QEAAJPEAUIShellItem@@0PEBGAEBU_GUID@@PEAUIImageSanitizationBroker@@@Z
    long SetCustomImage(IShellItem *, IShellItem *, unsigned short const *, _GUID const &, IImageSanitizationBroker *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_DoesIndexUseCustomLockScreenPath@CLockScreenHistoryEntry@CLockScreenHistory@@SA_NG@Z
    static bool s_DoesIndexUseCustomLockScreenPath(unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_GetLockScreenPath@CLockScreenHistoryEntry@CLockScreenHistory@@SAJG_NPEAPEAG@Z
    static long s_GetLockScreenPath(unsigned short, bool, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_IsCustomIndex@CLockScreenHistoryEntry@CLockScreenHistory@@SA_NG@Z
    static bool s_IsCustomIndex(unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_IsInboxIndex@CLockScreenHistoryEntry@CLockScreenHistory@@SA_NG@Z
    static bool s_IsInboxIndex(unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_MapIndexToInboxGuid@CLockScreenHistoryEntry@CLockScreenHistory@@SA?AU_GUID@@G@Z
    static _GUID s_MapIndexToInboxGuid(unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_MapIndexToSQMValue@CLockScreenHistoryEntry@CLockScreenHistory@@SAKG@Z
    static unsigned long s_MapIndexToSQMValue(unsigned short);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CLockScreenHistoryEntry@CLockScreenHistory@@QEAA@XZ
    ~CLockScreenHistoryEntry();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CompleteCustomImageAssignment@CLockScreenHistoryEntry@CLockScreenHistory@@AEAAJPEBGAEBU_GUID@@@Z
    long _CompleteCustomImageAssignment(unsigned short const *, _GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitRegValues@CLockScreenHistoryEntry@CLockScreenHistory@@AEAAJG@Z
    long _InitRegValues(unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_WriteImagePropertiesToCache@CLockScreenHistoryEntry@CLockScreenHistory@@AEAAJUtagSIZE@@W4CacheFormat@@PEAUIImageSanitizationBroker@@@Z
    long _WriteImagePropertiesToCache(tagSIZE, int, IImageSanitizationBroker *);
};
} // namespace CLockScreenHistory
