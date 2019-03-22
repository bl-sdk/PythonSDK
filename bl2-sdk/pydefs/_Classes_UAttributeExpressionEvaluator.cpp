#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAttributeExpressionEvaluator(py::module &m)
{
    py::class_< UAttributeExpressionEvaluator,  UExpressionEvaluator   >(m, "UAttributeExpressionEvaluator")
        .def_readwrite("Expression", &UAttributeExpressionEvaluator::Expression)
        .def("Evaluate", &UAttributeExpressionEvaluator::Evaluate)
          ;
}