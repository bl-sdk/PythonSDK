#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWillowCombatPoint(py::module &m)
{
    py::class_< AWillowCombatPoint,  AActor   >(m, "AWillowCombatPoint")
		.def_static("StaticClass", &AWillowCombatPoint::StaticClass, py::return_value_policy::reference)
        .def_readwrite("ConstraintType", &AWillowCombatPoint::ConstraintType)
        .def_readwrite("ConstraintTags", &AWillowCombatPoint::ConstraintTags)
          ;
}