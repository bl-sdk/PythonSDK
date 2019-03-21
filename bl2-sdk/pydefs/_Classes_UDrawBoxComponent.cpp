#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UDrawBoxComponent()
{
    class_< UDrawBoxComponent, bases< UPrimitiveComponent >  , boost::noncopyable>("UDrawBoxComponent", no_init)
        .def_readwrite("BoxColor", &UDrawBoxComponent::BoxColor)
        .def_readwrite("BoxMaterial", &UDrawBoxComponent::BoxMaterial)
        .def_readwrite("BoxExtent", &UDrawBoxComponent::BoxExtent)
        .def("StaticClass", &UDrawBoxComponent::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}