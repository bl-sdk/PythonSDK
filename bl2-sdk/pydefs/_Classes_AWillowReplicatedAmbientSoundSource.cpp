#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AWillowReplicatedAmbientSoundSource()
{
    class_< AWillowReplicatedAmbientSoundSource, bases< ANote >  , boost::noncopyable>("AWillowReplicatedAmbientSoundSource", no_init)
        .def("StaticClass", &AWillowReplicatedAmbientSoundSource::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}