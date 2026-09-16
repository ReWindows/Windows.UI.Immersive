#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 11 member(s).
class PopupWindowTelemetry {
public:
    class CreateDialogPopup;
    class InitializeDialog;
    class LoadCustomMetadataProviders;
    class XamlPopup_ComputeLayout;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DelayingShowUntilFirstFrameRender@PopupWindowTelemetry@@SAXXZ
    static void DelayingShowUntilFirstFrameRender();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DialogInfo_@PopupWindowTelemetry@@QEAAXPEBGI@Z
    void DialogInfo_(unsigned short const *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEnabled@PopupWindowTelemetry@@SA_NE_K@Z
    static bool IsEnabled(unsigned char, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopupDeferringThreadShutdown@PopupWindowTelemetry@@SAXXZ
    static void PopupDeferringThreadShutdown();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowingAferFirstFrameRender@PopupWindowTelemetry@@SAXXZ
    static void ShowingAferFirstFrameRender();
};
