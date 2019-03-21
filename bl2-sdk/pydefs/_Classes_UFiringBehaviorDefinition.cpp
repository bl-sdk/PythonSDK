#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UFiringBehaviorDefinition()
{
    py::class_< UFiringBehaviorDefinition,  UGBXDefinition   >("UFiringBehaviorDefinition")
        .def_readwrite("ConditionalPatterns", &UFiringBehaviorDefinition::ConditionalPatterns)
        .def("StaticClass", &UFiringBehaviorDefinition::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}