#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UNavMeshGoal_Null(py::module &m)
{
    py::class_< UNavMeshGoal_Null,  UNavMeshPathGoalEvaluator   >(m, "UNavMeshGoal_Null")
        .def_readwrite("PartialGoal", &UNavMeshGoal_Null::PartialGoal)
        .def("Recycle", &UNavMeshGoal_Null::Recycle)
        .def("RecycleNative", &UNavMeshGoal_Null::RecycleNative)
        .def("GoUntilBust", &UNavMeshGoal_Null::GoUntilBust)
          ;
}