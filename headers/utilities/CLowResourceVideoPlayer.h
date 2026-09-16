#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 11 member(s).
class CLowResourceVideoPlayer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Play@CLowResourceVideoPlayer@@UEAAJXZ
    virtual long Play();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenderFrame@CLowResourceVideoPlayer@@UEAAJPEAUHDC__@@PEBUtagRECT@@@Z
    virtual long RenderFrame(HDC__*, tagRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@CLowResourceVideoPlayer@@UEAAJXZ
    virtual long Stop();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PresentSample@CLowResourceVideoPlayer@@AEAAJPEAUIMFSample@@@Z
    long _PresentSample(IMFSample *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ThreadProc@CLowResourceVideoPlayer@@AEAAJXZ
    long _ThreadProc();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_Callback@CLowResourceVideoPlayer@@CAKPEAX@Z
    static unsigned long s_Callback(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_LockBuffer@CLowResourceVideoPlayer@@CAJPEAUIMFMediaBuffer@@JPEAPEAE@Z
    static long s_LockBuffer(IMFMediaBuffer *, long, unsigned char * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_ThreadProc@CLowResourceVideoPlayer@@CAKPEAX@Z
    static unsigned long s_ThreadProc(void *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CLowResourceVideoPlayer@@EEAA@XZ
    virtual ~CLowResourceVideoPlayer();
};
