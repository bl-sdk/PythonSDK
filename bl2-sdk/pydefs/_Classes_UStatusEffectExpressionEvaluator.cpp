#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UStatusEffectExpressionEvaluator(py::module &m)
{
    py::class_< UStatusEffectExpressionEvaluator,  UExpressionEvaluator   >(m, "UStatusEffectExpressionEvaluator")
		.def_static("StaticClass", &UStatusEffectExpressionEvaluator::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Type", &UStatusEffectExpressionEvaluator::Type)
        .def_readwrite("EffectState", &UStatusEffectExpressionEvaluator::EffectState)
        .def("Evaluate", &UStatusEffectExpressionEvaluator::Evaluate)
          ;
}