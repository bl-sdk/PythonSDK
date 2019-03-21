#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionDepthBiasedBlend()
{
    class_< UMaterialExpressionDepthBiasedBlend, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionDepthBiasedBlend", no_init)
        .def_readwrite("BiasScale", &UMaterialExpressionDepthBiasedBlend::BiasScale)
        .def_readwrite("RGB", &UMaterialExpressionDepthBiasedBlend::RGB)
        .def_readwrite("Alpha", &UMaterialExpressionDepthBiasedBlend::Alpha)
        .def_readwrite("Bias", &UMaterialExpressionDepthBiasedBlend::Bias)
        .def("StaticClass", &UMaterialExpressionDepthBiasedBlend::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}