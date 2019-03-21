#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionLensFlareRadialDistance()
{
    py::class_< UMaterialExpressionLensFlareRadialDistance,  UMaterialExpression   >("UMaterialExpressionLensFlareRadialDistance")
        .def("StaticClass", &UMaterialExpressionLensFlareRadialDistance::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}