#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UExpressionEvaluatorDefinition(py::module &m)
{
    py::class_< UExpressionEvaluatorDefinition,  UGBXDefinition   >(m, "UExpressionEvaluatorDefinition")
        .def_readwrite("Expression", &UExpressionEvaluatorDefinition::Expression)
        .def("Evaluate", &UExpressionEvaluatorDefinition::Evaluate)
          ;
}