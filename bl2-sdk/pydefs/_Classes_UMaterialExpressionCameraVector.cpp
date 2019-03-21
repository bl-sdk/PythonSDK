#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionCameraVector()
{
    py::class_< UMaterialExpressionCameraVector,  UMaterialExpression   >("UMaterialExpressionCameraVector")
        .def("StaticClass", &UMaterialExpressionCameraVector::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}