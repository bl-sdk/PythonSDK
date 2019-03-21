#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_URuleContainer()
{
    py::class_< URuleContainer,  URule   >("URuleContainer")
        .def_readwrite("RuleSetTemplate", &URuleContainer::RuleSetTemplate)
        .def_readwrite("CurRuleSet", &URuleContainer::CurRuleSet)
        .def("StaticClass", &URuleContainer::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}