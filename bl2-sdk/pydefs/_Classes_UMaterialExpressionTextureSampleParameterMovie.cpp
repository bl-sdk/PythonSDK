#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionTextureSampleParameterMovie()
{
    class_< UMaterialExpressionTextureSampleParameterMovie, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionTextureSampleParameterMovie", no_init)
        .def_readwrite("ParameterName", &UMaterialExpressionTextureSampleParameter::ParameterName)
        .def_readwrite("ExpressionGUID", &UMaterialExpressionTextureSampleParameter::ExpressionGUID)
        .def_readwrite("Texture", &UMaterialExpressionTextureSample::Texture)
        .def_readwrite("Coordinates", &UMaterialExpressionTextureSample::Coordinates)
        .def("StaticClass", &UMaterialExpressionTextureSampleParameterMovie::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}