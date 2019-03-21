#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_URES_RuleSetChange()
{
    py::class_< URES_RuleSetChange,  UActionResource   >("URES_RuleSetChange")
        .def("StaticClass", &URES_RuleSetChange::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}