#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UNavMeshGoal_ClosestActorInList(py::module &m)
{
    py::class_< UNavMeshGoal_ClosestActorInList,  UNavMeshPathGoalEvaluator   >(m, "UNavMeshGoal_ClosestActorInList")
        .def_readwrite("GoalList", &UNavMeshGoal_ClosestActorInList::GoalList)
        .def_readwrite("PolyToGoalActorMap", &UNavMeshGoal_ClosestActorInList::PolyToGoalActorMap)
        .def_readwrite("CachedAnchorPoly", &UNavMeshGoal_ClosestActorInList::CachedAnchorPoly)
        .def("StaticClass", &UNavMeshGoal_ClosestActorInList::StaticClass, py::return_value_policy::reference)
        .def("RecycleInternal", &UNavMeshGoal_ClosestActorInList::RecycleInternal)
        .def("eventRecycle", &UNavMeshGoal_ClosestActorInList::eventRecycle)
        .def("ClosestActorInList", &UNavMeshGoal_ClosestActorInList::ClosestActorInList, py::return_value_policy::reference)
          ;
}