#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UFiringBehaviorDefinition(py::module &m)
{
    py::class_< UFiringBehaviorDefinition,  UGBXDefinition   >(m, "UFiringBehaviorDefinition")
        .def_readwrite("ConditionalPatterns", &UFiringBehaviorDefinition::ConditionalPatterns)
          ;
}