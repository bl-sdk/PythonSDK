#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPath_TowardGoal()
{
    py::class_< UPath_TowardGoal,  UPathConstraint   >("UPath_TowardGoal")
        .def_readwrite("GoalActor", &UPath_TowardGoal::GoalActor)
        .def("StaticClass", &UPath_TowardGoal::StaticClass, py::return_value_policy::reference)
        .def("Recycle", &UPath_TowardGoal::Recycle)
        .def("TowardGoal", &UPath_TowardGoal::TowardGoal)
        .staticmethod("StaticClass")
  ;
}