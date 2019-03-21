#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UDrawQuadComponent()
{
    class_< UDrawQuadComponent, bases< UPrimitiveComponent >  , boost::noncopyable>("UDrawQuadComponent", no_init)
        .def_readwrite("Texture", &UDrawQuadComponent::Texture)
        .def_readwrite("Width", &UDrawQuadComponent::Width)
        .def_readwrite("Height", &UDrawQuadComponent::Height)
        .def("StaticClass", &UDrawQuadComponent::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}