#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UNavMeshPathGoalEvaluator()
{
    class_< UNavMeshPathGoalEvaluator, bases< UObject >  , boost::noncopyable>("UNavMeshPathGoalEvaluator", no_init)
        .def_readwrite("NextEvaluator", &UNavMeshPathGoalEvaluator::NextEvaluator)
        .def_readwrite("MaxPathVisits", &UNavMeshPathGoalEvaluator::MaxPathVisits)
        .def_readwrite("NumNodesThrownOut", &UNavMeshPathGoalEvaluator::NumNodesThrownOut)
        .def_readwrite("NumNodesProcessed", &UNavMeshPathGoalEvaluator::NumNodesProcessed)
        .def("StaticClass", &UNavMeshPathGoalEvaluator::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventGetDumpString", &UNavMeshPathGoalEvaluator::eventGetDumpString)
        .def("eventRecycle", &UNavMeshPathGoalEvaluator::eventRecycle)
        .staticmethod("StaticClass")
  ;
}