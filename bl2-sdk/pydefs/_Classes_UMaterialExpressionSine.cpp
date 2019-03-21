#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionSine()
{
    class_< UMaterialExpressionSine, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionSine", no_init)
        .def_readwrite("Input", &UMaterialExpressionSine::Input)
        .def_readwrite("Period", &UMaterialExpressionSine::Period)
        .def("StaticClass", &UMaterialExpressionSine::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}