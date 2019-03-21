#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ULookingAtInjuredPlayerExpressionEvaluator()
{
    py::class_< ULookingAtInjuredPlayerExpressionEvaluator,  UExpressionEvaluator   >("ULookingAtInjuredPlayerExpressionEvaluator")
        .def("StaticClass", &ULookingAtInjuredPlayerExpressionEvaluator::StaticClass, py::return_value_policy::reference)
        .def("Evaluate", &ULookingAtInjuredPlayerExpressionEvaluator::Evaluate)
        .staticmethod("StaticClass")
  ;
}