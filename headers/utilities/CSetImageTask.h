#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 7 member(s).
class CSetImageTask {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CSetImageTask@@QEAAJXZ
    long RuntimeClassInitialize();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSetImageTask@@UEAA@XZ
    virtual ~CSetImageTask();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_BypassConsentForApp@CSetImageTask@@AEAA_NPEBG@Z
    bool _BypassConsentForApp(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MapResultToSetAccountPictureResult@CSetImageTask@@AEAA?AW4SetAccountPictureResult@UserProfile@System@Windows@@PEAJ@Z
    int _MapResultToSetAccountPictureResult(long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ValidateWriteAccess@CSetImageTask@@AEAAJAEAVAsyncWindowOperation@Internal@Windows@@PEAUIStream@@11@Z
    long _ValidateWriteAccess(::Windows::Internal::AsyncWindowOperation &, IStream *, IStream *, IStream *);
};
