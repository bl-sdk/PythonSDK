#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionGradient()
{
    class_< UMaterialExpressionGradient, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionGradient", no_init)
        .def_readwrite("Coordinates", &UMaterialExpressionGradient::Coordinates)
        .def_readwrite("GradientStyle", &UMaterialExpressionGradient::GradientStyle)
        .def_readwrite("AddressX", &UMaterialExpressionGradient::AddressX)
        .def_readwrite("AddressY", &UMaterialExpressionGradient::AddressY)
        .def_readwrite("ForegroundColor", &UMaterialExpressionGradient::ForegroundColor)
        .def_readwrite("BackgroundColor", &UMaterialExpressionGradient::BackgroundColor)
        .def_readwrite("ForegroundOffset", &UMaterialExpressionGradient::ForegroundOffset)
        .def_readwrite("BackgroundOffset", &UMaterialExpressionGradient::BackgroundOffset)
        .def("StaticClass", &UMaterialExpressionGradient::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}