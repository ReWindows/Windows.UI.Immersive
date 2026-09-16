#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 27 member(s).
class CAppointmentInvitee {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CAppointmentInvitee@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CAppointmentInvitee@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CAppointmentInvitee@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CAppointmentInvitee@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@CAppointmentInvitee@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@CAppointmentInvitee@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CAppointmentInvitee@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CAppointmentInvitee@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Response@CAppointmentInvitee@@UEAAJPEAW4AppointmentParticipantResponse@Appointments@ApplicationModel@Windows@@@Z
    virtual long get_Response(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Role@CAppointmentInvitee@@UEAAJPEAW4AppointmentParticipantRole@Appointments@ApplicationModel@Windows@@@Z
    virtual long get_Role(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Response@CAppointmentInvitee@@UEAAJW4AppointmentParticipantResponse@Appointments@ApplicationModel@Windows@@@Z
    virtual long put_Response(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Role@CAppointmentInvitee@@UEAAJW4AppointmentParticipantRole@Appointments@ApplicationModel@Windows@@@Z
    virtual long put_Role(int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Initialize@CAppointmentInvitee@@AEAAJPEAUIAppointmentInvitee@Appointments@ApplicationModel@Windows@@@Z
    long _Initialize(::Windows::ApplicationModel::Appointments::IAppointmentInvitee *);
};
