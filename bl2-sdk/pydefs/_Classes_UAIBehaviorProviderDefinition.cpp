#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAIBehaviorProviderDefinition()
{
    py::class_< UAIBehaviorProviderDefinition,  UBehaviorProviderDefinition   >("UAIBehaviorProviderDefinition")
        .def("StaticClass", &UAIBehaviorProviderDefinition::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}