#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionLightmapUVs()
{
    py::class_< UMaterialExpressionLightmapUVs,  UMaterialExpression   >("UMaterialExpressionLightmapUVs")
        .def("StaticClass", &UMaterialExpressionLightmapUVs::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}