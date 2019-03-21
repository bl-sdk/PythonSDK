#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGearboxMindAttributeContextResolver()
{
    py::class_< UGearboxMindAttributeContextResolver,  UAttributeContextResolver   >("UGearboxMindAttributeContextResolver")
        .def("StaticClass", &UGearboxMindAttributeContextResolver::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}