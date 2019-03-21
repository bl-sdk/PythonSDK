#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionArcSine()
{
    class_< UMaterialExpressionArcSine, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionArcSine", no_init)
        .def_readwrite("Input", &UMaterialExpressionArcSine::Input)
        .def("StaticClass", &UMaterialExpressionArcSine::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}