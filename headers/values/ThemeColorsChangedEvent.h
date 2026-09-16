#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 20 member(s).
namespace ApplicationTheme {
class ThemeColorsChangedEvent {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddHandler@ThemeColorsChangedEvent@ApplicationTheme@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long AddHandler(WindissectOpaque *, EventRegistrationToken *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ThemeColorsChangedEvent@ApplicationTheme@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@ThemeColorsChangedEvent@ApplicationTheme@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@ThemeColorsChangedEvent@ApplicationTheme@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@ThemeColorsChangedEvent@ApplicationTheme@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ThemeColorsChangedEvent@ApplicationTheme@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ThemeColorsChangedEvent@ApplicationTheme@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveHandler@ThemeColorsChangedEvent@ApplicationTheme@@UEAAJUEventRegistrationToken@@@Z
    virtual long RemoveHandler(EventRegistrationToken);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ThemeColorsChangedEvent@ApplicationTheme@@QEAA@XZ
    ThemeColorsChangedEvent();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cleanup@ThemeColorsChangedEvent@ApplicationTheme@@AEAAXXZ
    void Cleanup();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegistryChangeCallback_ColorChanged@ThemeColorsChangedEvent@ApplicationTheme@@CAXPEAV12@@Z
    static void RegistryChangeCallback_ColorChanged(WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ThemeColorsChangedEvent@ApplicationTheme@@EEAA@XZ
    virtual ~ThemeColorsChangedEvent();
};
} // namespace ApplicationTheme
