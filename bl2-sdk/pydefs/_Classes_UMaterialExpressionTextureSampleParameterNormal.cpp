#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionTextureSampleParameterNormal()
{
    class_< UMaterialExpressionTextureSampleParameterNormal, bases< UMaterialExpressionTextureSampleParameter >  , boost::noncopyable>("UMaterialExpressionTextureSampleParameterNormal", no_init)
        .def_readwrite("InstanceOverride", &UMaterialExpressionTextureSampleParameterNormal::InstanceOverride)
        .def("StaticClass", &UMaterialExpressionTextureSampleParameterNormal::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}