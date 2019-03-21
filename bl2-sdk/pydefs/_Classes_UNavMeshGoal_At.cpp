#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UNavMeshGoal_At(py::object m)
{
    py::class_< UNavMeshGoal_At,  UNavMeshPathGoalEvaluator   >(m, "UNavMeshGoal_At")
        .def_readwrite("Goal", &UNavMeshGoal_At::Goal)
        .def_readwrite("GoalDist", &UNavMeshGoal_At::GoalDist)
        .def_readwrite("PartialDistSq", &UNavMeshGoal_At::PartialDistSq)
        .def_readwrite("GoalPoly", &UNavMeshGoal_At::GoalPoly)
        .def_readwrite("PartialGoal", &UNavMeshGoal_At::PartialGoal)
        .def("StaticClass", &UNavMeshGoal_At::StaticClass, py::return_value_policy::reference)
        .def("Recycle", &UNavMeshGoal_At::Recycle)
        .def("AtLocation", &UNavMeshGoal_At::AtLocation)
        .def("AtActor", &UNavMeshGoal_At::AtActor)
        .def("RecycleNative", &UNavMeshGoal_At::RecycleNative)
          ;
}