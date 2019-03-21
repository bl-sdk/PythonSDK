#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UDrawSoundRadiusComponent()
{
    class_< UDrawSoundRadiusComponent, bases< UDrawSphereComponent >  , boost::noncopyable>("UDrawSoundRadiusComponent", no_init)
        .def("StaticClass", &UDrawSoundRadiusComponent::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}