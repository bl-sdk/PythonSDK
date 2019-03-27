#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FNavMeshPathGoalEvaluatorCacheDatum(py::module &m)
{
    py::class_< FNavMeshPathGoalEvaluatorCacheDatum >(m, "FNavMeshPathGoalEvaluatorCacheDatum")
        .def_readwrite("ListIdx", &FNavMeshPathGoalEvaluatorCacheDatum::ListIdx)
  ;
}