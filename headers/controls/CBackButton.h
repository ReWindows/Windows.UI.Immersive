#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 12 member(s).
// Base evidence: DirectUI::TouchButton (likely; classinfo-template-instantiation).
namespace Windows::Internal {
class CBackButton {
public:
    class GLYPH_DATA;
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@CBackButton@Internal@Windows@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImmersiveFocusRectOffsets@CBackButton@Internal@Windows@@UEAAXPEAUtagRECT@@@Z
    virtual void GetImmersiveFocusRectOffsets(tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@CBackButton@Internal@Windows@@UEAAXPEBUPropertyInfo@DirectUI@@HPEAVValue@5@1@Z
    virtual void OnPropertyChanged(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@CBackButton@Internal@Windows@@SAJXZ
    static long Register();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetColors@CBackButton@Internal@Windows@@QEAAJXZ
    long ResetColors();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CBackButton@Internal@Windows@@UEAA@XZ
    virtual ~CBackButton();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetButtonState@CBackButton@Internal@Windows@@AEAA?AW4BackButtonState@123@XZ
    int _GetButtonState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetMatchingGlyphData@CBackButton@Internal@Windows@@AEAAJW4BackButtonState@123@PEAUGLYPH_DATA@123@@Z
    long _GetMatchingGlyphData(int, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LoadGlyphs@CBackButton@Internal@Windows@@AEAAJW4BackButtonState@123@@Z
    long _LoadGlyphs(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LoadStrings@CBackButton@Internal@Windows@@AEAAJXZ
    long _LoadStrings();
};
} // namespace Windows::Internal
