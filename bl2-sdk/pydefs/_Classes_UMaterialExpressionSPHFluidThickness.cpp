#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionSPHFluidThickness()
{
    py::class_< UMaterialExpressionSPHFluidThickness,  UMaterialExpression   >("UMaterialExpressionSPHFluidThickness")
        .def_readwrite("DefaultTexture", &UMaterialExpressionSPHFluidThickness::DefaultTexture)
        .def("StaticClass", &UMaterialExpressionSPHFluidThickness::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}