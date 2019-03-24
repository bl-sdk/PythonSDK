#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionTextureCoordinate(py::module &m)
{
    py::class_< UMaterialExpressionTextureCoordinate,  UMaterialExpression   >(m, "UMaterialExpressionTextureCoordinate")
		.def_static("StaticClass", &UMaterialExpressionTextureCoordinate::StaticClass, py::return_value_policy::reference)
        .def_readwrite("CoordinateIndex", &UMaterialExpressionTextureCoordinate::CoordinateIndex)
        .def_readwrite("UTiling", &UMaterialExpressionTextureCoordinate::UTiling)
        .def_readwrite("VTiling", &UMaterialExpressionTextureCoordinate::VTiling)
          ;
}