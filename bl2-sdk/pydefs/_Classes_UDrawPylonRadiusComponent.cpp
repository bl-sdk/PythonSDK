#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UDrawPylonRadiusComponent()
{
    class_< UDrawPylonRadiusComponent, bases< UPrimitiveComponent >  , boost::noncopyable>("UDrawPylonRadiusComponent", no_init)
        .def_readwrite("SphereColor", &UDrawSphereComponent::SphereColor)
        .def_readwrite("SphereMaterial", &UDrawSphereComponent::SphereMaterial)
        .def_readwrite("SphereRadius", &UDrawSphereComponent::SphereRadius)
        .def_readwrite("SphereSides", &UDrawSphereComponent::SphereSides)
        .def("StaticClass", &UDrawPylonRadiusComponent::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}