#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 14 member(s).
class CBridgeWindowRawElementProvider {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEmbeddedFragmentRoots@CBridgeWindowRawElementProvider@@UEAAJPEAPEAUtagSAFEARRAY@@@Z
    virtual long GetEmbeddedFragmentRoots(tagSAFEARRAY * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPatternProvider@CBridgeWindowRawElementProvider@@UEAAJHPEAPEAUIUnknown@@@Z
    virtual long GetPatternProvider(int, IUnknown * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertyValue@CBridgeWindowRawElementProvider@@UEAAJHPEAUtagVARIANT@@@Z
    virtual long GetPropertyValue(int, tagVARIANT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeId@CBridgeWindowRawElementProvider@@UEAAJPEAPEAUtagSAFEARRAY@@@Z
    virtual long GetRuntimeId(tagSAFEARRAY * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Make@CBridgeWindowRawElementProvider@@SAJPEAUIRawElementProviderFragment@@PEAUHWND__@@AEBU_GUID@@PEAPEAX@Z
    static long Make(IRawElementProviderFragment *, HWND__*, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Navigate@CBridgeWindowRawElementProvider@@UEAAJW4NavigateDirection@@PEAPEAUIRawElementProviderFragment@@@Z
    virtual long Navigate(int, IRawElementProviderFragment * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFocus@CBridgeWindowRawElementProvider@@UEAAJXZ
    virtual long SetFocus();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BoundingRectangle@CBridgeWindowRawElementProvider@@UEAAJPEAUUiaRect@@@Z
    virtual long get_BoundingRectangle(UiaRect *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FragmentRoot@CBridgeWindowRawElementProvider@@UEAAJPEAPEAUIRawElementProviderFragmentRoot@@@Z
    virtual long get_FragmentRoot(IRawElementProviderFragmentRoot * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HostRawElementProvider@CBridgeWindowRawElementProvider@@UEAAJPEAPEAUIRawElementProviderSimple@@@Z
    virtual long get_HostRawElementProvider(IRawElementProviderSimple * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ProviderOptions@CBridgeWindowRawElementProvider@@UEAAJPEAW4ProviderOptions@@@Z
    virtual long get_ProviderOptions(int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CBridgeWindowRawElementProvider@@UEAA@XZ
    virtual ~CBridgeWindowRawElementProvider();
};
