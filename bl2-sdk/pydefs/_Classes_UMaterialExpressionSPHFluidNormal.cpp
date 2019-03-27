#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionSPHFluidNormal(py::module &m)
{
    py::class_< UMaterialExpressionSPHFluidNormal,  UMaterialExpression   >(m, "UMaterialExpressionSPHFluidNormal")
		.def_static("StaticClass", &UMaterialExpressionSPHFluidNormal::StaticClass, py::return_value_policy::reference)
        .def_readwrite("DefaultTexture", &UMaterialExpressionSPHFluidNormal::DefaultTexture)
          ;
}