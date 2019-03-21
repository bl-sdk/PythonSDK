#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionTextureSampleParameterSubUV()
{
    py::class_< UMaterialExpressionTextureSampleParameterSubUV,  UMaterialExpressionTextureSampleParameter2D   >("UMaterialExpressionTextureSampleParameterSubUV")
        .def("StaticClass", &UMaterialExpressionTextureSampleParameterSubUV::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}