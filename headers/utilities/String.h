#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 8 member(s).
namespace Windows::Internal {
class String {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompareOrdinal@String@Internal@Windows@@QEBAHAEBV123@@Z
    int CompareOrdinal(::Windows::Internal::String const &) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLpcwstr@String@Internal@Windows@@QEBAJPEAPEBG@Z
    long GetLpcwstr(unsigned short const * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@String@Internal@Windows@@QEAAJAEBQEAUHSTRING__@@@Z
    long Initialize(HSTRING__* const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Substring@String@Internal@Windows@@QEBAJIIPEAV123@@Z
    long Substring(unsigned int, unsigned int, ::Windows::Internal::String *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Substring@String@Internal@Windows@@QEBAJIPEAV123@@Z
    long Substring(unsigned int, ::Windows::Internal::String *) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1String@Internal@Windows@@QEAA@XZ
    ~String();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FreeAndAssignOnSuccess@String@Internal@Windows@@CAJJPEAUHSTRING__@@PEAPEAU4@@Z
    static long FreeAndAssignOnSuccess(long, HSTRING__*, HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitializeHelper@String@Internal@Windows@@AEAAJPEBG@Z
    long _InitializeHelper(unsigned short const *);
};
} // namespace Windows::Internal
