#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AWillowReplicatedAmbientSound()
{
    class_< AWillowReplicatedAmbientSound, bases< AActor >  , boost::noncopyable>("AWillowReplicatedAmbientSound", no_init)
        .def_readwrite("AkEvent", &AWillowReplicatedAmbientSound::AkEvent)
        .def_readwrite("AdditionalSources", &AWillowReplicatedAmbientSound::AdditionalSources)
        .def_readwrite("StopAkEvent", &AWillowReplicatedAmbientSound::StopAkEvent)
        .def_readwrite("SeamlessPlayingInfo", &AWillowReplicatedAmbientSound::SeamlessPlayingInfo)
        .def_readwrite("Group", &AWillowReplicatedAmbientSound::Group)
        .def("StaticClass", &AWillowReplicatedAmbientSound::StaticClass, return_value_policy< reference_existing_object >())
        .def("OnToggle", &AWillowReplicatedAmbientSound::OnToggle)
        .staticmethod("StaticClass")
  ;
}