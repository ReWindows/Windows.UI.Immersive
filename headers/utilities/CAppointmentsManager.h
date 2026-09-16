#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 26 member(s).
class CAppointmentsManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@CAppointmentsManager@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CAppointmentsManager@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CAppointmentsManager@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CAppointmentsManager@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CAppointmentsManager@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@CAppointmentsManager@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevelStatic@CAppointmentsManager@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CAppointmentsManager@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CAppointmentsManager@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowAddAppointmentAsync@CAppointmentsManager@@UEAAJPEAUIAppointment@Appointments@ApplicationModel@Windows@@URect@Foundation@5@PEAPEAU?$IAsyncOperation@PEAUHSTRING__@@@75@@Z
    virtual long ShowAddAppointmentAsync(::Windows::ApplicationModel::Appointments::IAppointment *, WindissectOpaque, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowAddAppointmentWithPlacementAsync@CAppointmentsManager@@UEAAJPEAUIAppointment@Appointments@ApplicationModel@Windows@@URect@Foundation@5@W4Placement@Popups@UI@5@PEAPEAU?$IAsyncOperation@PEAUHSTRING__@@@75@@Z
    virtual long ShowAddAppointmentWithPlacementAsync(::Windows::ApplicationModel::Appointments::IAppointment *, WindissectOpaque, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowRemoveAppointmentAsync@CAppointmentsManager@@UEAAJPEAUHSTRING__@@URect@Foundation@Windows@@PEAPEAU?$IAsyncOperation@_N@45@@Z
    virtual long ShowRemoveAppointmentAsync(HSTRING__*, WindissectOpaque, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowRemoveAppointmentWithPlacementAndDateAsync@CAppointmentsManager@@UEAAJPEAUHSTRING__@@URect@Foundation@Windows@@W4Placement@Popups@UI@5@UDateTime@45@PEAPEAU?$IAsyncOperation@_N@45@@Z
    virtual long ShowRemoveAppointmentWithPlacementAndDateAsync(HSTRING__*, WindissectOpaque, int, WindissectOpaque, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowRemoveAppointmentWithPlacementAsync@CAppointmentsManager@@UEAAJPEAUHSTRING__@@URect@Foundation@Windows@@W4Placement@Popups@UI@5@PEAPEAU?$IAsyncOperation@_N@45@@Z
    virtual long ShowRemoveAppointmentWithPlacementAsync(HSTRING__*, WindissectOpaque, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowReplaceAppointmentAsync@CAppointmentsManager@@UEAAJPEAUHSTRING__@@PEAUIAppointment@Appointments@ApplicationModel@Windows@@URect@Foundation@6@PEAPEAU?$IAsyncOperation@PEAUHSTRING__@@@86@@Z
    virtual long ShowReplaceAppointmentAsync(HSTRING__*, ::Windows::ApplicationModel::Appointments::IAppointment *, WindissectOpaque, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowReplaceAppointmentWithPlacementAndDateAsync@CAppointmentsManager@@UEAAJPEAUHSTRING__@@PEAUIAppointment@Appointments@ApplicationModel@Windows@@URect@Foundation@6@W4Placement@Popups@UI@6@UDateTime@86@PEAPEAU?$IAsyncOperation@PEAUHSTRING__@@@86@@Z
    virtual long ShowReplaceAppointmentWithPlacementAndDateAsync(HSTRING__*, ::Windows::ApplicationModel::Appointments::IAppointment *, WindissectOpaque, int, WindissectOpaque, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowReplaceAppointmentWithPlacementAsync@CAppointmentsManager@@UEAAJPEAUHSTRING__@@PEAUIAppointment@Appointments@ApplicationModel@Windows@@URect@Foundation@6@W4Placement@Popups@UI@6@PEAPEAU?$IAsyncOperation@PEAUHSTRING__@@@86@@Z
    virtual long ShowReplaceAppointmentWithPlacementAsync(HSTRING__*, ::Windows::ApplicationModel::Appointments::IAppointment *, WindissectOpaque, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowTimeFrameAsync@CAppointmentsManager@@UEAAJUDateTime@Foundation@Windows@@UTimeSpan@34@PEAPEAUIAsyncAction@34@@Z
    virtual long ShowTimeFrameAsync(WindissectOpaque, WindissectOpaque, WindissectOpaque * *);
};
