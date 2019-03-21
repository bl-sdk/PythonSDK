#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPostureStateExpressionEvaluator()
{
    py::class_< UPostureStateExpressionEvaluator,  UExpressionEvaluator   >("UPostureStateExpressionEvaluator")
        .def("StaticClass", &UPostureStateExpressionEvaluator::StaticClass, py::return_value_policy::reference)
        .def("Evaluate", &UPostureStateExpressionEvaluator::Evaluate)
        .staticmethod("StaticClass")
  ;
}