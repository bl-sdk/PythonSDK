#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionClamp()
{
    class_< UMaterialExpressionClamp, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionClamp", no_init)
        .def_readwrite("Input", &UMaterialExpressionClamp::Input)
        .def_readwrite("Min", &UMaterialExpressionClamp::Min)
        .def_readwrite("Max", &UMaterialExpressionClamp::Max)
        .def("StaticClass", &UMaterialExpressionClamp::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}