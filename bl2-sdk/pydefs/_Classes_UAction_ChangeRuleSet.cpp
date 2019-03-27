#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAction_ChangeRuleSet(py::module &m)
{
    py::class_< UAction_ChangeRuleSet,  UActionSequence   >(m, "UAction_ChangeRuleSet")
		.def_static("StaticClass", &UAction_ChangeRuleSet::StaticClass, py::return_value_policy::reference)
        .def_readwrite("NewRuleSet", &UAction_ChangeRuleSet::NewRuleSet)
          ;
}