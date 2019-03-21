#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionStaticSwitchParameter()
{
    class_< UMaterialExpressionStaticSwitchParameter, bases< UMaterialExpressionParameter >  , boost::noncopyable>("UMaterialExpressionStaticSwitchParameter", no_init)
        .def_readwrite("A", &UMaterialExpressionStaticSwitchParameter::A)
        .def_readwrite("B", &UMaterialExpressionStaticSwitchParameter::B)
        .def_readwrite("InstanceOverride", &UMaterialExpressionStaticSwitchParameter::InstanceOverride)
        .def("StaticClass", &UMaterialExpressionStaticSwitchParameter::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}