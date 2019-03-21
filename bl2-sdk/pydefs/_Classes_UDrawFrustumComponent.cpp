#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UDrawFrustumComponent()
{
    class_< UDrawFrustumComponent, bases< UPrimitiveComponent >  , boost::noncopyable>("UDrawFrustumComponent", no_init)
        .def_readwrite("FrustumColor", &UDrawFrustumComponent::FrustumColor)
        .def_readwrite("FrustumAngle", &UDrawFrustumComponent::FrustumAngle)
        .def_readwrite("FrustumAspectRatio", &UDrawFrustumComponent::FrustumAspectRatio)
        .def_readwrite("FrustumStartDist", &UDrawFrustumComponent::FrustumStartDist)
        .def_readwrite("FrustumEndDist", &UDrawFrustumComponent::FrustumEndDist)
        .def_readwrite("Texture", &UDrawFrustumComponent::Texture)
        .def("StaticClass", &UDrawFrustumComponent::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}