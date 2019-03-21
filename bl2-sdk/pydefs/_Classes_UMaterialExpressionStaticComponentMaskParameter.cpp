#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionStaticComponentMaskParameter()
{
    class_< UMaterialExpressionStaticComponentMaskParameter, bases< UMaterialExpressionParameter >  , boost::noncopyable>("UMaterialExpressionStaticComponentMaskParameter", no_init)
        .def_readwrite("Input", &UMaterialExpressionStaticComponentMaskParameter::Input)
        .def_readwrite("InstanceOverride", &UMaterialExpressionStaticComponentMaskParameter::InstanceOverride)
        .def("StaticClass", &UMaterialExpressionStaticComponentMaskParameter::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}