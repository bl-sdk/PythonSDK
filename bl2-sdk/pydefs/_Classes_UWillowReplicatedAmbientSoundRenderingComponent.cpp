#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowReplicatedAmbientSoundRenderingComponent()
{
    class_< UWillowReplicatedAmbientSoundRenderingComponent, bases< UPrimitiveComponent >  , boost::noncopyable>("UWillowReplicatedAmbientSoundRenderingComponent", no_init)
        .def("StaticClass", &UWillowReplicatedAmbientSoundRenderingComponent::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}