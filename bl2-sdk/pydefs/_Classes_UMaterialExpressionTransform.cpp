#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionTransform()
{
    py::class_< UMaterialExpressionTransform,  UMaterialExpression   >("UMaterialExpressionTransform")
        .def_readwrite("Input", &UMaterialExpressionTransform::Input)
        .def_readwrite("TransformSourceType", &UMaterialExpressionTransform::TransformSourceType)
        .def_readwrite("TransformType", &UMaterialExpressionTransform::TransformType)
        .def("StaticClass", &UMaterialExpressionTransform::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}