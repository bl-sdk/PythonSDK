#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionMeshSubUVBlend()
{
    py::class_< UMaterialExpressionMeshSubUVBlend,  UMaterialExpressionTextureSample   >("UMaterialExpressionMeshSubUVBlend")
        .def("StaticClass", &UMaterialExpressionMeshSubUVBlend::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}