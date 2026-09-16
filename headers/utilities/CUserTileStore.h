#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 43 member(s).
class CUserTileStore {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CUserTileStore@@QEAA@XZ
    CUserTileStore();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearHistory@CUserTileStore@@UEAAJXZ
    virtual long ClearHistory();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FixCorruptedStoreIfNeeded@CUserTileStore@@UEAAJXZ
    virtual long FixCorruptedStoreIfNeeded();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDynamicPath@CUserTileStore@@UEAAJPEBGPEAPEAG@Z
    virtual long GetDynamicPath(unsigned short const *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDynamicPathBySize@CUserTileStore@@UEAAJPEBGIPEAPEAG@Z
    virtual long GetDynamicPathBySize(unsigned short const *, unsigned int, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetExtendedErrorInfo@CUserTileStore@@UEAAJPEAPEAGPEAE@Z
    virtual long GetExtendedErrorInfo(unsigned short * *, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetExtraSmallPath@CUserTileStore@@UEAAJPEBGPEAPEAG@Z
    virtual long GetExtraSmallPath(unsigned short const *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLargePath@CUserTileStore@@UEAAJPEBGPEAPEAG@Z
    virtual long GetLargePath(unsigned short const *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLargePicture@CUserTileStore@@UEAAJPEBGPEAPEAUHBITMAP__@@@Z
    virtual long GetLargePicture(unsigned short const *, HBITMAP__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSmallPath@CUserTileStore@@UEAAJPEBGPEAPEAG@Z
    virtual long GetSmallPath(unsigned short const *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSmallPicture@CUserTileStore@@UEAAJPEBGPEAPEAUHBITMAP__@@@Z
    virtual long GetSmallPicture(unsigned short const *, HBITMAP__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUserNameW@CUserTileStore@@UEAAJIPEAPEAG@Z
    virtual long GetUserNameW(unsigned int, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUserNames@CUserTileStore@@UEAAJPEAPEAG0@Z
    virtual long GetUserNames(unsigned short * *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUserTilePathBySize@CUserTileStore@@UEAAJPEBGIPEAPEAG@Z
    virtual long GetUserTilePathBySize(unsigned short const *, unsigned int, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUserTilePathBySizeNoDefault@CUserTileStore@@UEAAJPEBGIPEAPEAG@Z
    virtual long GetUserTilePathBySizeNoDefault(unsigned short const *, unsigned int, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CUserTileStore@@UEAAJPEAUHWND__@@@Z
    virtual long Initialize(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Pause@CUserTileStore@@UEAAJXZ
    virtual long Pause();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetUserTile@CUserTileStore@@UEAAJXZ
    virtual long ResetUserTile();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Resume@CUserTileStore@@UEAAJXZ
    virtual long Resume();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SQMUserTileIsDefault@CUserTileStore@@UEAAXXZ
    virtual void SQMUserTileIsDefault();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SaveUserTileToStream@CUserTileStore@@UEAAJPEAUIStream@@H@Z
    virtual long SaveUserTileToStream(IStream *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetImageForUser@CUserTileStore@@UEAAJPEBGPEAUIStream@@@Z
    virtual long SetImageForUser(unsigned short const *, IStream *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetImages@CUserTileStore@@UEAAJPEAUIStream@@00PEBG@Z
    virtual long SetImages(IStream *, IStream *, IStream *, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUserTileFromStream@CUserTileStore@@UEAAJHPEAUIStream@@@Z
    virtual long SetUserTileFromStream(int, IStream *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowErrorDialog@CUserTileStore@@UEAAJJPEBG@Z
    virtual long ShowErrorDialog(long, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Start@CUserTileStore@@UEAAJPEAUIUnknown@@PEAG@Z
    virtual long Start(IUnknown *, unsigned short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@CUserTileStore@@UEAAJPEAJ@Z
    virtual long Stop(long *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateUserTileFromUserManager@CUserTileStore@@AEAAJXZ
    long UpdateUserTileFromUserManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetADCachedUserName@CUserTileStore@@AEAAJPEBGPEAPEAG@Z
    long _GetADCachedUserName(unsigned short const *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetInternetPrincipalName@CUserTileStore@@AEAAJPEAPEAG@Z
    long _GetInternetPrincipalName(unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetInternetPrincipalNameFromUserToken@CUserTileStore@@AEAAJPEAXPEAPEAG@Z
    long _GetInternetPrincipalNameFromUserToken(void *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetLDAPValue@CUserTileStore@@AEAAJPEBUldap@@PEBUldapmsg@@PEBGPEAPEAG@Z
    long _GetLDAPValue(ldap const *, ldapmsg const *, unsigned short const *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetLocalAccountDisplayName@CUserTileStore@@AEAAJPEAPEAG@Z
    long _GetLocalAccountDisplayName(unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetTileBitmap@CUserTileStore@@AEAAJW4USER_TILE_TYPE@@PEBGPEAPEAUHBITMAP__@@@Z
    long _GetTileBitmap(int, unsigned short const *, HBITMAP__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetUserNameExHelper@CUserTileStore@@AEAAJW4EXTENDED_NAME_FORMAT@@PEAPEAG@Z
    long _GetUserNameExHelper(int, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitializeAndExecuteLDAPQuery@CUserTileStore@@AEAAJPEBGPEAPEAG1@Z
    long _InitializeAndExecuteLDAPQuery(unsigned short const *, unsigned short * *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsDomainUser@CUserTileStore@@AEAA_NXZ
    bool _IsDomainUser();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LoadUserTileFromPropStore@CUserTileStore@@AEAAJHPEAUHWND__@@PEAUIPropertyStore@@PEAUIStream@@@Z
    long _LoadUserTileFromPropStore(int, HWND__*, IPropertyStore *, IStream *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetImages@CUserTileStore@@AEAAJPEAUIStream@@000PEBG@Z
    long _SetImages(IStream *, IStream *, IStream *, IStream *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetImagesOnUserManagerAndCache@CUserTileStore@@AEAAJPEAUIStream@@000PEBG@Z
    long _SetImagesOnUserManagerAndCache(IStream *, IStream *, IStream *, IStream *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateADCachedUserName@CUserTileStore@@AEAAXPEBG0@Z
    void _UpdateADCachedUserName(unsigned short const *, unsigned short const *);
};
