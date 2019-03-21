#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionRotateAboutAxis()
{
    py::class_< UMaterialExpressionRotateAboutAxis,  UMaterialExpression   >("UMaterialExpressionRotateAboutAxis")
        .def_readwrite("NormalizedRotationAxisAndAngle", &UMaterialExpressionRotateAboutAxis::NormalizedRotationAxisAndAngle)
        .def_readwrite("PositionOnAxis", &UMaterialExpressionRotateAboutAxis::PositionOnAxis)
        .def_readwrite("Position", &UMaterialExpressionRotateAboutAxis::Position)
        .def("StaticClass", &UMaterialExpressionRotateAboutAxis::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}