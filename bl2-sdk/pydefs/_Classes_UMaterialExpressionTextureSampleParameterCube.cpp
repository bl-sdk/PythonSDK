#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionTextureSampleParameterCube()
{
    class_< UMaterialExpressionTextureSampleParameterCube, bases< UMaterialExpressionTextureSampleParameter >  , boost::noncopyable>("UMaterialExpressionTextureSampleParameterCube", no_init)
        .def("StaticClass", &UMaterialExpressionTextureSampleParameterCube::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}