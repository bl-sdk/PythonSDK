#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UDrawSphereComponent()
{
    class_< UDrawSphereComponent, bases< UPrimitiveComponent >  , boost::noncopyable>("UDrawSphereComponent", no_init)
        .def_readwrite("SphereColor", &UDrawSphereComponent::SphereColor)
        .def_readwrite("SphereMaterial", &UDrawSphereComponent::SphereMaterial)
        .def_readwrite("SphereRadius", &UDrawSphereComponent::SphereRadius)
        .def_readwrite("SphereSides", &UDrawSphereComponent::SphereSides)
        .def("StaticClass", &UDrawSphereComponent::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}