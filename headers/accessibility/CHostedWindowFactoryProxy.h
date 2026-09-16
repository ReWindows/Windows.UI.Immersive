#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 7 member(s).
class CHostedWindowFactoryProxy {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigureHostedWindow@CHostedWindowFactoryProxy@@UEAAJPEAUIInspectable@@@Z
    virtual long ConfigureHostedWindow(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCoreWindow@CHostedWindowFactoryProxy@@UEAAJPEAUHSTRING__@@PEAPEAUICoreWindow@Core@UI@Windows@@@Z
    virtual long CreateCoreWindow(HSTRING__*, ::Windows::UI::Core::ICoreWindow * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAllowReuse@CHostedWindowFactoryProxy@@UEAAJH@Z
    virtual long SetAllowReuse(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWindowAttributes@CHostedWindowFactoryProxy@@UEAAJK@Z
    virtual long SetWindowAttributes(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_WindowReuseAllowed@CHostedWindowFactoryProxy@@UEAAJPEAE@Z
    virtual long get_WindowReuseAllowed(unsigned char *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigureHostedWindowManager@CHostedWindowFactoryProxy@@AEAAJPEAUICoreWindow@Core@UI@Windows@@PEAVCHostedWindowManager@@@Z
    long ConfigureHostedWindowManager(::Windows::UI::Core::ICoreWindow *, CHostedWindowManager *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_UnmarshalAdditionalData@CHostedWindowFactoryProxy@@EEAAJPEAUIStream@@@Z
    virtual long v_UnmarshalAdditionalData(IStream *);
};
