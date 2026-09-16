#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 10 member(s).
class CAceList {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CAceList@@SAJPEAU_ACL@@PEAXPEAPEAV1@H@Z
    static long CreateInstance(_ACL *, void *, CAceList * *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAclForExplicitEntries@CAceList@@QEAAJPEAXPEAPEAU_ACL@@@Z
    long GetAclForExplicitEntries(void *, _ACL * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAceList@@QEAA@XZ
    ~CAceList();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddAllowedAceToAcl@CAceList@@AEAAJQEAVCAce@@_NPEAU_ACL@@@Z
    long _AddAllowedAceToAcl(CAce * const, bool, _ACL *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddExplicitAceToDpa@CAceList@@AEAAJAEAV?$CDPA@VCAce@@V?$CTContainer_PolicyUnOwned@VCAce@@@@@@PEAVCAce@@@Z
    long _AddExplicitAceToDpa(WindissectOpaque &, CAce *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetRequiredExplictAclSize@CAceList@@AEAAKPEAXAEAV?$CDPA@VCAce@@V?$CTContainer_PolicyUnOwned@VCAce@@@@@@@Z
    unsigned long _GetRequiredExplictAclSize(void *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitFromAcl@CAceList@@AEAAJPEAU_ACL@@@Z
    long _InitFromAcl(_ACL *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitFromAclAndSD@CAceList@@AEAAJPEAU_ACL@@PEAXH@Z
    long _InitFromAclAndSD(_ACL *, void *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_FindAce@CAceList@@AEAAPEAVCAce@@AEAV?$CDPA@VCAce@@V?$CTContainer_PolicyUnOwned@VCAce@@@@@@PEAXEPEBV2@@Z
    CAce * s_FindAce(WindissectOpaque &, void *, unsigned char, CAce const *);
};
