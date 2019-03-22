#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAIBehaviorProviderDefinition(py::module &m)
{
    py::class_< UAIBehaviorProviderDefinition,  UBehaviorProviderDefinition   >(m, "UAIBehaviorProviderDefinition")
        .def("StaticClass", &UAIBehaviorProviderDefinition::StaticClass, py::return_value_policy::reference)
          ;
}