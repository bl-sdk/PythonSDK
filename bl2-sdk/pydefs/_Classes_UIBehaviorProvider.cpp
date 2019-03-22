#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIBehaviorProvider(py::module &m)
{
    py::class_< UIBehaviorProvider,  UInterface   >(m, "UIBehaviorProvider")
        .def("SetBehaviorProviderDefinition", &UIBehaviorProvider::SetBehaviorProviderDefinition)
        .def("GetBehaviorProviderDefinition", &UIBehaviorProvider::GetBehaviorProviderDefinition, py::return_value_policy::reference)
          ;
}