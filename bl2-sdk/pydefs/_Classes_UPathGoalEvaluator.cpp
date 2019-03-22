#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPathGoalEvaluator(py::module &m)
{
    py::class_< UPathGoalEvaluator,  UObject   >(m, "UPathGoalEvaluator")
        .def_readwrite("NextEvaluator", &UPathGoalEvaluator::NextEvaluator)
        .def_readwrite("GeneratedGoal", &UPathGoalEvaluator::GeneratedGoal)
        .def_readwrite("MaxPathVisits", &UPathGoalEvaluator::MaxPathVisits)
        .def_readwrite("CacheIdx", &UPathGoalEvaluator::CacheIdx)
        .def("eventGetDumpString", &UPathGoalEvaluator::eventGetDumpString)
        .def("eventRecycle", &UPathGoalEvaluator::eventRecycle)
          ;
}