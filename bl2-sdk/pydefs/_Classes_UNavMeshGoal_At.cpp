#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UNavMeshGoal_At()
{
    class_< UNavMeshGoal_At, bases< UNavMeshPathGoalEvaluator >  , boost::noncopyable>("UNavMeshGoal_At", no_init)
        .def_readwrite("Goal", &UNavMeshGoal_At::Goal)
        .def_readwrite("GoalDist", &UNavMeshGoal_At::GoalDist)
        .def_readwrite("PartialDistSq", &UNavMeshGoal_At::PartialDistSq)
        .def_readwrite("GoalPoly", &UNavMeshGoal_At::GoalPoly)
        .def_readwrite("PartialGoal", &UNavMeshGoal_At::PartialGoal)
        .def("StaticClass", &UNavMeshGoal_At::StaticClass, return_value_policy< reference_existing_object >())
        .def("Recycle", &UNavMeshGoal_At::Recycle)
        .def("AtLocation", &UNavMeshGoal_At::AtLocation)
        .def("AtActor", &UNavMeshGoal_At::AtActor)
        .def("RecycleNative", &UNavMeshGoal_At::RecycleNative)
        .staticmethod("StaticClass")
  ;
}