#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 9 member(s).
class CLockScreenHistoryList {
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureHistoryLoaded@CLockScreenHistoryList@@IEAA_N_N@Z
    bool _EnsureHistoryLoaded(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureHistoryOrderLoaded@CLockScreenHistoryList@@IEAAJXZ
    long _EnsureHistoryOrderLoaded();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FindEntry@CLockScreenHistoryList@@IEAAHPEAUIShellItem@@H_N@Z
    int _FindEntry(IShellItem *, int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FindEntryWithMatchingImageBits@CLockScreenHistoryList@@IEAAHPEAVCLockScreenHistoryEntry@CLockScreenHistory@@_N@Z
    int _FindEntryWithMatchingImageBits(WindissectOpaque *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LoadHistory@CLockScreenHistoryList@@IEAAJ_N@Z
    long _LoadHistory(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SaveHistory@CLockScreenHistoryList@@IEAAJXZ
    long _SaveHistory();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateHistoryOrderAndBackupIndex@CLockScreenHistoryList@@IEAAJPEBG@Z
    long _UpdateHistoryOrderAndBackupIndex(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_s_AreBitmapsEqual@CLockScreenHistoryList@@KA_NPEAUHBITMAP__@@0@Z
    static bool _s_AreBitmapsEqual(HBITMAP__*, HBITMAP__*);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CLockScreenHistoryList@@IEAA@XZ
    ~CLockScreenHistoryList();
};
