#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionCeil()
{
    class_< UMaterialExpressionCeil, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionCeil", no_init)
        .def_readwrite("Input", &UMaterialExpressionCeil::Input)
        .def("StaticClass", &UMaterialExpressionCeil::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}