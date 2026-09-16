#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 21 member(s).
class CAppointmentsProviderLaunchActionVerbs {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@CAppointmentsProviderLaunchActionVerbs@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CAppointmentsProviderLaunchActionVerbs@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CAppointmentsProviderLaunchActionVerbs@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CAppointmentsProviderLaunchActionVerbs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CAppointmentsProviderLaunchActionVerbs@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@CAppointmentsProviderLaunchActionVerbs@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevelStatic@CAppointmentsProviderLaunchActionVerbs@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CAppointmentsProviderLaunchActionVerbs@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CAppointmentsProviderLaunchActionVerbs@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AddAppointment@CAppointmentsProviderLaunchActionVerbs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_AddAppointment(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RemoveAppointment@CAppointmentsProviderLaunchActionVerbs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_RemoveAppointment(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ReplaceAppointment@CAppointmentsProviderLaunchActionVerbs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_ReplaceAppointment(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ShowTimeFrame@CAppointmentsProviderLaunchActionVerbs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_ShowTimeFrame(HSTRING__* *);
};
