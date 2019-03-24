#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionFontSampleParameter(py::module &m)
{
    py::class_< UMaterialExpressionFontSampleParameter,  UMaterialExpression   >(m, "UMaterialExpressionFontSampleParameter")
		.def_static("StaticClass", &UMaterialExpressionFontSampleParameter::StaticClass, py::return_value_policy::reference)
        .def_readwrite("ParameterName", &UMaterialExpressionFontSampleParameter::ParameterName)
        .def_readwrite("ExpressionGUID", &UMaterialExpressionFontSampleParameter::ExpressionGUID)
        .def_readwrite("Font", &UMaterialExpressionFontSample::Font)
        .def_readwrite("FontTexturePage", &UMaterialExpressionFontSample::FontTexturePage)
          ;
}