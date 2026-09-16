#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 35 member(s).
class CAppointmentRecurrence {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CAppointmentRecurrence@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CAppointmentRecurrence@@QEAA@XZ
    CAppointmentRecurrence();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CAppointmentRecurrence@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CAppointmentRecurrence@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CAppointmentRecurrence@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@CAppointmentRecurrence@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@CAppointmentRecurrence@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CAppointmentRecurrence@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CAppointmentRecurrence@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Day@CAppointmentRecurrence@@UEAAJPEAI@Z
    virtual long get_Day(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DaysOfWeek@CAppointmentRecurrence@@UEAAJPEAW4AppointmentDaysOfWeek@Appointments@ApplicationModel@Windows@@@Z
    virtual long get_DaysOfWeek(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Interval@CAppointmentRecurrence@@UEAAJPEAI@Z
    virtual long get_Interval(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Month@CAppointmentRecurrence@@UEAAJPEAI@Z
    virtual long get_Month(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Occurrences@CAppointmentRecurrence@@UEAAJPEAPEAU?$IReference@I@Foundation@Windows@@@Z
    virtual long get_Occurrences(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Unit@CAppointmentRecurrence@@UEAAJPEAW4AppointmentRecurrenceUnit@Appointments@ApplicationModel@Windows@@@Z
    virtual long get_Unit(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Until@CAppointmentRecurrence@@UEAAJPEAPEAU?$IReference@UDateTime@Foundation@Windows@@@Foundation@Windows@@@Z
    virtual long get_Until(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_WeekOfMonth@CAppointmentRecurrence@@UEAAJPEAW4AppointmentWeekOfMonth@Appointments@ApplicationModel@Windows@@@Z
    virtual long get_WeekOfMonth(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Day@CAppointmentRecurrence@@UEAAJI@Z
    virtual long put_Day(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_DaysOfWeek@CAppointmentRecurrence@@UEAAJW4AppointmentDaysOfWeek@Appointments@ApplicationModel@Windows@@@Z
    virtual long put_DaysOfWeek(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Interval@CAppointmentRecurrence@@UEAAJI@Z
    virtual long put_Interval(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Month@CAppointmentRecurrence@@UEAAJI@Z
    virtual long put_Month(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Occurrences@CAppointmentRecurrence@@UEAAJPEAU?$IReference@I@Foundation@Windows@@@Z
    virtual long put_Occurrences(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Unit@CAppointmentRecurrence@@UEAAJW4AppointmentRecurrenceUnit@Appointments@ApplicationModel@Windows@@@Z
    virtual long put_Unit(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Until@CAppointmentRecurrence@@UEAAJPEAU?$IReference@UDateTime@Foundation@Windows@@@Foundation@Windows@@@Z
    virtual long put_Until(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_WeekOfMonth@CAppointmentRecurrence@@UEAAJW4AppointmentWeekOfMonth@Appointments@ApplicationModel@Windows@@@Z
    virtual long put_WeekOfMonth(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAppointmentRecurrence@@UEAA@XZ
    virtual ~CAppointmentRecurrence();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Initialize@CAppointmentRecurrence@@AEAAJPEAUIAppointmentRecurrence@Appointments@ApplicationModel@Windows@@@Z
    long _Initialize(::Windows::ApplicationModel::Appointments::IAppointmentRecurrence *);
};
