#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UDrawCapsuleComponent()
{
    class_< UDrawCapsuleComponent, bases< UPrimitiveComponent >  , boost::noncopyable>("UDrawCapsuleComponent", no_init)
        .def_readwrite("CapsuleColor", &UDrawCapsuleComponent::CapsuleColor)
        .def_readwrite("CapsuleMaterial", &UDrawCapsuleComponent::CapsuleMaterial)
        .def_readwrite("CapsuleHeight", &UDrawCapsuleComponent::CapsuleHeight)
        .def_readwrite("CapsuleRadius", &UDrawCapsuleComponent::CapsuleRadius)
        .def("StaticClass", &UDrawCapsuleComponent::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}