#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionTextureCoordinate()
{
    py::class_< UMaterialExpressionTextureCoordinate,  UMaterialExpression   >("UMaterialExpressionTextureCoordinate")
        .def_readwrite("CoordinateIndex", &UMaterialExpressionTextureCoordinate::CoordinateIndex)
        .def_readwrite("UTiling", &UMaterialExpressionTextureCoordinate::UTiling)
        .def_readwrite("VTiling", &UMaterialExpressionTextureCoordinate::VTiling)
        .def("StaticClass", &UMaterialExpressionTextureCoordinate::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}