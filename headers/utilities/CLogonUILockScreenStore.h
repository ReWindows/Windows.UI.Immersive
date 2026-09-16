#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 3 member(s).
class CLogonUILockScreenStore {
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImageRandomAccessStreamForUser@CLogonUILockScreenStore@@EEAAJPEBGIIW4LOCK_SCREEN_IMAGE_OPTIONS@@AEBU_GUID@@PEAPEAX@Z
    virtual long GetImageRandomAccessStreamForUser(unsigned short const *, unsigned int, unsigned int, int, _GUID const &, void * *);
};
