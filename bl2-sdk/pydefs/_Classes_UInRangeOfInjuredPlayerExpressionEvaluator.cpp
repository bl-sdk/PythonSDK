#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInRangeOfInjuredPlayerExpressionEvaluator()
{
    py::class_< UInRangeOfInjuredPlayerExpressionEvaluator,  UExpressionEvaluator   >("UInRangeOfInjuredPlayerExpressionEvaluator")
        .def("StaticClass", &UInRangeOfInjuredPlayerExpressionEvaluator::StaticClass, py::return_value_policy::reference)
        .def("Evaluate", &UInRangeOfInjuredPlayerExpressionEvaluator::Evaluate)
        .staticmethod("StaticClass")
  ;
}