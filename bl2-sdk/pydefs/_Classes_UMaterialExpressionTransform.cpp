#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionTransform(py::module &m)
{
    py::class_< UMaterialExpressionTransform,  UMaterialExpression   >(m, "UMaterialExpressionTransform")
        .def_readwrite("Input", &UMaterialExpressionTransform::Input)
        .def_readwrite("TransformSourceType", &UMaterialExpressionTransform::TransformSourceType)
        .def_readwrite("TransformType", &UMaterialExpressionTransform::TransformType)
          ;
}