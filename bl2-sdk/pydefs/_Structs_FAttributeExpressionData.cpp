#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FAttributeExpressionData(py::object m)
{
    py::class_< FAttributeExpressionData >(m, "FAttributeExpressionData")
        .def_readwrite("AttributeOperand1", &FAttributeExpressionData::AttributeOperand1)
        .def_readwrite("ComparisonOperator", &FAttributeExpressionData::ComparisonOperator)
        .def_readwrite("Operand2Usage", &FAttributeExpressionData::Operand2Usage)
        .def_readwrite("AttributeOperand2", &FAttributeExpressionData::AttributeOperand2)
        .def_readwrite("ConstantOperand2", &FAttributeExpressionData::ConstantOperand2)
  ;
}