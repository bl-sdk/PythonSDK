#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UNavMeshGoalFilter_MinPathDistance(py::module &m)
{
    py::class_< UNavMeshGoalFilter_MinPathDistance,  UNavMeshGoal_Filter   >(m, "UNavMeshGoalFilter_MinPathDistance")
		.def_static("StaticClass", &UNavMeshGoalFilter_MinPathDistance::StaticClass, py::return_value_policy::reference)
        .def_readwrite("MinDistancePathShouldBe", &UNavMeshGoalFilter_MinPathDistance::MinDistancePathShouldBe)
        .def("MustBeLongerPathThan", &UNavMeshGoalFilter_MinPathDistance::MustBeLongerPathThan)
          ;
}