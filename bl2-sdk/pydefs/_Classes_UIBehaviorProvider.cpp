#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIBehaviorProvider(py::object m)
{
    py::class_< UIBehaviorProvider,  UInterface   >(m, "UIBehaviorProvider")
        .def("StaticClass", &UIBehaviorProvider::StaticClass, py::return_value_policy::reference)
        .def("SetBehaviorProviderDefinition", &UIBehaviorProvider::SetBehaviorProviderDefinition)
        .def("GetBehaviorProviderDefinition", &UIBehaviorProvider::GetBehaviorProviderDefinition, py::return_value_policy::reference)
          ;
}