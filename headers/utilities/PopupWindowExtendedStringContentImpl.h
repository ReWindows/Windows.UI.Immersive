#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 10 member(s).
namespace Windows::Internal {
class PopupWindowExtendedStringContentImpl {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentGlyph@PopupWindowExtendedStringContentImpl@Internal@Windows@@UEAAJPEAPEAG@Z
    virtual long GetContentGlyph(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentPrimary@PopupWindowExtendedStringContentImpl@Internal@Windows@@UEAAJPEAPEAG@Z
    virtual long GetContentPrimary(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentSecondary@PopupWindowExtendedStringContentImpl@Internal@Windows@@UEAAJPEAPEAG@Z
    virtual long GetContentSecondary(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGlyphFont@PopupWindowExtendedStringContentImpl@Internal@Windows@@UEAAJPEAPEAG@Z
    virtual long GetGlyphFont(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHyperlinkText@PopupWindowExtendedStringContentImpl@Internal@Windows@@UEAAJPEAPEAG@Z
    virtual long GetHyperlinkText(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasCustomHyperlink@PopupWindowExtendedStringContentImpl@Internal@Windows@@UEAAHXZ
    virtual int HasCustomHyperlink();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PopupWindowExtendedStringContentImpl@Internal@Windows@@QEAA@PEBG0000@Z
    PopupWindowExtendedStringContentImpl(unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PopupWindowExtendedStringContentImpl@Internal@Windows@@UEAA@XZ
    virtual ~PopupWindowExtendedStringContentImpl();
};
} // namespace Windows::Internal
