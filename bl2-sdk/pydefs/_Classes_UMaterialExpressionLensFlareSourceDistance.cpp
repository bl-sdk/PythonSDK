#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionLensFlareSourceDistance()
{
    py::class_< UMaterialExpressionLensFlareSourceDistance,  UMaterialExpression   >("UMaterialExpressionLensFlareSourceDistance")
        .def("StaticClass", &UMaterialExpressionLensFlareSourceDistance::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}