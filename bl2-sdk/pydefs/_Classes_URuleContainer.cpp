#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_URuleContainer(py::module &m)
{
    py::class_< URuleContainer,  URule   >(m, "URuleContainer")
		.def_static("StaticClass", &URuleContainer::StaticClass, py::return_value_policy::reference)
        .def_readwrite("RuleSetTemplate", &URuleContainer::RuleSetTemplate)
        .def_readwrite("CurRuleSet", &URuleContainer::CurRuleSet)
          ;
}