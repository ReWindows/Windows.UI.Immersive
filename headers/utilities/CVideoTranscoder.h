#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 25 member(s).
class CVideoTranscoder {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CVideoTranscoder@@QEAA@XZ
    CVideoTranscoder();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetContainerType@CVideoTranscoder@@UEAAXAEBU_GUID@@@Z
    virtual void SetContainerType(_GUID const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDimensions@CVideoTranscoder@@UEAAXI@Z
    virtual void SetDimensions(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDuration@CVideoTranscoder@@UEAAXI@Z
    virtual void SetDuration(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetExtension@CVideoTranscoder@@UEAAJPEBG@Z
    virtual long SetExtension(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetQuality@CVideoTranscoder@@UEAAXI@Z
    virtual void SetQuality(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVideoSubtype@CVideoTranscoder@@UEAAXAEBU_GUID@@@Z
    virtual void SetVideoSubtype(_GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Transcode@CVideoTranscoder@@UEAAJPEAUIStream@@0@Z
    virtual long Transcode(IStream *, IStream *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CVideoTranscoder@@UEAA@XZ
    virtual ~CVideoTranscoder();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddCropTopology@CVideoTranscoder@@AEAAJPEAUIMFAttributes@@PEAUIMFTopology@@@Z
    long _AddCropTopology(IMFAttributes *, IMFTopology *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AdjustVideoAttributes@CVideoTranscoder@@AEAAJPEAUIMFAttributes@@@Z
    long _AdjustVideoAttributes(IMFAttributes *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ConfigureOutputMediaType@CVideoTranscoder@@AEAAJPEAUIMFAttributes@@PEAPEAUIMFMediaType@@@Z
    long _ConfigureOutputMediaType(IMFAttributes *, IMFMediaType * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateProfile@CVideoTranscoder@@AEAAJPEAUIMFAttributes@@PEAPEAUIMFTranscodeProfile@@@Z
    long _CreateProfile(IMFAttributes *, IMFTranscodeProfile * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetMediaSource@CVideoTranscoder@@AEAAJPEAUIStream@@PEAPEAUIMFMediaSource@@@Z
    long _GetMediaSource(IStream *, IMFMediaSource * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetSourceVideoNode@CVideoTranscoder@@AEAAJPEAUIMFTopology@@PEAPEAUIMFTopologyNode@@@Z
    long _GetSourceVideoNode(IMFTopology *, IMFTopologyNode * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetVideoAttribs@CVideoTranscoder@@AEAAJPEAUIMFMediaSource@@PEAPEAUIMFAttributes@@@Z
    long _GetVideoAttribs(IMFMediaSource *, IMFAttributes * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetVideoTransform@CVideoTranscoder@@AEAAJPEAUIMFAttributes@@PEAPEAUIMFTransform@@@Z
    long _GetVideoTransform(IMFAttributes *, IMFTransform * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RunSession@CVideoTranscoder@@AEAAJPEAUIMFMediaSession@@PEAUIMFMediaSource@@PEAVCEventHandler@@@Z
    long _RunSession(IMFMediaSession *, IMFMediaSource *, CEventHandler *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetTopology@CVideoTranscoder@@AEAAJPEAUIMFMediaSession@@PEAUIMFMediaSource@@PEAUIMFAttributes@@PEAUIStream@@PEAVCEventHandler@@@Z
    long _SetTopology(IMFMediaSession *, IMFMediaSource *, IMFAttributes *, IStream *, CEventHandler *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TranscodeVideo@CVideoTranscoder@@AEAAJPEAUIMFMediaSource@@PEAUIMFAttributes@@PEAUIStream@@@Z
    long _TranscodeVideo(IMFMediaSource *, IMFAttributes *, IStream *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ValidateSourceVideo@CVideoTranscoder@@AEAAJPEAUIStream@@PEAUIMFMediaSource@@PEAUIMFAttributes@@@Z
    long _ValidateSourceVideo(IStream *, IMFMediaSource *, IMFAttributes *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_IsPortraitOrientation@CVideoTranscoder@@CA_NPEAUIStream@@PEAUIMFMediaSource@@@Z
    static bool s_IsPortraitOrientation(IStream *, IMFMediaSource *);
};
