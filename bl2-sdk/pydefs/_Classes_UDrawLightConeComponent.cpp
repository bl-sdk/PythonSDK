#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UDrawLightConeComponent()
{
    class_< UDrawLightConeComponent, bases< UPrimitiveComponent >  , boost::noncopyable>("UDrawLightConeComponent", no_init)
        .def_readwrite("ConeColor", &UDrawConeComponent::ConeColor)
        .def_readwrite("ConeRadius", &UDrawConeComponent::ConeRadius)
        .def_readwrite("ConeAngle", &UDrawConeComponent::ConeAngle)
        .def_readwrite("ConeSides", &UDrawConeComponent::ConeSides)
        .def("StaticClass", &UDrawLightConeComponent::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}