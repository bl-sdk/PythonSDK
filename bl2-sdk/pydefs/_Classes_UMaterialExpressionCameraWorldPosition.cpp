#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionCameraWorldPosition()
{
    py::class_< UMaterialExpressionCameraWorldPosition,  UMaterialExpression   >("UMaterialExpressionCameraWorldPosition")
        .def("StaticClass", &UMaterialExpressionCameraWorldPosition::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}