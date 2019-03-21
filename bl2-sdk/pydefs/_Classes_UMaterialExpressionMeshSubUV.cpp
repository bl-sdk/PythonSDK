#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionMeshSubUV()
{
    py::class_< UMaterialExpressionMeshSubUV,  UMaterialExpressionTextureSample   >("UMaterialExpressionMeshSubUV")
        .def("StaticClass", &UMaterialExpressionMeshSubUV::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}