#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInRangeOfInjuredPlayerExpressionEvaluator(py::module &m)
{
    py::class_< UInRangeOfInjuredPlayerExpressionEvaluator,  UExpressionEvaluator   >(m, "UInRangeOfInjuredPlayerExpressionEvaluator")
        .def("Evaluate", &UInRangeOfInjuredPlayerExpressionEvaluator::Evaluate)
          ;
}