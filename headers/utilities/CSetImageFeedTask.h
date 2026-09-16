#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 5 member(s).
class CSetImageFeedTask {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTask@CSetImageFeedTask@@QEAAJPEBGPEAPEAU?$IAsyncOperation@W4SetImageFeedResult@UserProfile@System@Windows@@@Foundation@Windows@@@Z
    long CreateTask(unsigned short const *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveFeed@CSetImageFeedTask@@QEAAJPEAH@Z
    long RemoveFeed(int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSetImageFeedTask@@UEAA@XZ
    virtual ~CSetImageFeedTask();
};
