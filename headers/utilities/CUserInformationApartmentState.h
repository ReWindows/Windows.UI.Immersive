#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 33 member(s).
class CUserInformationApartmentState {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CUserInformationApartmentState@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CUserInformationApartmentState@@QEAA@XZ
    CUserInformationApartmentState();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAccountPicture@CUserInformationApartmentState@@UEAAJW4AccountPictureKind@UserProfile@System@Windows@@PEAPEAUIStorageFile@Storage@5@@Z
    virtual long GetAccountPicture(int, ::Windows::Storage::IStorageFile * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDisplayNameAsync@CUserInformationApartmentState@@UEAAJPEAPEAU?$IAsyncOperation@PEAUHSTRING__@@@Foundation@Windows@@@Z
    virtual long GetDisplayNameAsync(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDomainNameAsync@CUserInformationApartmentState@@UEAAJPEAPEAU?$IAsyncOperation@PEAUHSTRING__@@@Foundation@Windows@@@Z
    virtual long GetDomainNameAsync(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFirstNameAsync@CUserInformationApartmentState@@UEAAJPEAPEAU?$IAsyncOperation@PEAUHSTRING__@@@Foundation@Windows@@@Z
    virtual long GetFirstNameAsync(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CUserInformationApartmentState@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLastNameAsync@CUserInformationApartmentState@@UEAAJPEAPEAU?$IAsyncOperation@PEAUHSTRING__@@@Foundation@Windows@@@Z
    virtual long GetLastNameAsync(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPrincipalNameAsync@CUserInformationApartmentState@@UEAAJPEAPEAU?$IAsyncOperation@PEAUHSTRING__@@@Foundation@Windows@@@Z
    virtual long GetPrincipalNameAsync(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CUserInformationApartmentState@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSessionInitiationProtocolUriAsync@CUserInformationApartmentState@@UEAAJPEAPEAU?$IAsyncOperation@PEAVUri@Foundation@Windows@@@Foundation@Windows@@@Z
    virtual long GetSessionInitiationProtocolUriAsync(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CUserInformationApartmentState@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CUserInformationApartmentState@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CUserInformationApartmentState@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAccountPictureAsync@CUserInformationApartmentState@@UEAAJPEAUIStorageFile@Storage@Windows@@PEAPEAU?$IAsyncOperation@W4SetAccountPictureResult@UserProfile@System@Windows@@@Foundation@4@@Z
    virtual long SetAccountPictureAsync(::Windows::Storage::IStorageFile *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAccountPictureFromStreamAsync@CUserInformationApartmentState@@UEAAJPEAUIRandomAccessStream@Streams@Storage@Windows@@PEAPEAU?$IAsyncOperation@W4SetAccountPictureResult@UserProfile@System@Windows@@@Foundation@5@@Z
    virtual long SetAccountPictureFromStreamAsync(::Windows::Storage::Streams::IRandomAccessStream *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAccountPicturesAsync@CUserInformationApartmentState@@UEAAJPEAUIStorageFile@Storage@Windows@@00PEAPEAU?$IAsyncOperation@W4SetAccountPictureResult@UserProfile@System@Windows@@@Foundation@4@@Z
    virtual long SetAccountPicturesAsync(::Windows::Storage::IStorageFile *, ::Windows::Storage::IStorageFile *, ::Windows::Storage::IStorageFile *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAccountPicturesFromStreamsAsync@CUserInformationApartmentState@@UEAAJPEAUIRandomAccessStream@Streams@Storage@Windows@@00PEAPEAU?$IAsyncOperation@W4SetAccountPictureResult@UserProfile@System@Windows@@@Foundation@5@@Z
    virtual long SetAccountPicturesFromStreamsAsync(::Windows::Storage::Streams::IRandomAccessStream *, ::Windows::Storage::Streams::IRandomAccessStream *, ::Windows::Storage::Streams::IRandomAccessStream *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_AccountPictureChanged@CUserInformationApartmentState@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_AccountPictureChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AccountPictureChangeEnabled@CUserInformationApartmentState@@UEAAJPEAE@Z
    virtual long get_AccountPictureChangeEnabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NameAccessAllowed@CUserInformationApartmentState@@UEAAJPEAE@Z
    virtual long get_NameAccessAllowed(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_AccountPictureChanged@CUserInformationApartmentState@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_AccountPictureChanged(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CUserInformationApartmentState@@UEAA@XZ
    virtual ~CUserInformationApartmentState();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureListenerWindow@CUserInformationApartmentState@@AEAAJXZ
    long _EnsureListenerWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_WndProc@CUserInformationApartmentState@@EEAA_JPEAUHWND__@@I_K_J@Z
    virtual int64_t v_WndProc(HWND__*, unsigned int, uint64_t, int64_t);
};
