#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionFontSample()
{
    class_< UMaterialExpressionFontSample, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionFontSample", no_init)
        .def_readwrite("Font", &UMaterialExpressionFontSample::Font)
        .def_readwrite("FontTexturePage", &UMaterialExpressionFontSample::FontTexturePage)
        .def("StaticClass", &UMaterialExpressionFontSample::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}