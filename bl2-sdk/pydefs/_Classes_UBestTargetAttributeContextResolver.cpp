#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBestTargetAttributeContextResolver()
{
    py::class_< UBestTargetAttributeContextResolver,  UAttributeContextResolver   >("UBestTargetAttributeContextResolver")
        .def("StaticClass", &UBestTargetAttributeContextResolver::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}