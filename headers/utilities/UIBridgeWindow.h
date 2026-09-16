#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 23 member(s).
// Base evidence: DirectUI::Element (likely; classinfo-template-instantiation).
class UIBridgeWindow {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?BridgeWindowPositionProp@UIBridgeWindow@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * BridgeWindowPositionProp();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@UIBridgeWindow@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetElementProvider@UIBridgeWindow@@QEAAJPEAPEAUIRawElementProviderFragment@@@Z
    long GetElementProvider(IRawElementProviderFragment * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetElementProviderImpl@UIBridgeWindow@@UEAAJPEAVInvokeHelper@DirectUI@@PEAPEAVElementProvider@3@@Z
    virtual long GetElementProviderImpl(::DirectUI::InvokeHelper *, ::DirectUI::ElementProvider * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HideSplashScreen@UIBridgeWindow@@QEAAXXZ
    void HideSplashScreen();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDestroy@UIBridgeWindow@@UEAAXXZ
    virtual void OnDestroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEvent@UIBridgeWindow@@UEAAXPEAUEvent@DirectUI@@@Z
    virtual void OnEvent(::DirectUI::Event *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHosted@UIBridgeWindow@@UEAAXPEAVElement@DirectUI@@@Z
    virtual void OnHosted(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@UIBridgeWindow@@UEAAXPEBUPropertyInfo@DirectUI@@HPEAVValue@3@1@Z
    virtual void OnPropertyChanged(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUnHosted@UIBridgeWindow@@UEAAXPEAVElement@DirectUI@@@Z
    virtual void OnUnHosted(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@UIBridgeWindow@@SAJXZ
    static long Register();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBridgeWindow@UIBridgeWindow@@QEAAXPEAUHWND__@@@Z
    void SetBridgeWindow(HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCrashText@UIBridgeWindow@@QEAAJPEAVElement@DirectUI@@@Z
    long SetCrashText(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SelfLayoutDoLayout@UIBridgeWindow@@UEAAXHH@Z
    virtual void _SelfLayoutDoLayout(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SelfLayoutUpdateDesiredSize@UIBridgeWindow@@UEAA?AUtagSIZE@@HHPEAVSurface@DirectUI@@@Z
    virtual tagSIZE _SelfLayoutUpdateDesiredSize(int, int, ::DirectUI::Surface *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1UIBridgeWindow@@UEAA@XZ
    virtual ~UIBridgeWindow();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PostSimpleEvent@UIBridgeWindow@@AEAAXVUID@@@Z
    void _PostSimpleEvent(UID);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UnregisterSubclassProc@UIBridgeWindow@@AEAAXXZ
    void _UnregisterSubclassProc();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateBridgeWindowPosition@UIBridgeWindow@@AEAAXXZ
    void _UpdateBridgeWindowPosition();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateBridgeWindowPositionAsync@UIBridgeWindow@@AEAAXXZ
    void _UpdateBridgeWindowPositionAsync();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_SubclassProc@UIBridgeWindow@@CA_JPEAUHWND__@@I_K_J11@Z
    static int64_t s_SubclassProc(HWND__*, unsigned int, uint64_t, int64_t, uint64_t, uint64_t);
};
