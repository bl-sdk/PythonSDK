#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UNavMeshGoal_ClosestActorInList()
{
    class_< UNavMeshGoal_ClosestActorInList, bases< UNavMeshPathGoalEvaluator >  , boost::noncopyable>("UNavMeshGoal_ClosestActorInList", no_init)
        .def_readwrite("GoalList", &UNavMeshGoal_ClosestActorInList::GoalList)
        .def_readwrite("PolyToGoalActorMap", &UNavMeshGoal_ClosestActorInList::PolyToGoalActorMap)
        .def_readwrite("CachedAnchorPoly", &UNavMeshGoal_ClosestActorInList::CachedAnchorPoly)
        .def("StaticClass", &UNavMeshGoal_ClosestActorInList::StaticClass, return_value_policy< reference_existing_object >())
        .def("RecycleInternal", &UNavMeshGoal_ClosestActorInList::RecycleInternal)
        .def("eventRecycle", &UNavMeshGoal_ClosestActorInList::eventRecycle)
        .def("ClosestActorInList", &UNavMeshGoal_ClosestActorInList::ClosestActorInList, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}