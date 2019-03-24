#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionSPHFluidVertexColor(py::module &m)
{
    py::class_< UMaterialExpressionSPHFluidVertexColor,  UMaterialExpression   >(m, "UMaterialExpressionSPHFluidVertexColor")
		.def_static("StaticClass", &UMaterialExpressionSPHFluidVertexColor::StaticClass, py::return_value_policy::reference)
        .def_readwrite("DefaultTexture", &UMaterialExpressionSPHFluidVertexColor::DefaultTexture)
          ;
}