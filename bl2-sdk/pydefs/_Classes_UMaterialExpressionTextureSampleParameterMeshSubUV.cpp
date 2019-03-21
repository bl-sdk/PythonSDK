#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionTextureSampleParameterMeshSubUV()
{
    py::class_< UMaterialExpressionTextureSampleParameterMeshSubUV,  UMaterialExpressionTextureSampleParameter   >("UMaterialExpressionTextureSampleParameterMeshSubUV")
        .def("StaticClass", &UMaterialExpressionTextureSampleParameterMeshSubUV::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}