#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBalancedActorAttributeContextResolver(py::module &m)
{
    py::class_< UBalancedActorAttributeContextResolver,  UAttributeContextResolver   >(m, "UBalancedActorAttributeContextResolver")
        .def("StaticClass", &UBalancedActorAttributeContextResolver::StaticClass, py::return_value_policy::reference)
        .def("GetAttributeContext", &UBalancedActorAttributeContextResolver::GetAttributeContext, py::return_value_policy::reference)
          ;
}