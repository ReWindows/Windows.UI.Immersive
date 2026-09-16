#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 8 member(s).
class CDUIResourceManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateElement@CDUIResourceManager@@QEBAJPEBGPEAVElement@DirectUI@@1PEAKPEAPEAV23@@Z
    long CreateElement(unsigned short const *, ::DirectUI::Element *, ::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParserForThread@CDUIResourceManager@@QEBAPEAVDUIXmlParser@DirectUI@@XZ
    ::DirectUI::DUIXmlParser * GetParserForThread() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitThread@CDUIResourceManager@@QEAAJIW4DUI_RESOURCE_MANAGER_INIT_FLAGS@@@Z
    long InitThread(unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UninitThread@CDUIResourceManager@@QEAAXXZ
    void UninitThread();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResourceId@CDUIResourceManager@@AEAAIXZ
    unsigned int GetResourceId();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetRefCountedParserForThread@CDUIResourceManager@@AEBAPEAUREFCOUNTEDPARSER@1@XZ
    WindissectOpaque * _GetRefCountedParserForThread() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitParserForThread@CDUIResourceManager@@AEAAJXZ
    long _InitParserForThread();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UnregisterElements@CDUIResourceManager@@AEAAXI@Z
    void _UnregisterElements(unsigned int);
};
