#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAction_PushRuleSet(py::module &m)
{
    py::class_< UAction_PushRuleSet,  UActionSequencePawn   >(m, "UAction_PushRuleSet")
		.def_static("StaticClass", &UAction_PushRuleSet::StaticClass, py::return_value_policy::reference)
        .def_readwrite("NewRuleSet", &UAction_PushRuleSet::NewRuleSet)
          ;
}