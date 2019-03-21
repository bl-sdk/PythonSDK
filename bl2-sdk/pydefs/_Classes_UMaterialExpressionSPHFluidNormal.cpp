#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionSPHFluidNormal()
{
    py::class_< UMaterialExpressionSPHFluidNormal,  UMaterialExpression   >("UMaterialExpressionSPHFluidNormal")
        .def_readwrite("DefaultTexture", &UMaterialExpressionSPHFluidNormal::DefaultTexture)
        .def("StaticClass", &UMaterialExpressionSPHFluidNormal::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}