#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionLensFlareOcclusion()
{
    py::class_< UMaterialExpressionLensFlareOcclusion,  UMaterialExpression   >("UMaterialExpressionLensFlareOcclusion")
        .def("StaticClass", &UMaterialExpressionLensFlareOcclusion::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}