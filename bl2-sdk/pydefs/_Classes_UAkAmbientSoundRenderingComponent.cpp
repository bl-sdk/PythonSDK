#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAkAmbientSoundRenderingComponent()
{
    class_< UAkAmbientSoundRenderingComponent, bases< UPrimitiveComponent >  , boost::noncopyable>("UAkAmbientSoundRenderingComponent", no_init)
        .def("StaticClass", &UAkAmbientSoundRenderingComponent::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}