#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UTargetMetaInfoValueResolver()
{
    py::class_< UTargetMetaInfoValueResolver,  UAttributeValueResolver   >("UTargetMetaInfoValueResolver")
        .def_readwrite("PropertyName", &UTargetMetaInfoValueResolver::PropertyName)
        .def("StaticClass", &UTargetMetaInfoValueResolver::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}