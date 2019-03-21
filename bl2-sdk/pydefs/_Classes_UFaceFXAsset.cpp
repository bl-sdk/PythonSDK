#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UFaceFXAsset()
{
    class_< UFaceFXAsset, bases< UObject >  , boost::noncopyable>("UFaceFXAsset", no_init)
        .def_readwrite("FaceFXActor", &UFaceFXAsset::FaceFXActor)
        .def_readwrite("RawFaceFXActorBytes", &UFaceFXAsset::RawFaceFXActorBytes)
        .def_readwrite("RawFaceFXSessionBytes", &UFaceFXAsset::RawFaceFXSessionBytes)
        .def_readwrite("MountedFaceFXAnimSets", &UFaceFXAsset::MountedFaceFXAnimSets)
        .def_readwrite("NumLoadErrors", &UFaceFXAsset::NumLoadErrors)
        .def_readwrite("SoundNodeWaveToGroupAndAnimNameArray", &UFaceFXAsset::SoundNodeWaveToGroupAndAnimNameArray)
        .def("StaticClass", &UFaceFXAsset::StaticClass, return_value_policy< reference_existing_object >())
        .def("PlayFaceFxAnimFromSoundNodeOnActor", &UFaceFXAsset::PlayFaceFxAnimFromSoundNodeOnActor)
        .def("UnmountFaceFXAnimSet", &UFaceFXAsset::UnmountFaceFXAnimSet)
        .def("MountFaceFXAnimSet", &UFaceFXAsset::MountFaceFXAnimSet)
        .staticmethod("StaticClass")
  ;
}