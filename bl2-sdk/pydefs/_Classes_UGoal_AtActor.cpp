#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGoal_AtActor(py::module &m)
{
    py::class_< UGoal_AtActor,  UPathGoalEvaluator   >(m, "UGoal_AtActor")
		.def_static("StaticClass", &UGoal_AtActor::StaticClass, py::return_value_policy::reference)
        .def_readwrite("GoalActor", &UGoal_AtActor::GoalActor)
        .def_readwrite("GoalDist", &UGoal_AtActor::GoalDist)
        .def("Recycle", &UGoal_AtActor::Recycle)
        .def("AtActor", &UGoal_AtActor::AtActor)
          ;
}