#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionTextureSampleParameterMeshSubUVBlend()
{
    py::class_< UMaterialExpressionTextureSampleParameterMeshSubUVBlend,  UMaterialExpressionTextureSampleParameter   >("UMaterialExpressionTextureSampleParameterMeshSubUVBlend")
        .def("StaticClass", &UMaterialExpressionTextureSampleParameterMeshSubUVBlend::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}