#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FNavMeshPathGoalEvaluatorCacheDatum()
{
    py::class_< FNavMeshPathGoalEvaluatorCacheDatum >("FNavMeshPathGoalEvaluatorCacheDatum")
        .def_readwrite("ListIdx", &FNavMeshPathGoalEvaluatorCacheDatum::ListIdx)
        .def_readonly("List", &FNavMeshPathGoalEvaluatorCacheDatum::List)
  ;
}