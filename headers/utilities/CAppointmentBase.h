#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 27 member(s).
class CAppointmentBase {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AllDay@CAppointmentBase@@UEAAJPEAE@Z
    virtual long get_AllDay(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BusyStatus@CAppointmentBase@@UEAAJPEAW4AppointmentBusyStatus@Appointments@ApplicationModel@Windows@@@Z
    virtual long get_BusyStatus(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Details@CAppointmentBase@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Details(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Duration@CAppointmentBase@@UEAAJPEAUTimeSpan@Foundation@Windows@@@Z
    virtual long get_Duration(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Invitees@CAppointmentBase@@UEAAJPEAPEAU?$IVector@PEAVAppointmentInvitee@Appointments@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long get_Invitees(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Location@CAppointmentBase@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Location(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Organizer@CAppointmentBase@@UEAAJPEAPEAUIAppointmentParticipant@Appointments@ApplicationModel@Windows@@@Z
    virtual long get_Organizer(::Windows::ApplicationModel::Appointments::IAppointmentParticipant * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Recurrence@CAppointmentBase@@UEAAJPEAPEAUIAppointmentRecurrence@Appointments@ApplicationModel@Windows@@@Z
    virtual long get_Recurrence(::Windows::ApplicationModel::Appointments::IAppointmentRecurrence * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Reminder@CAppointmentBase@@UEAAJPEAPEAU?$IReference@UTimeSpan@Foundation@Windows@@@Foundation@Windows@@@Z
    virtual long get_Reminder(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Sensitivity@CAppointmentBase@@UEAAJPEAW4AppointmentSensitivity@Appointments@ApplicationModel@Windows@@@Z
    virtual long get_Sensitivity(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_StartTime@CAppointmentBase@@UEAAJPEAUDateTime@Foundation@Windows@@@Z
    virtual long get_StartTime(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Subject@CAppointmentBase@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Subject(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Uri@CAppointmentBase@@UEAAJPEAPEAUIUriRuntimeClass@Foundation@Windows@@@Z
    virtual long get_Uri(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_AllDay@CAppointmentBase@@UEAAJE@Z
    virtual long put_AllDay(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_BusyStatus@CAppointmentBase@@UEAAJW4AppointmentBusyStatus@Appointments@ApplicationModel@Windows@@@Z
    virtual long put_BusyStatus(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Details@CAppointmentBase@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_Details(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Duration@CAppointmentBase@@UEAAJUTimeSpan@Foundation@Windows@@@Z
    virtual long put_Duration(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Location@CAppointmentBase@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_Location(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Organizer@CAppointmentBase@@UEAAJPEAUIAppointmentParticipant@Appointments@ApplicationModel@Windows@@@Z
    virtual long put_Organizer(::Windows::ApplicationModel::Appointments::IAppointmentParticipant *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Recurrence@CAppointmentBase@@UEAAJPEAUIAppointmentRecurrence@Appointments@ApplicationModel@Windows@@@Z
    virtual long put_Recurrence(::Windows::ApplicationModel::Appointments::IAppointmentRecurrence *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Reminder@CAppointmentBase@@UEAAJPEAU?$IReference@UTimeSpan@Foundation@Windows@@@Foundation@Windows@@@Z
    virtual long put_Reminder(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Sensitivity@CAppointmentBase@@UEAAJW4AppointmentSensitivity@Appointments@ApplicationModel@Windows@@@Z
    virtual long put_Sensitivity(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_StartTime@CAppointmentBase@@UEAAJUDateTime@Foundation@Windows@@@Z
    virtual long put_StartTime(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Subject@CAppointmentBase@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_Subject(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Uri@CAppointmentBase@@UEAAJPEAUIUriRuntimeClass@Foundation@Windows@@@Z
    virtual long put_Uri(WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAppointmentBase@@QEAA@XZ
    ~CAppointmentBase();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Initialize@CAppointmentBase@@IEAAJPEAUIAppointment@Appointments@ApplicationModel@Windows@@@Z
    long _Initialize(::Windows::ApplicationModel::Appointments::IAppointment *);
};
