#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAICostExpressionEvaluator()
{
    py::class_< UAICostExpressionEvaluator,  UExpressionEvaluator   >("UAICostExpressionEvaluator")
        .def_readwrite("Multiplier", &UAICostExpressionEvaluator::Multiplier)
        .def_readwrite("PopDef", &UAICostExpressionEvaluator::PopDef)
        .def("StaticClass", &UAICostExpressionEvaluator::StaticClass, py::return_value_policy::reference)
        .def("Evaluate", &UAICostExpressionEvaluator::Evaluate)
        .staticmethod("StaticClass")
  ;
}