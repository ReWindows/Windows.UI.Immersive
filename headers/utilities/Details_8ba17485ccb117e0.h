#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 212 member(s).
namespace Microsoft::WRL {
class Details {
public:
    class EventTargetArray;
    class ModuleBase;
    class WeakReferenceImpl;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateWeakReference@Details@WRL@Microsoft@@YAPEAVWeakReferenceImpl@123@PEAUIUnknown@@@Z
    WindissectOpaque * CreateWeakReference(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z
    void RaiseException(long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z
    unsigned long SafeUnknownDecrementReference(long volatile &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z
    unsigned long SafeUnknownIncrementReference(long volatile &);
};
} // namespace Microsoft::WRL
