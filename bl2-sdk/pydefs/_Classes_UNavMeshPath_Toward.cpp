#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UNavMeshPath_Toward()
{
    py::class_< UNavMeshPath_Toward,  UNavMeshPathConstraint   >("UNavMeshPath_Toward")
        .def_readwrite("GoalActor", &UNavMeshPath_Toward::GoalActor)
        .def_readwrite("GoalPoint", &UNavMeshPath_Toward::GoalPoint)
        .def("StaticClass", &UNavMeshPath_Toward::StaticClass, py::return_value_policy::reference)
        .def("Recycle", &UNavMeshPath_Toward::Recycle)
        .def("TowardPoint", &UNavMeshPath_Toward::TowardPoint)
        .def("TowardGoal", &UNavMeshPath_Toward::TowardGoal)
        .staticmethod("StaticClass")
  ;
}