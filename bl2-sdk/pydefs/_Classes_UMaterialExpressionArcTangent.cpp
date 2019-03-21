#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionArcTangent()
{
    class_< UMaterialExpressionArcTangent, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionArcTangent", no_init)
        .def_readwrite("Input", &UMaterialExpressionArcTangent::Input)
        .def("StaticClass", &UMaterialExpressionArcTangent::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}