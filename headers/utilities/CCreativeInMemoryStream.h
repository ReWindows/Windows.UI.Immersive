#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 57 member(s).
class CCreativeInMemoryStream {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CCreativeInMemoryStream@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloneStream@CCreativeInMemoryStream@@UEAAJPEAPEAUIRandomAccessStream@Streams@Storage@Windows@@@Z
    virtual long CloneStream(::Windows::Storage::Streams::IRandomAccessStream * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@CCreativeInMemoryStream@@UEAAJXZ
    virtual long Close();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FlushAsync@CCreativeInMemoryStream@@UEAAJPEAPEAU?$IAsyncOperation@_N@Foundation@Windows@@@Z
    virtual long FlushAsync(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CCreativeInMemoryStream@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInputStreamAt@CCreativeInMemoryStream@@UEAAJ_KPEAPEAUIInputStream@Streams@Storage@Windows@@@Z
    virtual long GetInputStreamAt(uint64_t, ::Windows::Storage::Streams::IInputStream * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOutputStreamAt@CCreativeInMemoryStream@@UEAAJ_KPEAPEAUIOutputStream@Streams@Storage@Windows@@@Z
    virtual long GetOutputStreamAt(uint64_t, ::Windows::Storage::Streams::IOutputStream * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CCreativeInMemoryStream@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStream@CCreativeInMemoryStream@@UEAAJPEAPEAUIStream@@@Z
    virtual long GetStream(IStream * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CCreativeInMemoryStream@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCreativeStream@CCreativeInMemoryStream@@UEAAJPEAE@Z
    virtual long IsCreativeStream(unsigned char *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CCreativeInMemoryStream@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadAsync@CCreativeInMemoryStream@@UEAAJPEAUIBuffer@Streams@Storage@Windows@@IW4InputStreamOptions@345@PEAPEAU?$IAsyncOperationWithProgress@PEAUIBuffer@Streams@Storage@Windows@@I@Foundation@5@@Z
    virtual long ReadAsync(::Windows::Storage::Streams::IBuffer *, unsigned int, int, WindissectOpaque * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CCreativeInMemoryStream@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Seek@CCreativeInMemoryStream@@UEAAJ_K@Z
    virtual long Seek(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteAsync@CCreativeInMemoryStream@@UEAAJPEAUIBuffer@Streams@Storage@Windows@@PEAPEAU?$IAsyncOperationWithProgress@II@Foundation@5@@Z
    virtual long WriteAsync(::Windows::Storage::Streams::IBuffer *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CanRead@CCreativeInMemoryStream@@UEAAJPEAE@Z
    virtual long get_CanRead(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CanWrite@CCreativeInMemoryStream@@UEAAJPEAE@Z
    virtual long get_CanWrite(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Position@CCreativeInMemoryStream@@UEAAJPEA_K@Z
    virtual long get_Position(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Size@CCreativeInMemoryStream@@UEAAJPEA_K@Z
    virtual long get_Size(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Size@CCreativeInMemoryStream@@UEAAJ_K@Z
    virtual long put_Size(uint64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CCreativeInMemoryStream@@UEAA@XZ
    virtual ~CCreativeInMemoryStream();
};
