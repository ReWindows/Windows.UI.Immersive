#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 9 member(s).
namespace Windows::Internal {
class AnimationTraits {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearTelemetryScenario@AnimationTraits@Internal@Windows@@UEAAXXZ
    virtual void ClearTelemetryScenario();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DwmTransitionChanged@AnimationTraits@Internal@Windows@@UEAAXPEAUHWND__@@_KW4DWMTRANSITION_STORYBOARD_STATE@@@Z
    virtual void DwmTransitionChanged(HWND__*, uint64_t, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndAnimateContent@AnimationTraits@Internal@Windows@@UEAAXPEAUHWND__@@@Z
    virtual void EndAnimateContent(HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTelemetryScenario@AnimationTraits@Internal@Windows@@UEAA?AU_GUID@@XZ
    virtual _GUID GetTelemetryScenario();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTelemetryScenario@AnimationTraits@Internal@Windows@@UEAAXAEBU_GUID@@@Z
    virtual void SetTelemetryScenario(_GUID const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTransitionEnabled@AnimationTraits@Internal@Windows@@UEAAX_N@Z
    virtual void SetTransitionEnabled(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartAnimateContent@AnimationTraits@Internal@Windows@@UEAAXPEAUHWND__@@@Z
    virtual void StartAnimateContent(HWND__*);
};
} // namespace Windows::Internal
