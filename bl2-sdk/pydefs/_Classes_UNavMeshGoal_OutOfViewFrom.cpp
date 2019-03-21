#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UNavMeshGoal_OutOfViewFrom()
{
    class_< UNavMeshGoal_OutOfViewFrom, bases< UNavMeshPathGoalEvaluator >  , boost::noncopyable>("UNavMeshGoal_OutOfViewFrom", no_init)
        .def_readwrite("GoalPoly", &UNavMeshGoal_OutOfViewFrom::GoalPoly)
        .def_readwrite("OutOfViewLocation", &UNavMeshGoal_OutOfViewFrom::OutOfViewLocation)
        .def("StaticClass", &UNavMeshGoal_OutOfViewFrom::StaticClass, return_value_policy< reference_existing_object >())
        .def("Recycle", &UNavMeshGoal_OutOfViewFrom::Recycle)
        .def("MustBeHiddenFromThisPoint", &UNavMeshGoal_OutOfViewFrom::MustBeHiddenFromThisPoint)
        .def("RecycleNative", &UNavMeshGoal_OutOfViewFrom::RecycleNative)
        .staticmethod("StaticClass")
  ;
}