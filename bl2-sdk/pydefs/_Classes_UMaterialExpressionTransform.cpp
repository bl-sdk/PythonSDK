#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionTransform()
{
    class_< UMaterialExpressionTransform, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionTransform", no_init)
        .def_readwrite("Input", &UMaterialExpressionTransform::Input)
        .def_readwrite("TransformSourceType", &UMaterialExpressionTransform::TransformSourceType)
        .def_readwrite("TransformType", &UMaterialExpressionTransform::TransformType)
        .def("StaticClass", &UMaterialExpressionTransform::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}