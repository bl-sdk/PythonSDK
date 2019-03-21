#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UNavMeshGoalFilter_MinPathDistance()
{
    class_< UNavMeshGoalFilter_MinPathDistance, bases< UNavMeshGoal_Filter >  , boost::noncopyable>("UNavMeshGoalFilter_MinPathDistance", no_init)
        .def_readwrite("MinDistancePathShouldBe", &UNavMeshGoalFilter_MinPathDistance::MinDistancePathShouldBe)
        .def("StaticClass", &UNavMeshGoalFilter_MinPathDistance::StaticClass, return_value_policy< reference_existing_object >())
        .def("MustBeLongerPathThan", &UNavMeshGoalFilter_MinPathDistance::MustBeLongerPathThan)
        .staticmethod("StaticClass")
  ;
}