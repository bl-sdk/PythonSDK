#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UNavMeshGoalFilter_NotNearOtherAI(py::module &m)
{
    py::class_< UNavMeshGoalFilter_NotNearOtherAI,  UNavMeshGoal_Filter   >(m, "UNavMeshGoalFilter_NotNearOtherAI")
        .def_readwrite("DistanceToCheck", &UNavMeshGoalFilter_NotNearOtherAI::DistanceToCheck)
        .def("NotNearOtherAI", &UNavMeshGoalFilter_NotNearOtherAI::NotNearOtherAI)
          ;
}