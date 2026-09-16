#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 64 member(s).
class CLockScreen {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CLockScreen@@QEAA@XZ
    CLockScreen();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHistoryEntryAt@CLockScreen@@UEAAJIPEAPEAUIShellItem@@0PEAPEAG@Z
    virtual long GetHistoryEntryAt(unsigned int, IShellItem * *, IShellItem * *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHistorySize@CLockScreen@@UEAAJPEAI@Z
    virtual long GetHistorySize(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHistoryThumbnailAt@CLockScreen@@UEAAJIIIHPEAPEAUHBITMAP__@@@Z
    virtual long GetHistoryThumbnailAt(unsigned int, unsigned int, unsigned int, int, HBITMAP__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImageForUser@CLockScreen@@UEAAJPEBGIIW4LOCK_SCREEN_IMAGE_OPTIONS@@PEAPEAUHBITMAP__@@@Z
    virtual long GetImageForUser(unsigned short const *, unsigned int, unsigned int, int, HBITMAP__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImageRandomAccessMarshallableStreamForUser@CLockScreen@@UEAAJPEBGIIW4LOCK_SCREEN_IMAGE_OPTIONS@@PEAPEAUIUnknown@@@Z
    virtual long GetImageRandomAccessMarshallableStreamForUser(unsigned short const *, unsigned int, unsigned int, int, IUnknown * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImageRandomAccessStreamForUser@CLockScreen@@UEAAJPEBGIIW4LOCK_SCREEN_IMAGE_OPTIONS@@AEBU_GUID@@PEAPEAX@Z
    virtual long GetImageRandomAccessStreamForUser(unsigned short const *, unsigned int, unsigned int, int, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImageStream@CLockScreen@@UEAAJPEAPEAUIRandomAccessStream@Streams@Storage@Windows@@@Z
    virtual long GetImageStream(::Windows::Storage::Streams::IRandomAccessStream * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImageStreamForRoamingHandler@CLockScreen@@UEAAJPEAU_GUID@@PEAPEAUIStream@@@Z
    virtual long GetImageStreamForRoamingHandler(_GUID *, IStream * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLockScreenCreativeForUser@CLockScreen@@UEAAJPEBGPEAULOCK_SCREEN_CREATIVE@@@Z
    virtual long GetLockScreenCreativeForUser(unsigned short const *, LOCK_SCREEN_CREATIVE *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPortraitImageStream@CLockScreen@@UEAAJPEAPEAUIStream@@@Z
    virtual long GetPortraitImageStream(IStream * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPrimaryImageSize@CLockScreen@@UEAAJPEAI0@Z
    virtual long GetPrimaryImageSize(unsigned int *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRotationEnabled@CLockScreen@@UEAAJPEAH@Z
    virtual long GetRotationEnabled(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CLockScreen@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CLockScreen@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasUserCustomizedImage@CLockScreen@@UEAAJPEAH@Z
    virtual long HasUserCustomizedImage(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@CLockScreen@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@CLockScreen@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestSetImageFeedAsync@CLockScreen@@UEAAJPEAUIUriRuntimeClass@Foundation@Windows@@PEAPEAU?$IAsyncOperation@W4SetImageFeedResult@UserProfile@System@Windows@@@34@@Z
    virtual long RequestSetImageFeedAsync(WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetHistory@CLockScreen@@UEAAJXZ
    virtual long ResetHistory();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RestoreCacheImageOrReplaceWithDefaultImage@CLockScreen@@UEAAJXZ
    virtual long RestoreCacheImageOrReplaceWithDefaultImage();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SQMCurrentLockScreen@CLockScreen@@UEAAXXZ
    virtual void SQMCurrentLockScreen();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHistoryLocationHint@CLockScreen@@UEAAJH@Z
    virtual long SetHistoryLocationHint(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetImageFileAsync@CLockScreen@@UEAAJPEAUIStorageFile@Storage@Windows@@PEAPEAUIAsyncAction@Foundation@4@@Z
    virtual long SetImageFileAsync(::Windows::Storage::IStorageFile *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetImageFileAsyncWithCallerDetails@CLockScreen@@UEAAJ_KPEAUIStorageFile@Storage@Windows@@PEAPEAUIAsyncAction@Foundation@4@@Z
    virtual long SetImageFileAsyncWithCallerDetails(uint64_t, ::Windows::Storage::IStorageFile *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetImageStreamAsync@CLockScreen@@UEAAJPEAUIRandomAccessStream@Streams@Storage@Windows@@PEAPEAUIAsyncAction@Foundation@5@@Z
    virtual long SetImageStreamAsync(::Windows::Storage::Streams::IRandomAccessStream *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetImageStreamFromRoamingHandler@CLockScreen@@UEAAJAEBU_GUID@@PEAUIStream@@@Z
    virtual long SetImageStreamFromRoamingHandler(_GUID const &, IStream *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLockScreenCreative@CLockScreen@@UEAAJPEBULOCK_SCREEN_CREATIVE@@@Z
    virtual long SetLockScreenCreative(LOCK_SCREEN_CREATIVE const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRotationEnabled@CLockScreen@@UEAAJH@Z
    virtual long SetRotationEnabled(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowErrorDialog@CLockScreen@@UEAAJPEAUHWND__@@@Z
    virtual long ShowErrorDialog(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryRemoveImageFeed@CLockScreen@@UEAAJPEAE@Z
    virtual long TryRemoveImageFeed(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetImageForUser@CLockScreen@@QEAAJPEBGIIW4LOCK_SCREEN_IMAGE_OPTIONS@@PEAPEAUHBITMAP__@@PEAPEAUIRandomAccessStream@Streams@Storage@Windows@@@Z
    long _GetImageForUser(unsigned short const *, unsigned int, unsigned int, int, HBITMAP__* *, ::Windows::Storage::Streams::IRandomAccessStream * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetImageFileAsyncWithCallerDetails@CLockScreen@@QEAAJPEAXPEAUIStorageFile@Storage@Windows@@PEAPEAUIAsyncAction@Foundation@4@@Z
    long _SetImageFileAsyncWithCallerDetails(void *, ::Windows::Storage::IStorageFile *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_OriginalImageFile@CLockScreen@@UEAAJPEAPEAUIUriRuntimeClass@Foundation@Windows@@@Z
    virtual long get_OriginalImageFile(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_GetHistoryThumbnail@CLockScreen@@SAJGII_NPEAPEAUHBITMAP__@@0PEBG@Z
    static long s_GetHistoryThumbnail(unsigned short, unsigned int, unsigned int, bool, HBITMAP__* *, bool, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_IsSystemProcess@CLockScreen@@SA_NXZ
    static bool s_IsSystemProcess();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CLockScreen@@UEAA@XZ
    virtual ~CLockScreen();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_s_CollectCallerDetails@CLockScreen@@KAJPEAXPEAPEAG@Z
    static long _s_CollectCallerDetails(void *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_s_CopyBitmap@CLockScreen@@KAPEAUHBITMAP__@@PEAU2@@Z
    static HBITMAP__* _s_CopyBitmap(HBITMAP__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_s_DimImage@CLockScreen@@KAJPEAUIWICBitmap@@I@Z
    static long _s_DimImage(IWICBitmap *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_s_FlipBitmapSourceIfNecessary@CLockScreen@@KAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@_NPEAPEAU3@@Z
    static long _s_FlipBitmapSourceIfNecessary(IWICImagingFactory *, IWICBitmapSource *, bool, IWICBitmapSource * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_s_IsAppContainerProcess@CLockScreen@@KA_NXZ
    static bool _s_IsAppContainerProcess();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_s_IsOverlaysEnabled@CLockScreen@@KA_NXZ
    static bool _s_IsOverlaysEnabled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_s_IsSpecificLockScreenLogonImageForced@CLockScreen@@KA_NPEAPEAG@Z
    static bool _s_IsSpecificLockScreenLogonImageForced(unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_s_IsSpotlight@CLockScreen@@KA_NXZ
    static bool _s_IsSpotlight();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_s_IsSpotlightEnabled@CLockScreen@@KA_NPEBG@Z
    static bool _s_IsSpotlightEnabled(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_s_IsSpotlightExpired@CLockScreen@@KA_NXZ
    static bool _s_IsSpotlightExpired();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_s_LoadAndScaleBitmapSource@CLockScreen@@KAJPEAUIWICImagingFactory@@PEBGII_NPEAPEAUIWICBitmapSource@@PEA_N@Z
    static long _s_LoadAndScaleBitmapSource(IWICImagingFactory *, unsigned short const *, unsigned int, unsigned int, bool, IWICBitmapSource * *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_s_SaveImageWithWICOnBackgroundThread@CLockScreen@@KAJPEBGPEAUHBITMAP__@@DII_NW4CacheFormat@@@Z
    static long _s_SaveImageWithWICOnBackgroundThread(unsigned short const *, HBITMAP__*, char, unsigned int, unsigned int, bool, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_s_SetSpotlightImageCached@CLockScreen@@KAX_NPEBG@Z
    static void _s_SetSpotlightImageCached(bool, unsigned short const *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCustomImageCacheMissing@CLockScreen@@AEAA_NPEAXG@Z
    bool IsCustomImageCacheMissing(void *, unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RetrieveCacheInfoFromRegistry@CLockScreen@@AEAAJGPEAPEAUIShellItem@@PEAGI@Z
    long RetrieveCacheInfoFromRegistry(unsigned short, IShellItem * *, unsigned short *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryRestoreCustomImage@CLockScreen@@AEAAJXZ
    long TryRestoreCustomImage();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RemoveCreativeHistoryEntryForUser@CLockScreen@@AEAAJPEAX@Z
    long _RemoveCreativeHistoryEntryForUser(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_RetrieveLastModifiedTimeFromShellItem@CLockScreen@@CAJPEAUIShellItem@@PEAU_FILETIME@@@Z
    static long s_RetrieveLastModifiedTimeFromShellItem(IShellItem *, _FILETIME *);
};
