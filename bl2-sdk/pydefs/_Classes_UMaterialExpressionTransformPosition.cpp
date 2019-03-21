#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionTransformPosition()
{
    class_< UMaterialExpressionTransformPosition, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionTransformPosition", no_init)
        .def_readwrite("Input", &UMaterialExpressionTransformPosition::Input)
        .def_readwrite("TransformType", &UMaterialExpressionTransformPosition::TransformType)
        .def("StaticClass", &UMaterialExpressionTransformPosition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}