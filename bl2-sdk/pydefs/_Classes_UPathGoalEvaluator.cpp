#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UPathGoalEvaluator()
{
    class_< UPathGoalEvaluator, bases< UObject >  , boost::noncopyable>("UPathGoalEvaluator", no_init)
        .def_readwrite("NextEvaluator", &UPathGoalEvaluator::NextEvaluator)
        .def_readwrite("GeneratedGoal", &UPathGoalEvaluator::GeneratedGoal)
        .def_readwrite("MaxPathVisits", &UPathGoalEvaluator::MaxPathVisits)
        .def_readwrite("CacheIdx", &UPathGoalEvaluator::CacheIdx)
        .def("StaticClass", &UPathGoalEvaluator::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventGetDumpString", &UPathGoalEvaluator::eventGetDumpString)
        .def("eventRecycle", &UPathGoalEvaluator::eventRecycle)
        .staticmethod("StaticClass")
  ;
}