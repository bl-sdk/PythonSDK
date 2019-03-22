#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCompoundExpressionEvaluator(py::module &m)
{
    py::class_< UCompoundExpressionEvaluator,  UExpressionEvaluator   >(m, "UCompoundExpressionEvaluator")
        .def_readwrite("Expression1", &UCompoundExpressionEvaluator::Expression1)
        .def_readwrite("Operator", &UCompoundExpressionEvaluator::Operator)
        .def_readwrite("Expression2", &UCompoundExpressionEvaluator::Expression2)
        .def("StaticClass", &UCompoundExpressionEvaluator::StaticClass, py::return_value_policy::reference)
        .def("Evaluate", &UCompoundExpressionEvaluator::Evaluate)
          ;
}