#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 7 member(s).
class CGetSessionInitiationProtocolUriTask {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTask@CGetSessionInitiationProtocolUriTask@@QEAAJPEAPEAU?$IAsyncOperation@PEAVUri@Foundation@Windows@@@Foundation@Windows@@@Z
    long CreateTask(WindissectOpaque * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetSessionInitiationProtocolUri@CGetSessionInitiationProtocolUriTask@@AEAAJPEAPEAUIUriRuntimeClass@Foundation@Windows@@@Z
    long _GetSessionInitiationProtocolUri(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetUriForCurrentDomain@CGetSessionInitiationProtocolUriTask@@AEAAJPEBGAEAVString@Internal@Windows@@@Z
    long _GetUriForCurrentDomain(unsigned short const *, ::Windows::Internal::String &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetUriForMultipleForests@CGetSessionInitiationProtocolUriTask@@AEAAJAEAVString@Internal@Windows@@@Z
    long _GetUriForMultipleForests(::Windows::Internal::String &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_QueryActiveDirectory@CGetSessionInitiationProtocolUriTask@@AEAAJPEBGKPEAPEBG0_N2PEA_NAEAVString@Internal@Windows@@@Z
    long _QueryActiveDirectory(unsigned short const *, unsigned long, unsigned short const * *, unsigned short const *, bool, bool, bool *, ::Windows::Internal::String &);
};
