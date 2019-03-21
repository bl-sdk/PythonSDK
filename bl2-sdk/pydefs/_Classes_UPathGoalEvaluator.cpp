#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPathGoalEvaluator(py::object m)
{
    py::class_< UPathGoalEvaluator,  UObject   >(m, "UPathGoalEvaluator")
        .def_readwrite("NextEvaluator", &UPathGoalEvaluator::NextEvaluator)
        .def_readwrite("GeneratedGoal", &UPathGoalEvaluator::GeneratedGoal)
        .def_readwrite("MaxPathVisits", &UPathGoalEvaluator::MaxPathVisits)
        .def_readwrite("CacheIdx", &UPathGoalEvaluator::CacheIdx)
        .def("StaticClass", &UPathGoalEvaluator::StaticClass, py::return_value_policy::reference)
        .def("eventGetDumpString", &UPathGoalEvaluator::eventGetDumpString)
        .def("eventRecycle", &UPathGoalEvaluator::eventRecycle)
          ;
}