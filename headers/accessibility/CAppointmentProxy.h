#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 4 member(s).
class CAppointmentProxy {
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetHandlerCLSID@CAppointmentProxy@@EEAAAEBU_GUID@@XZ
    virtual _GUID const & v_GetHandlerCLSID();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_UnmarshalOrReleaseAdditionalData@CAppointmentProxy@@EEAAJW4UnmarshalAction@@PEAUIStream@@@Z
    virtual long v_UnmarshalOrReleaseAdditionalData(int, IStream *);
};
