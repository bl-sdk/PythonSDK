#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UDrawLightRadiusComponent()
{
    class_< UDrawLightRadiusComponent, bases< UDrawSphereComponent >  , boost::noncopyable>("UDrawLightRadiusComponent", no_init)
        .def("StaticClass", &UDrawLightRadiusComponent::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}