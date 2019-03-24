#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionFontSample(py::module &m)
{
    py::class_< UMaterialExpressionFontSample,  UMaterialExpression   >(m, "UMaterialExpressionFontSample")
		.def_static("StaticClass", &UMaterialExpressionFontSample::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Font", &UMaterialExpressionFontSample::Font)
        .def_readwrite("FontTexturePage", &UMaterialExpressionFontSample::FontTexturePage)
          ;
}