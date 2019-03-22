#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UNavMeshGoal_OutOfViewFrom(py::module &m)
{
    py::class_< UNavMeshGoal_OutOfViewFrom,  UNavMeshPathGoalEvaluator   >(m, "UNavMeshGoal_OutOfViewFrom")
        .def_readwrite("GoalPoly", &UNavMeshGoal_OutOfViewFrom::GoalPoly)
        .def_readwrite("OutOfViewLocation", &UNavMeshGoal_OutOfViewFrom::OutOfViewLocation)
        .def("Recycle", &UNavMeshGoal_OutOfViewFrom::Recycle)
        .def("MustBeHiddenFromThisPoint", &UNavMeshGoal_OutOfViewFrom::MustBeHiddenFromThisPoint)
        .def("RecycleNative", &UNavMeshGoal_OutOfViewFrom::RecycleNative)
          ;
}