#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ULookingAtInjuredPlayerExpressionEvaluator(py::module &m)
{
    py::class_< ULookingAtInjuredPlayerExpressionEvaluator,  UExpressionEvaluator   >(m, "ULookingAtInjuredPlayerExpressionEvaluator")
        .def("Evaluate", &ULookingAtInjuredPlayerExpressionEvaluator::Evaluate)
          ;
}