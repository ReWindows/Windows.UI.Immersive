#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 7 member(s).
class CEventHandler {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParameters@CEventHandler@@UEAAJPEAK0@Z
    virtual long GetParameters(unsigned long *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitWait@CEventHandler@@QEAAJK@Z
    long InitWait(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@CEventHandler@@UEAAJPEAUIMFAsyncResult@@@Z
    virtual long Invoke(IMFAsyncResult *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleEvent@CEventHandler@@AEAA_NPEAUIMFMediaEvent@@@Z
    bool _HandleEvent(IMFMediaEvent *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CEventHandler@@EEAA@XZ
    virtual ~CEventHandler();
};
