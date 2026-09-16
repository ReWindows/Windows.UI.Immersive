#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 13 member(s).
class CImageSanitizationValidator {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CImageSanitizationValidator@@QEAA@XZ
    CImageSanitizationValidator();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ColorCorrectSourceImage@CImageSanitizationValidator@@UEAAJXZ
    virtual long ColorCorrectSourceImage();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CropSourceImage@CImageSanitizationValidator@@UEAAJUtagRECT@@@Z
    virtual long CropSourceImage(tagRECT);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImageStreamData@CImageSanitizationValidator@@UEAAJPEAPEAEPEAK@Z
    virtual long GetImageStreamData(unsigned char * *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSourceContainerFormat@CImageSanitizationValidator@@UEAAJPEAU_GUID@@@Z
    virtual long GetSourceContainerFormat(_GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadImageStream@CImageSanitizationValidator@@UEAAJPEAUIStream@@PEAUtagSIZE@@@Z
    virtual long LoadImageStream(IStream *, tagSIZE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadImageStreamAndGetData@CImageSanitizationValidator@@UEAAJPEAUIStream@@PEAUtagSIZE@@PEAPEAEPEAK@Z
    virtual long LoadImageStreamAndGetData(IStream *, tagSIZE *, unsigned char * *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadImageW@CImageSanitizationValidator@@UEAAJPEBGPEAUtagSIZE@@@Z
    virtual long LoadImageW(unsigned short const *, tagSIZE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScaleSourceImage@CImageSanitizationValidator@@UEAAJUtagSIZE@@@Z
    virtual long ScaleSourceImage(tagSIZE);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CImageSanitizationValidator@@EEAA@XZ
    virtual ~CImageSanitizationValidator();
};
