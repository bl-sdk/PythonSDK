#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UNavMeshGoalFilter_NotNearOtherAI()
{
    class_< UNavMeshGoalFilter_NotNearOtherAI, bases< UNavMeshGoal_Filter >  , boost::noncopyable>("UNavMeshGoalFilter_NotNearOtherAI", no_init)
        .def_readwrite("DistanceToCheck", &UNavMeshGoalFilter_NotNearOtherAI::DistanceToCheck)
        .def("StaticClass", &UNavMeshGoalFilter_NotNearOtherAI::StaticClass, return_value_policy< reference_existing_object >())
        .def("NotNearOtherAI", &UNavMeshGoalFilter_NotNearOtherAI::NotNearOtherAI)
        .staticmethod("StaticClass")
  ;
}