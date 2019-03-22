#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIRuleEngineOwner(py::module &m)
{
    py::class_< UIRuleEngineOwner,  UInterface   >(m, "UIRuleEngineOwner")
        .def("StaticClass", &UIRuleEngineOwner::StaticClass, py::return_value_policy::reference)
        .def("GetRuleEngine", &UIRuleEngineOwner::GetRuleEngine, py::return_value_policy::reference)
          ;
}