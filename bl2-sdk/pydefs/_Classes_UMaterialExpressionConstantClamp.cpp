#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionConstantClamp()
{
    class_< UMaterialExpressionConstantClamp, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionConstantClamp", no_init)
        .def_readwrite("Input", &UMaterialExpressionConstantClamp::Input)
        .def_readwrite("Min", &UMaterialExpressionConstantClamp::Min)
        .def_readwrite("Max", &UMaterialExpressionConstantClamp::Max)
        .def("StaticClass", &UMaterialExpressionConstantClamp::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}