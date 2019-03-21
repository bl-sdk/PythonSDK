#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionTextureSample()
{
    class_< UMaterialExpressionTextureSample, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionTextureSample", no_init)
        .def_readwrite("Texture", &UMaterialExpressionTextureSample::Texture)
        .def_readwrite("Coordinates", &UMaterialExpressionTextureSample::Coordinates)
        .def("StaticClass", &UMaterialExpressionTextureSample::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}