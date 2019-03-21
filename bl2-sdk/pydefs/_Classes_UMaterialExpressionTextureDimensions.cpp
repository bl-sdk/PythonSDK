#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionTextureDimensions()
{
    class_< UMaterialExpressionTextureDimensions, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionTextureDimensions", no_init)
        .def_readwrite("Texture", &UMaterialExpressionTextureDimensions::Texture)
        .def("StaticClass", &UMaterialExpressionTextureDimensions::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}