#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 7 member(s).
class UserInfoTelemetry {
public:
    class OnUserUpdated;
    class UpdatingFromUserManager;
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultUserTileEvent@UserInfoTelemetry@@SAXXZ
    static void GetDefaultUserTileEvent();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUserNameEvent_@UserInfoTelemetry@@QEAAXKJ_NW4EXTENDED_NAME_FORMAT@@@Z
    void GetUserNameEvent_(unsigned long, long, bool, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEnabled@UserInfoTelemetry@@SA_NE_K@Z
    static bool IsEnabled(unsigned char, uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAccountPictureAsyncEvent_@UserInfoTelemetry@@QEAAXKJ_N00@Z
    void SetAccountPictureAsyncEvent_(unsigned long, long, bool, bool, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetImagesEvent_@UserInfoTelemetry@@QEAAXKJ_N00PEBGI@Z
    void SetImagesEvent_(unsigned long, long, bool, bool, bool, unsigned short const *, unsigned int);
};
