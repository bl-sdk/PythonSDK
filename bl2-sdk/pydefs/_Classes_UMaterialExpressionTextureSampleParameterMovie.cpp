#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionTextureSampleParameterMovie(py::module &m)
{
    py::class_< UMaterialExpressionTextureSampleParameterMovie,  UMaterialExpression   >(m, "UMaterialExpressionTextureSampleParameterMovie")
        .def_readwrite("ParameterName", &UMaterialExpressionTextureSampleParameter::ParameterName)
        .def_readwrite("ExpressionGUID", &UMaterialExpressionTextureSampleParameter::ExpressionGUID)
        .def_readwrite("Texture", &UMaterialExpressionTextureSample::Texture)
        .def_readwrite("Coordinates", &UMaterialExpressionTextureSample::Coordinates)
        .def("StaticClass", &UMaterialExpressionTextureSampleParameterMovie::StaticClass, py::return_value_policy::reference)
          ;
}