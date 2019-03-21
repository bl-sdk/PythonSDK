#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionFontSampleParameter()
{
    class_< UMaterialExpressionFontSampleParameter, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionFontSampleParameter", no_init)
        .def_readwrite("ParameterName", &UMaterialExpressionFontSampleParameter::ParameterName)
        .def_readwrite("ExpressionGUID", &UMaterialExpressionFontSampleParameter::ExpressionGUID)
        .def_readwrite("Font", &UMaterialExpressionFontSample::Font)
        .def_readwrite("FontTexturePage", &UMaterialExpressionFontSample::FontTexturePage)
        .def("StaticClass", &UMaterialExpressionFontSampleParameter::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}