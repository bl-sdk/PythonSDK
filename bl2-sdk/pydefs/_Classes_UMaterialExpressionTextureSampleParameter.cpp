#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionTextureSampleParameter(py::module &m)
{
    py::class_< UMaterialExpressionTextureSampleParameter,  UMaterialExpression   >(m, "UMaterialExpressionTextureSampleParameter")
		.def_static("StaticClass", &UMaterialExpressionTextureSampleParameter::StaticClass, py::return_value_policy::reference)
        .def_readwrite("ParameterName", &UMaterialExpressionTextureSampleParameter::ParameterName)
        .def_readwrite("ExpressionGUID", &UMaterialExpressionTextureSampleParameter::ExpressionGUID)
        .def_readwrite("Texture", &UMaterialExpressionTextureSample::Texture)
        .def_readwrite("Coordinates", &UMaterialExpressionTextureSample::Coordinates)
          ;
}