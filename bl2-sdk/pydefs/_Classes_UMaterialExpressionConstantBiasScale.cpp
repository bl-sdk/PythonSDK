#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionConstantBiasScale()
{
    class_< UMaterialExpressionConstantBiasScale, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionConstantBiasScale", no_init)
        .def_readwrite("Input", &UMaterialExpressionConstantBiasScale::Input)
        .def_readwrite("Bias", &UMaterialExpressionConstantBiasScale::Bias)
        .def_readwrite("Scale", &UMaterialExpressionConstantBiasScale::Scale)
        .def("StaticClass", &UMaterialExpressionConstantBiasScale::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}