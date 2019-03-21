#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAttributeValueResolver()
{
    py::class_< UAttributeValueResolver,  UObject   >("UAttributeValueResolver")
        .def("StaticClass", &UAttributeValueResolver::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}