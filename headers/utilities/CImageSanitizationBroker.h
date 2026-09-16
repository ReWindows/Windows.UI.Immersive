#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 24 member(s).
class CImageSanitizationBroker {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateExpression@CImageSanitizationBroker@@UEAAJPEBG@Z
    virtual long ActivateExpression(unsigned short const *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CImageSanitizationBroker@@QEAA@XZ
    CImageSanitizationBroker();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteDirectory@CImageSanitizationBroker@@UEAAJPEBGW4IMAGE_SANITIZATION_BROKER_FLAGS@@@Z
    virtual long DeleteDirectory(unsigned short const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SanitizeImagePriv@CImageSanitizationBroker@@UEAAJPEBG0UtagSIZE@@W4IMAGE_SANITIZATION_BROKER_FLAGS@@0@Z
    virtual long SanitizeImagePriv(unsigned short const *, unsigned short const *, tagSIZE, int, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SanitizeImageStream@CImageSanitizationBroker@@UEAAJPEAUIStream@@PEBGUtagSIZE@@W4IMAGE_SANITIZATION_BROKER_FLAGS@@PEAU3@PEAW4CacheFormat@@@Z
    virtual long SanitizeImageStream(IStream *, unsigned short const *, tagSIZE, int, tagSIZE *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SaveScaledImageStream@CImageSanitizationBroker@@UEAAJPEAUIStream@@PEBG1W4IMAGE_SANITIZATION_BROKER_FLAGS@@PEAPEAG@Z
    virtual long SaveScaledImageStream(IStream *, unsigned short const *, unsigned short const *, int, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCustomAccent@CImageSanitizationBroker@@UEAAJPEBGKPEAUIStream@@@Z
    virtual long SetCustomAccent(unsigned short const *, unsigned long, IStream *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetImmersiveExpressionData@CImageSanitizationBroker@@UEAAJPEBG0PEBKIM@Z
    virtual long SetImmersiveExpressionData(unsigned short const *, unsigned short const *, unsigned long const *, unsigned int, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCustomAccentLoadStatus@CImageSanitizationBroker@@UEAAJPEBGK@Z
    virtual long UpdateCustomAccentLoadStatus(unsigned short const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateImageStream@CImageSanitizationBroker@@UEAAJPEAUIStream@@PEAPEAU2@@Z
    virtual long ValidateImageStream(IStream *, IStream * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteBinaryToRegistry@CImageSanitizationBroker@@UEAAJPEBG0PEAEKW4IMAGE_SANITIZATION_BROKER_REGISTRY_FLAGS@@@Z
    virtual long WriteBinaryToRegistry(unsigned short const *, unsigned short const *, unsigned char *, unsigned long, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteDWORDContainerToRegistry@CImageSanitizationBroker@@UEAAJPEBGPEBUNAME_AND_DWORD_VALUE@@KW4IMAGE_SANITIZATION_BROKER_REGISTRY_FLAGS@@@Z
    virtual long WriteDWORDContainerToRegistry(unsigned short const *, NAME_AND_DWORD_VALUE const *, unsigned long, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteDWORDToRegistry@CImageSanitizationBroker@@UEAAJPEBG0KW4IMAGE_SANITIZATION_BROKER_REGISTRY_FLAGS@@@Z
    virtual long WriteDWORDToRegistry(unsigned short const *, unsigned short const *, unsigned long, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteStringToRegistry@CImageSanitizationBroker@@UEAAJPEBG00W4IMAGE_SANITIZATION_BROKER_REGISTRY_FLAGS@@@Z
    virtual long WriteStringToRegistry(unsigned short const *, unsigned short const *, unsigned short const *, int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureValidator@CImageSanitizationBroker@@AEAAJXZ
    long _EnsureValidator();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FindLastActivatedExpressionId@CImageSanitizationBroker@@AEAAJPEAGI@Z
    long _FindLastActivatedExpressionId(unsigned short *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetImageStream@CImageSanitizationBroker@@AEAAJPEAPEAUIStream@@@Z
    long _GetImageStream(IStream * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetSanitizedFileNameAndSubFolder@CImageSanitizationBroker@@AEAAJPEBGPEAGI1IW4IMAGE_SANITIZATION_BROKER_FLAGS@@@Z
    long _GetSanitizedFileNameAndSubFolder(unsigned short const *, unsigned short *, unsigned int, unsigned short *, unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ValidateExpressionDataXML@CImageSanitizationBroker@@AEAAJPEBGPEAI@Z
    long _ValidateExpressionDataXML(unsigned short const *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ValidateExpressionId@CImageSanitizationBroker@@AEAAJPEBGPEAI@Z
    long _ValidateExpressionId(unsigned short const *, unsigned int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CImageSanitizationBroker@@EEAA@XZ
    virtual ~CImageSanitizationBroker();
};
