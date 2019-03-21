#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGoal_AtActor(py::object m)
{
    py::class_< UGoal_AtActor,  UPathGoalEvaluator   >(m, "UGoal_AtActor")
        .def_readwrite("GoalActor", &UGoal_AtActor::GoalActor)
        .def_readwrite("GoalDist", &UGoal_AtActor::GoalDist)
        .def("StaticClass", &UGoal_AtActor::StaticClass, py::return_value_policy::reference)
        .def("Recycle", &UGoal_AtActor::Recycle)
        .def("AtActor", &UGoal_AtActor::AtActor)
          ;
}