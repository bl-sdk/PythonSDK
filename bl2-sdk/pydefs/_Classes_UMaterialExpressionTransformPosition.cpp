#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionTransformPosition()
{
    py::class_< UMaterialExpressionTransformPosition,  UMaterialExpression   >("UMaterialExpressionTransformPosition")
        .def_readwrite("Input", &UMaterialExpressionTransformPosition::Input)
        .def_readwrite("TransformType", &UMaterialExpressionTransformPosition::TransformType)
        .def("StaticClass", &UMaterialExpressionTransformPosition::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}