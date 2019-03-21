#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UNavMeshGoalFilter_OutOfViewFrom()
{
    class_< UNavMeshGoalFilter_OutOfViewFrom, bases< UNavMeshGoal_Filter >  , boost::noncopyable>("UNavMeshGoalFilter_OutOfViewFrom", no_init)
        .def_readwrite("GoalPoly", &UNavMeshGoalFilter_OutOfViewFrom::GoalPoly)
        .def_readwrite("OutOfViewLocation", &UNavMeshGoalFilter_OutOfViewFrom::OutOfViewLocation)
        .def("StaticClass", &UNavMeshGoalFilter_OutOfViewFrom::StaticClass, return_value_policy< reference_existing_object >())
        .def("MustBeHiddenFromThisPoint", &UNavMeshGoalFilter_OutOfViewFrom::MustBeHiddenFromThisPoint)
        .staticmethod("StaticClass")
  ;
}