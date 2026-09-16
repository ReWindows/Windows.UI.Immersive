#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 7 member(s).
namespace ApplicationTheme {
class ThemeImageStream {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@ThemeImageStream@ApplicationTheme@@QEAAJPEAUIRandomAccessStream@Streams@Storage@Windows@@@Z
    long RuntimeClassInitialize(::Windows::Storage::Streams::IRandomAccessStream *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Category@ThemeImageStream@ApplicationTheme@@UEAAJPEAW4ThemeImageCategory@2@@Z
    virtual long get_Category(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ImageStream@ThemeImageStream@ApplicationTheme@@UEAAJPEAPEAUIRandomAccessStreamReference@Streams@Storage@Windows@@@Z
    virtual long get_ImageStream(::Windows::Storage::Streams::IRandomAccessStreamReference * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SourceDimensions@ThemeImageStream@ApplicationTheme@@UEAAJPEAUSize@Foundation@Windows@@@Z
    virtual long get_SourceDimensions(WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ThemeImageStream@ApplicationTheme@@UEAA@XZ
    virtual ~ThemeImageStream();
};
} // namespace ApplicationTheme
