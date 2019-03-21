#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionLightVector()
{
    py::class_< UMaterialExpressionLightVector,  UMaterialExpression   >("UMaterialExpressionLightVector")
        .def("StaticClass", &UMaterialExpressionLightVector::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}