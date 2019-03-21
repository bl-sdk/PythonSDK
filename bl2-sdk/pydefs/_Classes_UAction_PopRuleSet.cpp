#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAction_PopRuleSet()
{
    py::class_< UAction_PopRuleSet,  UActionSequencePawn   >("UAction_PopRuleSet")
        .def("StaticClass", &UAction_PopRuleSet::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}