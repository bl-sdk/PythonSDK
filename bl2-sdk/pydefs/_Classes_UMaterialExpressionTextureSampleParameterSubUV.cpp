#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionTextureSampleParameterSubUV()
{
    class_< UMaterialExpressionTextureSampleParameterSubUV, bases< UMaterialExpressionTextureSampleParameter2D >  , boost::noncopyable>("UMaterialExpressionTextureSampleParameterSubUV", no_init)
        .def("StaticClass", &UMaterialExpressionTextureSampleParameterSubUV::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}