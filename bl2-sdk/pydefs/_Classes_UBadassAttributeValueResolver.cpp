#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBadassAttributeValueResolver()
{
    py::class_< UBadassAttributeValueResolver,  UAttributeValueResolver   >("UBadassAttributeValueResolver")
        .def_readwrite("AssociatedBadassReward", &UBadassAttributeValueResolver::AssociatedBadassReward)
        .def("StaticClass", &UBadassAttributeValueResolver::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}