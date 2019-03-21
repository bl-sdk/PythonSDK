#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAttributeExpressionEvaluator(py::object m)
{
    py::class_< UAttributeExpressionEvaluator,  UExpressionEvaluator   >(m, "UAttributeExpressionEvaluator")
        .def_readwrite("Expression", &UAttributeExpressionEvaluator::Expression)
        .def("StaticClass", &UAttributeExpressionEvaluator::StaticClass, py::return_value_policy::reference)
        .def("Evaluate", &UAttributeExpressionEvaluator::Evaluate)
          ;
}