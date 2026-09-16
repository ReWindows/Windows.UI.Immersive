#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 31 member(s).
class CallerIdentity {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z
    long CheckCallerCapability(unsigned short const *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckCapabilityFromImpersonationToken@CallerIdentity@@YAJPEAXPEBGPEA_N@Z
    long CheckCapabilityFromImpersonationToken(void *, unsigned short const *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckCapabilityFromProcessHandle@CallerIdentity@@YAJPEAXPEBGPEA_N@Z
    long CheckCapabilityFromProcessHandle(void *, unsigned short const *, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActiveWindowForCallingThread@CallerIdentity@@YAJPEAPEAUHWND__@@@Z
    long GetActiveWindowForCallingThread(HWND__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCallerProcessImageName@CallerIdentity@@YAJPEAGPEAK@Z
    long GetCallerProcessImageName(unsigned short *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCallingProcessAppId@CallerIdentity@@YAJPEAPEAG@Z
    long GetCallingProcessAppId(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCallingProcessHandle@CallerIdentity@@YAJKPEAPEAX@Z
    long GetCallingProcessHandle(unsigned long, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z
    long GetCallingProcessHandle(unsigned long, int, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCallingProcessId@CallerIdentity@@YAJW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAK@Z
    long GetCallingProcessId(int, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCallingProcessPackageFamilyName@CallerIdentity@@YAJPEAPEAG@Z
    long GetCallingProcessPackageFamilyName(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCallingProcessPackageId@CallerIdentity@@YAJPEAPEAE@Z
    long GetCallingProcessPackageId(unsigned char * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCallingProcessPackageInstallPath@CallerIdentity@@YAJPEAPEAG@Z
    long GetCallingProcessPackageInstallPath(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCoreApplicationForCallingProcess@CallerIdentity@@YAJAEBU_GUID@@PEAPEAX@Z
    long GetCoreApplicationForCallingProcess(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCoreApplicationViewForWindow@CallerIdentity@@YAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z
    long GetCoreApplicationViewForWindow(HWND__*, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCoreWindowForCallingThread@CallerIdentity@@YAJAEBU_GUID@@PEAPEAX@Z
    long GetCoreWindowForCallingThread(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCoreWindowForCurrentThread@CallerIdentity@@YAJAEBU_GUID@@PEAPEAX@Z
    long GetCoreWindowForCurrentThread(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCoreWindowHandleForCallingThread@CallerIdentity@@YAJPEAPEAUHWND__@@@Z
    long GetCoreWindowHandleForCallingThread(HWND__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCoreWindowHandleForCurrentThread@CallerIdentity@@YAJPEAPEAUHWND__@@@Z
    long GetCoreWindowHandleForCurrentThread(HWND__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImmersiveAppIdFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z
    long GetImmersiveAppIdFromWindow(HWND__*, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpersonationTokenFromProcess@CallerIdentity@@YAJPEAXKPEAPEAX@Z
    long GetImpersonationTokenFromProcess(void *, unsigned long, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackageFamilyNameFromProcess@CallerIdentity@@YAJPEAXPEAPEAG@Z
    long GetPackageFamilyNameFromProcess(void *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z
    long GetProcessAppId(void *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProcessTypeFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAW4PROCESS_UICONTEXT@@@Z
    long GetProcessTypeFromWindow(HWND__*, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPsmKeyFromProcessHandle@CallerIdentity@@YAJPEAXPEAPEAG@Z
    long GetPsmKeyFromProcessHandle(void *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPsmKeyFromProcessToken@CallerIdentity@@YAJPEAXPEAPEAG@Z
    long GetPsmKeyFromProcessToken(void *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPsmKeyFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z
    long GetPsmKeyFromWindow(HWND__*, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStateHandle@CallerIdentity@@YAJPEBGPEAPEAX@Z
    long GetStateHandle(unsigned short const *, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWeakWindowAppId@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z
    long GetWeakWindowAppId(HWND__*, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsHostedWindow@CallerIdentity@@YAJPEAUHWND__@@PEAH@Z
    long IsHostedWindow(HWND__*, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsProcessAppContainer@CallerIdentity@@YAJPEAXPEA_N@Z
    long IsProcessAppContainer(void *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureRuntimeBrokerPID@CallerIdentity@@YAXXZ
    void _EnsureRuntimeBrokerPID();
};
