#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 7 member(s).
namespace Windows::Internal {
class InputPaneRepositionBehavior {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCallbackFilters@InputPaneRepositionBehavior@Internal@Windows@@UEAAJPEAW4Flags@DuiBehaviorFilters@@@Z
    virtual long GetCallbackFilters(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@InputPaneRepositionBehavior@Internal@Windows@@UEAAJPEAVValue@DirectUI@@@Z
    virtual long Init(::DirectUI::Value *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InputPaneChanged@InputPaneRepositionBehavior@Internal@Windows@@SA?AVUID@@XZ
    static UID InputPaneChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEvent@InputPaneRepositionBehavior@Internal@Windows@@UEAAJPEAVElement@DirectUI@@PEAUEvent@5@@Z
    virtual long OnEvent(::DirectUI::Element *, ::DirectUI::Event *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@InputPaneRepositionBehavior@Internal@Windows@@UEAAJPEAVElement@DirectUI@@PEBUPropertyInfo@5@HPEAVValue@5@2@Z
    virtual long OnPropertyChanged(::DirectUI::Element *, ::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
};
} // namespace Windows::Internal
