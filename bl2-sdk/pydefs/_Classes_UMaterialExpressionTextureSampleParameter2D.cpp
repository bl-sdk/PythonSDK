#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionTextureSampleParameter2D()
{
    py::class_< UMaterialExpressionTextureSampleParameter2D,  UMaterialExpressionTextureSampleParameter   >("UMaterialExpressionTextureSampleParameter2D")
        .def("StaticClass", &UMaterialExpressionTextureSampleParameter2D::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}