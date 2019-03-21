#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionCustomTexture()
{
    class_< UMaterialExpressionCustomTexture, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionCustomTexture", no_init)
        .def_readwrite("Texture", &UMaterialExpressionCustomTexture::Texture)
        .def("StaticClass", &UMaterialExpressionCustomTexture::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}