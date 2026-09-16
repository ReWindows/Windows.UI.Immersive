#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 5 member(s).
class CTouchKeyboardNotificationBaseImpl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNotificationEvent@CTouchKeyboardNotificationBaseImpl@@UEAAXU_WNF_STATE_NAME@@PEBXK@Z
    virtual void OnNotificationEvent(_WNF_STATE_NAME, void const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubscribeToNotifications@CTouchKeyboardNotificationBaseImpl@@QEAAJW4TouchKeyboardNotificationsDesired@@@Z
    long SubscribeToNotifications(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTouchKeyboardNotificationBaseImpl@@UEAA@XZ
    virtual ~CTouchKeyboardNotificationBaseImpl();
};
