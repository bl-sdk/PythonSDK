#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionDepthBiasBlend()
{
    class_< UMaterialExpressionDepthBiasBlend, bases< UMaterialExpressionTextureSample >  , boost::noncopyable>("UMaterialExpressionDepthBiasBlend", no_init)
        .def_readwrite("BiasScale", &UMaterialExpressionDepthBiasBlend::BiasScale)
        .def_readwrite("Bias", &UMaterialExpressionDepthBiasBlend::Bias)
        .def("StaticClass", &UMaterialExpressionDepthBiasBlend::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}