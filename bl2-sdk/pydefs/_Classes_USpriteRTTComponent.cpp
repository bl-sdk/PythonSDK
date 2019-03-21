#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USpriteRTTComponent()
{
    class_< USpriteRTTComponent, bases< USpriteComponent >  , boost::noncopyable>("USpriteRTTComponent", no_init)
        .def_readwrite("SpriteRTT", &USpriteRTTComponent::SpriteRTT)
        .def("StaticClass", &USpriteRTTComponent::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}