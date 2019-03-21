#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FAttributeExpressionData()
{
    class_< FAttributeExpressionData >("FAttributeExpressionData", no_init)
        .def_readwrite("AttributeOperand1", &FAttributeExpressionData::AttributeOperand1)
        .def_readwrite("ComparisonOperator", &FAttributeExpressionData::ComparisonOperator)
        .def_readwrite("Operand2Usage", &FAttributeExpressionData::Operand2Usage)
        .def_readwrite("AttributeOperand2", &FAttributeExpressionData::AttributeOperand2)
        .def_readwrite("ConstantOperand2", &FAttributeExpressionData::ConstantOperand2)
  ;
}