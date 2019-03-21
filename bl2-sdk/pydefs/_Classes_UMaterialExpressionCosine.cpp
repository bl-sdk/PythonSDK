#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionCosine()
{
    class_< UMaterialExpressionCosine, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionCosine", no_init)
        .def_readwrite("Input", &UMaterialExpressionCosine::Input)
        .def_readwrite("Period", &UMaterialExpressionCosine::Period)
        .def("StaticClass", &UMaterialExpressionCosine::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}