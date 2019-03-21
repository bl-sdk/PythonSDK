#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionWorldLightColor()
{
    py::class_< UMaterialExpressionWorldLightColor,  UMaterialExpression   >("UMaterialExpressionWorldLightColor")
        .def("StaticClass", &UMaterialExpressionWorldLightColor::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}