#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionLensFlareIntensity()
{
    py::class_< UMaterialExpressionLensFlareIntensity,  UMaterialExpression   >("UMaterialExpressionLensFlareIntensity")
        .def("StaticClass", &UMaterialExpressionLensFlareIntensity::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}