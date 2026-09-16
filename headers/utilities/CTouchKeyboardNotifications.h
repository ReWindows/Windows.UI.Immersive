#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 3 member(s).
class CTouchKeyboardNotifications {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshKeyboardState@CTouchKeyboardNotifications@@QEAAJXZ
    long RefreshKeyboardState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubscribeToNotifications@CTouchKeyboardNotifications@@QEAAJPEAUITouchKeyboardNotificationCallback@@W4TouchKeyboardNotificationsDesired@@@Z
    long SubscribeToNotifications(ITouchKeyboardNotificationCallback *, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTouchKeyboardNotifications@@QEAA@XZ
    ~CTouchKeyboardNotifications();
};
