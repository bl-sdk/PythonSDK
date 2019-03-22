#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBlackMarketUpgradeAttributeValueResolver(py::module &m)
{
    py::class_< UBlackMarketUpgradeAttributeValueResolver,  UAttributeValueResolver   >(m, "UBlackMarketUpgradeAttributeValueResolver")
        .def_readwrite("AssociatedBlackMarketUpgrade", &UBlackMarketUpgradeAttributeValueResolver::AssociatedBlackMarketUpgrade)
          ;
}