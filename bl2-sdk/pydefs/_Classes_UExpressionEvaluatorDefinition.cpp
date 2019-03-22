#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UExpressionEvaluatorDefinition(py::module &m)
{
    py::class_< UExpressionEvaluatorDefinition,  UGBXDefinition   >(m, "UExpressionEvaluatorDefinition")
        .def_readwrite("Expression", &UExpressionEvaluatorDefinition::Expression)
        .def("StaticClass", &UExpressionEvaluatorDefinition::StaticClass, py::return_value_policy::reference)
        .def("Evaluate", &UExpressionEvaluatorDefinition::Evaluate)
          ;
}