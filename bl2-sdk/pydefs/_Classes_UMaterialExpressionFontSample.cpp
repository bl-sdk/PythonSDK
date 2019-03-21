#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionFontSample()
{
    py::class_< UMaterialExpressionFontSample,  UMaterialExpression   >("UMaterialExpressionFontSample")
        .def_readwrite("Font", &UMaterialExpressionFontSample::Font)
        .def_readwrite("FontTexturePage", &UMaterialExpressionFontSample::FontTexturePage)
        .def("StaticClass", &UMaterialExpressionFontSample::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}