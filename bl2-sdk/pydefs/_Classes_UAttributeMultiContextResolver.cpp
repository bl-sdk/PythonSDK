#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAttributeMultiContextResolver()
{
    py::class_< UAttributeMultiContextResolver,  UObject   >("UAttributeMultiContextResolver")
        .def("StaticClass", &UAttributeMultiContextResolver::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}