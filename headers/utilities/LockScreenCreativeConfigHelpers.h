#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 11 member(s).
namespace CreativeFramework {
class LockScreenCreativeConfigHelpers {
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCreativeForCurrentUserFromRegistry@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEAULOCK_SCREEN_CREATIVE@@@Z
    long GetCreativeForCurrentUserFromRegistry(LOCK_SCREEN_CREATIVE *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentUserSidString@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEAPEAG@Z
    long GetCurrentUserSidString(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLockImageFlags@LockScreenCreativeConfigHelpers@CreativeFramework@@YA?AW4LockImageFlags@12@PEBG@Z
    int GetLockImageFlags(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLockScreenEnabled@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEBGPEA_N1@Z
    long GetLockScreenEnabled(unsigned short const *, bool *, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLockScreenRegistryKeyRoot@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEBGPEAPEAUHKEY__@@@Z
    long GetLockScreenRegistryKeyRoot(unsigned short const *, HKEY__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PeekLockScreenRegistryKeys@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEBGPEAPEAG11PEA_N@Z
    long PeekLockScreenRegistryKeys(unsigned short const *, unsigned short * *, unsigned short * *, unsigned short * *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PeekLockScreenRegistryKeysCdmLite@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEBGPEAPEAG11PEA_N@Z
    long PeekLockScreenRegistryKeysCdmLite(unsigned short const *, unsigned short * *, unsigned short * *, unsigned short * *, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLockImageFlags@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJW4LockImageFlags@12@PEBG@Z
    long SetLockImageFlags(int, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLockScreenCreativeHelper@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJAEBULOCK_SCREEN_CREATIVE@@@Z
    long SetLockScreenCreativeHelper(LOCK_SCREEN_CREATIVE const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteCreativeToMachineRegistry@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEBULOCK_SCREEN_CREATIVE@@PEBG@Z
    long WriteCreativeToMachineRegistry(LOCK_SCREEN_CREATIVE const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteCreativeToRegistry@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEBULOCK_SCREEN_CREATIVE@@@Z
    long WriteCreativeToRegistry(LOCK_SCREEN_CREATIVE const *);
};
} // namespace CreativeFramework
