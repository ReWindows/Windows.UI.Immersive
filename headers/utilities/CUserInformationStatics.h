#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 37 member(s).
class CUserInformationStatics {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@CUserInformationStatics@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CUserInformationStatics@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAccountPicture@CUserInformationStatics@@UEAAJW4AccountPictureKind@UserProfile@System@Windows@@PEAPEAUIStorageFile@Storage@5@@Z
    virtual long GetAccountPicture(int, ::Windows::Storage::IStorageFile * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDisplayNameAsync@CUserInformationStatics@@UEAAJPEAPEAU?$IAsyncOperation@PEAUHSTRING__@@@Foundation@Windows@@@Z
    virtual long GetDisplayNameAsync(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDomainNameAsync@CUserInformationStatics@@UEAAJPEAPEAU?$IAsyncOperation@PEAUHSTRING__@@@Foundation@Windows@@@Z
    virtual long GetDomainNameAsync(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFirstNameAsync@CUserInformationStatics@@UEAAJPEAPEAU?$IAsyncOperation@PEAUHSTRING__@@@Foundation@Windows@@@Z
    virtual long GetFirstNameAsync(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CUserInformationStatics@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLastNameAsync@CUserInformationStatics@@UEAAJPEAPEAU?$IAsyncOperation@PEAUHSTRING__@@@Foundation@Windows@@@Z
    virtual long GetLastNameAsync(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPrincipalNameAsync@CUserInformationStatics@@UEAAJPEAPEAU?$IAsyncOperation@PEAUHSTRING__@@@Foundation@Windows@@@Z
    virtual long GetPrincipalNameAsync(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CUserInformationStatics@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSessionInitiationProtocolUriAsync@CUserInformationStatics@@UEAAJPEAPEAU?$IAsyncOperation@PEAVUri@Foundation@Windows@@@Foundation@Windows@@@Z
    virtual long GetSessionInitiationProtocolUriAsync(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CUserInformationStatics@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@CUserInformationStatics@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevelStatic@CUserInformationStatics@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CUserInformationStatics@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CUserInformationStatics@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAccountPictureAsync@CUserInformationStatics@@UEAAJPEAUIStorageFile@Storage@Windows@@PEAPEAU?$IAsyncOperation@W4SetAccountPictureResult@UserProfile@System@Windows@@@Foundation@4@@Z
    virtual long SetAccountPictureAsync(::Windows::Storage::IStorageFile *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAccountPictureFromStreamAsync@CUserInformationStatics@@UEAAJPEAUIRandomAccessStream@Streams@Storage@Windows@@PEAPEAU?$IAsyncOperation@W4SetAccountPictureResult@UserProfile@System@Windows@@@Foundation@5@@Z
    virtual long SetAccountPictureFromStreamAsync(::Windows::Storage::Streams::IRandomAccessStream *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAccountPicturesAsync@CUserInformationStatics@@UEAAJPEAUIStorageFile@Storage@Windows@@00PEAPEAU?$IAsyncOperation@W4SetAccountPictureResult@UserProfile@System@Windows@@@Foundation@4@@Z
    virtual long SetAccountPicturesAsync(::Windows::Storage::IStorageFile *, ::Windows::Storage::IStorageFile *, ::Windows::Storage::IStorageFile *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAccountPicturesFromStreamsAsync@CUserInformationStatics@@UEAAJPEAUIRandomAccessStream@Streams@Storage@Windows@@00PEAPEAU?$IAsyncOperation@W4SetAccountPictureResult@UserProfile@System@Windows@@@Foundation@5@@Z
    virtual long SetAccountPicturesFromStreamsAsync(::Windows::Storage::Streams::IRandomAccessStream *, ::Windows::Storage::Streams::IRandomAccessStream *, ::Windows::Storage::Streams::IRandomAccessStream *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_AccountPictureChanged@CUserInformationStatics@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_AccountPictureChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AccountPictureChangeEnabled@CUserInformationStatics@@UEAAJPEAE@Z
    virtual long get_AccountPictureChangeEnabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NameAccessAllowed@CUserInformationStatics@@UEAAJPEAE@Z
    virtual long get_NameAccessAllowed(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_AccountPictureChanged@CUserInformationStatics@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_AccountPictureChanged(EventRegistrationToken);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetNameAsyncHelper@CUserInformationStatics@@AEAAJW4EXTENDED_NAME_FORMAT@@PEAPEAU?$IAsyncOperation@PEAUHSTRING__@@@Foundation@Windows@@@Z
    long _GetNameAsyncHelper(int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetAccountPictureAsyncFromFile@CUserInformationStatics@@AEAAJPEAUIStorageFile@Storage@Windows@@00PEAPEAU?$IAsyncOperation@W4SetAccountPictureResult@UserProfile@System@Windows@@@Foundation@4@@Z
    long _SetAccountPictureAsyncFromFile(::Windows::Storage::IStorageFile *, ::Windows::Storage::IStorageFile *, ::Windows::Storage::IStorageFile *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetAccountPictureAsyncFromStream@CUserInformationStatics@@AEAAJPEAUIRandomAccessStream@Streams@Storage@Windows@@00PEAPEAU?$IAsyncOperation@W4SetAccountPictureResult@UserProfile@System@Windows@@@Foundation@5@@Z
    long _SetAccountPictureAsyncFromStream(::Windows::Storage::Streams::IRandomAccessStream *, ::Windows::Storage::Streams::IRandomAccessStream *, ::Windows::Storage::Streams::IRandomAccessStream *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UnmarshalOrCreateApartmentState@CUserInformationStatics@@AEAAJPEAPEAUIUserInformationStatics@UserProfile@System@Windows@@@Z
    long _UnmarshalOrCreateApartmentState(::Windows::System::UserProfile::IUserInformationStatics * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ValidateCallerCapability@CUserInformationStatics@@AEAAJPEA_N@Z
    long _ValidateCallerCapability(bool *);
};
