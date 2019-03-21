#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionArcTangent2()
{
    class_< UMaterialExpressionArcTangent2, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionArcTangent2", no_init)
        .def_readwrite("InputX", &UMaterialExpressionArcTangent2::InputX)
        .def_readwrite("InputY", &UMaterialExpressionArcTangent2::InputY)
        .def("StaticClass", &UMaterialExpressionArcTangent2::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}