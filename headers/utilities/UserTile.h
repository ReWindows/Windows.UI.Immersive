#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 22 member(s).
// Base evidence: DirectUI::Element (likely; classinfo-template-instantiation).
class UserTile {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@UserTile@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetImagePath@UserTile@@QEAAJPEBG@Z
    long SetImagePath(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetStaticMode@UserTile@@QEAAJ_N@Z
    long SetStaticMode(bool);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0UserTile@@QEAA@XZ
    UserTile();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1UserTile@@UEAA@XZ
    virtual ~UserTile();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDestroy@UserTile@@MEAAXXZ
    virtual void OnDestroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHosted@UserTile@@MEAAXPEAVElement@DirectUI@@@Z
    virtual void OnHosted(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@UserTile@@MEAAXPEBUPropertyInfo@DirectUI@@HPEAVValue@3@1@Z
    virtual void OnPropertyChanged(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUnHosted@UserTile@@MEAAXPEAVElement@DirectUI@@@Z
    virtual void OnUnHosted(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_WndProc@UserTile@@MEAA_JPEAUHWND__@@I_K_J@Z
    virtual int64_t v_WndProc(HWND__*, unsigned int, uint64_t, int64_t);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CanUseDynamicTile@UserTile@@AEAA_NXZ
    bool _CanUseDynamicTile();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureUserTileStore@UserTile@@AEAAJXZ
    long _EnsureUserTileStore();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetDynamicTile@UserTile@@AEAAJI_NPEAPEAVElement@DirectUI@@@Z
    long _GetDynamicTile(unsigned int, bool, ::DirectUI::Element * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetStaticTile@UserTile@@AEAAJI_NPEAPEAVElement@DirectUI@@@Z
    long _GetStaticTile(unsigned int, bool, ::DirectUI::Element * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetBehaviorHelper@UserTile@@AEAAXPEAVElement@DirectUI@@PEBG@Z
    void _SetBehaviorHelper(::DirectUI::Element *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetUserInternal@UserTile@@AEAAJPEBG_N@Z
    long _SetUserInternal(unsigned short const *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetVisibleTile@UserTile@@AEAAXPEAVElement@DirectUI@@_N1@Z
    void _SetVisibleTile(::DirectUI::Element *, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShutdownUserTileChangeListener@UserTile@@AEAAXXZ
    void _ShutdownUserTileChangeListener();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateTile@UserTile@@AEAAJ_N0@Z
    long _UpdateTile(bool, bool);
};
