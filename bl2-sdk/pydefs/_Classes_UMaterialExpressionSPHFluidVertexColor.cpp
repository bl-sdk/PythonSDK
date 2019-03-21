#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionSPHFluidVertexColor()
{
    py::class_< UMaterialExpressionSPHFluidVertexColor,  UMaterialExpression   >("UMaterialExpressionSPHFluidVertexColor")
        .def_readwrite("DefaultTexture", &UMaterialExpressionSPHFluidVertexColor::DefaultTexture)
        .def("StaticClass", &UMaterialExpressionSPHFluidVertexColor::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}