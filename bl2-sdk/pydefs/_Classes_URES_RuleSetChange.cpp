#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_URES_RuleSetChange(py::module &m)
{
    py::class_< URES_RuleSetChange,  UActionResource   >(m, "URES_RuleSetChange")
		.def_static("StaticClass", &URES_RuleSetChange::StaticClass, py::return_value_policy::reference)
          ;
}