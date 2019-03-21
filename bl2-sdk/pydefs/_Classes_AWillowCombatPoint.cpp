#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWillowCombatPoint()
{
    py::class_< AWillowCombatPoint,  AActor   >("AWillowCombatPoint")
        .def_readwrite("ConstraintType", &AWillowCombatPoint::ConstraintType)
        .def_readwrite("ConstraintTags", &AWillowCombatPoint::ConstraintTags)
        .def("StaticClass", &AWillowCombatPoint::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}