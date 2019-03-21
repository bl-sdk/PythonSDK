#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBalancedActorAttributeContextResolver()
{
    py::class_< UBalancedActorAttributeContextResolver,  UAttributeContextResolver   >("UBalancedActorAttributeContextResolver")
        .def("StaticClass", &UBalancedActorAttributeContextResolver::StaticClass, py::return_value_policy::reference)
        .def("GetAttributeContext", &UBalancedActorAttributeContextResolver::GetAttributeContext, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}