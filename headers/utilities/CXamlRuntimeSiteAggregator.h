#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Immersive.dll by Windissect. 10 member(s).
class CXamlRuntimeSiteAggregator {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Append@CXamlRuntimeSiteAggregator@@UEAAJPEAUIUnknown@@@Z
    virtual long Append(IUnknown *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CXamlRuntimeSiteAggregator@@QEAA@XZ
    CXamlRuntimeSiteAggregator();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetXamlType@CXamlRuntimeSiteAggregator@@UEAAJUTypeName@Interop@Xaml@UI@Windows@@PEAPEAUIXamlType@Markup@456@@Z
    virtual long GetXamlType(::Windows::UI::Xaml::Interop::TypeName, ::Windows::UI::Xaml::Markup::IXamlType * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetXamlTypeByFullName@CXamlRuntimeSiteAggregator@@UEAAJPEAUHSTRING__@@PEAPEAUIXamlType@Markup@Xaml@UI@Windows@@@Z
    virtual long GetXamlTypeByFullName(HSTRING__*, ::Windows::UI::Xaml::Markup::IXamlType * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetXmlnsDefinitions@CXamlRuntimeSiteAggregator@@UEAAJPEAIPEAPEAUXmlnsDefinition@Markup@Xaml@UI@Windows@@@Z
    virtual long GetXmlnsDefinitions(unsigned int *, ::Windows::UI::Xaml::Markup::XmlnsDefinition * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Remove@CXamlRuntimeSiteAggregator@@UEAAJPEAUIUnknown@@@Z
    virtual long Remove(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CXamlRuntimeSiteAggregator@@QEAAJXZ
    long RuntimeClassInitialize();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CXamlRuntimeSiteAggregator@@UEAA@XZ
    virtual ~CXamlRuntimeSiteAggregator();
};
