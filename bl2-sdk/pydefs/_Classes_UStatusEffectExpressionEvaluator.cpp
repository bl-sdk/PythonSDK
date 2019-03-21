#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UStatusEffectExpressionEvaluator()
{
    py::class_< UStatusEffectExpressionEvaluator,  UExpressionEvaluator   >("UStatusEffectExpressionEvaluator")
        .def_readwrite("Type", &UStatusEffectExpressionEvaluator::Type)
        .def_readwrite("EffectState", &UStatusEffectExpressionEvaluator::EffectState)
        .def("StaticClass", &UStatusEffectExpressionEvaluator::StaticClass, py::return_value_policy::reference)
        .def("Evaluate", &UStatusEffectExpressionEvaluator::Evaluate)
        .staticmethod("StaticClass")
  ;
}