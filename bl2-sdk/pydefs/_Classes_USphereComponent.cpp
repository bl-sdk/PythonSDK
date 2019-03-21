#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USphereComponent()
{
    class_< USphereComponent, bases< UCylinderComponent >  , boost::noncopyable>("USphereComponent", no_init)
        .def("StaticClass", &USphereComponent::StaticClass, return_value_policy< reference_existing_object >())
        .def("SetSphereSize", &USphereComponent::SetSphereSize)
        .staticmethod("StaticClass")
  ;
}