#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 10 member(s).
class CUserTileValidator {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateAndGenerateTileAtSize@CUserTileValidator@@UEAAJW4USER_TILE_TYPE@@IPEAUIStream@@PEAPEAU3@@Z
    virtual long ValidateAndGenerateTileAtSize(int, unsigned int, IStream *, IStream * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateUserTile@CUserTileValidator@@UEAAJPEAUIStream@@00PEAPEAU2@11@Z
    virtual long ValidateUserTile(IStream *, IStream *, IStream *, IStream * *, IStream * *, IStream * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GenerateLargeFromDynamicAndReset@CUserTileValidator@@AEAAJPEAUIStream@@PEAPEAU2@@Z
    long _GenerateLargeFromDynamicAndReset(IStream *, IStream * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetImageFromVideo@CUserTileValidator@@AEAAJPEAUIStream@@PEAPEAU2@@Z
    long _GetImageFromVideo(IStream *, IStream * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetReadOnlyCapability@CUserTileValidator@@AEAAXPEAUIStream@@@Z
    void _SetReadOnlyCapability(IStream *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TranscodeImageAndReset@CUserTileValidator@@AEAAJPEAUIStream@@IPEAPEAU2@@Z
    long _TranscodeImageAndReset(IStream *, unsigned int, IStream * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TranscodeVideoAndReset@CUserTileValidator@@AEAAJPEAUIStream@@IPEAPEAU2@@Z
    long _TranscodeVideoAndReset(IStream *, unsigned int, IStream * *);
};
