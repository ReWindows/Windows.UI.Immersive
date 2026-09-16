#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 4 member(s).
class CSetLockScreenImageFeedOperation {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CSetLockScreenImageFeedOperation@@QEAAJPEBG00@Z
    long Initialize(unsigned short const *, unsigned short const *, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetImageFeed@CSetLockScreenImageFeedOperation@@QEAAJPEAUHWND__@@PEAW4SetImageFeedResult@UserProfile@System@Windows@@@Z
    long SetImageFeed(HWND__*, int *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RemoveFeed@CSetLockScreenImageFeedOperation@@AEAAJXZ
    long _RemoveFeed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetImageFeedAsDefault@CSetLockScreenImageFeedOperation@@AEAAJXZ
    long _SetImageFeedAsDefault();
};
