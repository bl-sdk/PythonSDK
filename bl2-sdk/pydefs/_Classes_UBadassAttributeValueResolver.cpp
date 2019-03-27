#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBadassAttributeValueResolver(py::module &m)
{
    py::class_< UBadassAttributeValueResolver,  UAttributeValueResolver   >(m, "UBadassAttributeValueResolver")
		.def_static("StaticClass", &UBadassAttributeValueResolver::StaticClass, py::return_value_policy::reference)
        .def_readwrite("AssociatedBadassReward", &UBadassAttributeValueResolver::AssociatedBadassReward)
          ;
}