#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UNavMeshPathGoalEvaluator(py::module &m)
{
    py::class_< UNavMeshPathGoalEvaluator,  UObject   >(m, "UNavMeshPathGoalEvaluator")
        .def_readwrite("NextEvaluator", &UNavMeshPathGoalEvaluator::NextEvaluator)
        .def_readwrite("MaxPathVisits", &UNavMeshPathGoalEvaluator::MaxPathVisits)
        .def_readwrite("NumNodesThrownOut", &UNavMeshPathGoalEvaluator::NumNodesThrownOut)
        .def_readwrite("NumNodesProcessed", &UNavMeshPathGoalEvaluator::NumNodesProcessed)
        .def("StaticClass", &UNavMeshPathGoalEvaluator::StaticClass, py::return_value_policy::reference)
        .def("eventGetDumpString", &UNavMeshPathGoalEvaluator::eventGetDumpString)
        .def("eventRecycle", &UNavMeshPathGoalEvaluator::eventRecycle)
          ;
}