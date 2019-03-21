#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UNoContextNeededAttributeContextResolver()
{
    py::class_< UNoContextNeededAttributeContextResolver,  UAttributeContextResolver   >("UNoContextNeededAttributeContextResolver")
        .def("StaticClass", &UNoContextNeededAttributeContextResolver::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}