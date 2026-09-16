#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 7 member(s).
class CAppointmentParticipantBase {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CAppointmentParticipantBase@@QEAA@XZ
    CAppointmentParticipantBase();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Address@CAppointmentParticipantBase@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Address(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DisplayName@CAppointmentParticipantBase@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_DisplayName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Address@CAppointmentParticipantBase@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_Address(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_DisplayName@CAppointmentParticipantBase@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_DisplayName(HSTRING__*);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAppointmentParticipantBase@@QEAA@XZ
    ~CAppointmentParticipantBase();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Initialize@CAppointmentParticipantBase@@IEAAJPEAUIAppointmentParticipant@Appointments@ApplicationModel@Windows@@@Z
    long _Initialize(::Windows::ApplicationModel::Appointments::IAppointmentParticipant *);
};
