#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionSteepParallaxOffset()
{
    class_< UMaterialExpressionSteepParallaxOffset, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionSteepParallaxOffset", no_init)
        .def_readwrite("ParallaxTexture", &UMaterialExpressionSteepParallaxOffset::ParallaxTexture)
        .def_readwrite("NumSteps", &UMaterialExpressionSteepParallaxOffset::NumSteps)
        .def_readwrite("HeightScaleInput", &UMaterialExpressionSteepParallaxOffset::HeightScaleInput)
        .def("StaticClass", &UMaterialExpressionSteepParallaxOffset::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}