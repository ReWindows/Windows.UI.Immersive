#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 6 member(s).
class LockScreenTelemetry {
public:
    class DisableRotatingImagesTaskActivity;
    class GetImageForUserActivity;
    class GetPortraitImageStreamActivity;
    class ImageSanitizationBrokerInitActivity;
    class IsSpotlightEnabledForUserActivity;
    class LoadHistoryActivity;
    class RemoveCreativeHistoryEntryActivity;
    class SaveHistoryActivity;
    class SetImageStreamFromRoamingHandlerTaskActivity;
    class SetLockScreenCreativeActivity;
    class SetLockScreenFromFileActivity;
    class SetLockScreenFromStreamActivity;
    class SetLockScreenRotationEnabledActivity;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CachedImageIsMissing@LockScreenTelemetry@@SAXXZ
    static void CachedImageIsMissing();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEnabled@LockScreenTelemetry@@SA_NE_K@Z
    static bool IsEnabled(unsigned char, uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetImageByApiEvent_@LockScreenTelemetry@@QEAAXW4SetImageApiType@1@PEBG@Z
    void SetImageByApiEvent_(int, unsigned short const *);
};
