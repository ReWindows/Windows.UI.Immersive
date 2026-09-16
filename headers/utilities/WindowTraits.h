#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 10 member(s).
namespace Windows::Internal {
class WindowTraits {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanMove@WindowTraits@Internal@Windows@@UEBA_NXZ
    virtual bool CanMove() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnforceAppAttachment@WindowTraits@Internal@Windows@@UEAAX_N@Z
    virtual void EnforceAppAttachment(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnforceDisplayAttachment@WindowTraits@Internal@Windows@@UEAAX_N@Z
    virtual void EnforceDisplayAttachment(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInitialPlacementOffset@WindowTraits@Internal@Windows@@UEBA?AUtagPOINT@@XZ
    virtual tagPOINT GetInitialPlacementOffset() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTaskbarProxyWindow@WindowTraits@Internal@Windows@@UEBAPEAUHWND__@@XZ
    virtual HWND__* GetTaskbarProxyWindow() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSystemModal@WindowTraits@Internal@Windows@@UEBA_NXZ
    virtual bool IsSystemModal() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTabletMode@WindowTraits@Internal@Windows@@UEAAX_N@Z
    virtual void SetTabletMode(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWidthOverride@WindowTraits@Internal@Windows@@UEAAXI@Z
    virtual void SetWidthOverride(unsigned int);
};
} // namespace Windows::Internal
