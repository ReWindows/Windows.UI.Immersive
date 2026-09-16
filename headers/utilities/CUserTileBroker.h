#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 14 member(s).
class CUserTileBroker {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FixCorruptedStore@CUserTileBroker@@UEAAJPEBG@Z
    virtual long FixCorruptedStore(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveCorrelationID@CUserTileBroker@@UEAAJXZ
    virtual long RemoveCorrelationID();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetUserTile@CUserTileBroker@@UEAAJXZ
    virtual long ResetUserTile();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCorrelationID@CUserTileBroker@@UEAAJPEBG@Z
    virtual long SetCorrelationID(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUserTile@CUserTileBroker@@UEAAJPEAUIStream@@00W4DEVICE_SCALE_FACTOR@@@Z
    virtual long SetUserTile(IStream *, IStream *, IStream *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUserTileForUser@CUserTileBroker@@UEAAJPEBGPEAUIStream@@W4DEVICE_SCALE_FACTOR@@@Z
    virtual long SetUserTileForUser(unsigned short const *, IStream *, int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CleanUpFiles@CUserTileBroker@@AEAAXPEAUIShellItem@@_NPEBG@Z
    void _CleanUpFiles(IShellItem *, bool, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetTileFolder@CUserTileBroker@@AEAAJPEBGPEAPEAUIShellItem@@@Z
    long _GetTileFolder(unsigned short const *, IShellItem * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SaveImage@CUserTileBroker@@AEAAJPEAUIShellItem@@PEAUIStream@@PEBG22PEAPEAG@Z
    long _SaveImage(IShellItem *, IStream *, unsigned short const *, unsigned short const *, unsigned short const *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SaveImages@CUserTileBroker@@AEAAJPEBGPEAUUSERTILE_SIZE_MAPPING@@I@Z
    long _SaveImages(unsigned short const *, USERTILE_SIZE_MAPPING *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetUserTileInternal@CUserTileBroker@@AEAAJPEBGPEAUIStream@@11W4DEVICE_SCALE_FACTOR@@@Z
    long _SetUserTileInternal(unsigned short const *, IStream *, IStream *, IStream *, int);
};
