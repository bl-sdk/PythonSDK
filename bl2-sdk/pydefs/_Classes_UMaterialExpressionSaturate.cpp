#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionSaturate()
{
    class_< UMaterialExpressionSaturate, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionSaturate", no_init)
        .def_readwrite("Input", &UMaterialExpressionSaturate::Input)
        .def("StaticClass", &UMaterialExpressionSaturate::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}