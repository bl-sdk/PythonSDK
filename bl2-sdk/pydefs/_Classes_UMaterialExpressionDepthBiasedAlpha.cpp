#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionDepthBiasedAlpha()
{
    class_< UMaterialExpressionDepthBiasedAlpha, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionDepthBiasedAlpha", no_init)
        .def_readwrite("BiasScale", &UMaterialExpressionDepthBiasedAlpha::BiasScale)
        .def_readwrite("Alpha", &UMaterialExpressionDepthBiasedAlpha::Alpha)
        .def_readwrite("Bias", &UMaterialExpressionDepthBiasedAlpha::Bias)
        .def("StaticClass", &UMaterialExpressionDepthBiasedAlpha::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}