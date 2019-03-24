#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UNavMeshGoalFilter_OutOfViewFrom(py::module &m)
{
    py::class_< UNavMeshGoalFilter_OutOfViewFrom,  UNavMeshGoal_Filter   >(m, "UNavMeshGoalFilter_OutOfViewFrom")
		.def_static("StaticClass", &UNavMeshGoalFilter_OutOfViewFrom::StaticClass, py::return_value_policy::reference)
        .def_readwrite("GoalPoly", &UNavMeshGoalFilter_OutOfViewFrom::GoalPoly)
        .def_readwrite("OutOfViewLocation", &UNavMeshGoalFilter_OutOfViewFrom::OutOfViewLocation)
        .def("MustBeHiddenFromThisPoint", &UNavMeshGoalFilter_OutOfViewFrom::MustBeHiddenFromThisPoint)
          ;
}