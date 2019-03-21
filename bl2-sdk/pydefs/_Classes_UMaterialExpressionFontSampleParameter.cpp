#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionFontSampleParameter(py::object m)
{
    py::class_< UMaterialExpressionFontSampleParameter,  UMaterialExpression   >(m, "UMaterialExpressionFontSampleParameter")
        .def_readwrite("ParameterName", &UMaterialExpressionFontSampleParameter::ParameterName)
        .def_readwrite("ExpressionGUID", &UMaterialExpressionFontSampleParameter::ExpressionGUID)
        .def_readwrite("Font", &UMaterialExpressionFontSample::Font)
        .def_readwrite("FontTexturePage", &UMaterialExpressionFontSample::FontTexturePage)
        .def("StaticClass", &UMaterialExpressionFontSampleParameter::StaticClass, py::return_value_policy::reference)
          ;
}