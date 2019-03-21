#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UNavMeshGoalFilter_MinPathDistance()
{
    py::class_< UNavMeshGoalFilter_MinPathDistance,  UNavMeshGoal_Filter   >("UNavMeshGoalFilter_MinPathDistance")
        .def_readwrite("MinDistancePathShouldBe", &UNavMeshGoalFilter_MinPathDistance::MinDistancePathShouldBe)
        .def("StaticClass", &UNavMeshGoalFilter_MinPathDistance::StaticClass, py::return_value_policy::reference)
        .def("MustBeLongerPathThan", &UNavMeshGoalFilter_MinPathDistance::MustBeLongerPathThan)
        .staticmethod("StaticClass")
  ;
}