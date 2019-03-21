#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FNavMeshPathGoalEvaluatorCacheDatum()
{
    class_< FNavMeshPathGoalEvaluatorCacheDatum >("FNavMeshPathGoalEvaluatorCacheDatum", no_init)
        .def_readwrite("ListIdx", &FNavMeshPathGoalEvaluatorCacheDatum::ListIdx)
        .def_readonly("List", &FNavMeshPathGoalEvaluatorCacheDatum::List)
  ;
}