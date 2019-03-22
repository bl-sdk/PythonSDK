#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UFaceFXAsset(py::module &m)
{
    py::class_< UFaceFXAsset,  UObject   >(m, "UFaceFXAsset")
        .def_readwrite("FaceFXActor", &UFaceFXAsset::FaceFXActor)
        .def_readwrite("RawFaceFXActorBytes", &UFaceFXAsset::RawFaceFXActorBytes)
        .def_readwrite("RawFaceFXSessionBytes", &UFaceFXAsset::RawFaceFXSessionBytes)
        .def_readwrite("MountedFaceFXAnimSets", &UFaceFXAsset::MountedFaceFXAnimSets)
        .def_readwrite("NumLoadErrors", &UFaceFXAsset::NumLoadErrors)
        .def_readwrite("SoundNodeWaveToGroupAndAnimNameArray", &UFaceFXAsset::SoundNodeWaveToGroupAndAnimNameArray)
        .def("PlayFaceFxAnimFromSoundNodeOnActor", [](UFaceFXAsset &self , struct FString SoundToPlay, class USoundCue* SoundCueToPlay) { class UIFaceFXActor** pyTargetActor = 0 ;  bool ret =  self.PlayFaceFxAnimFromSoundNodeOnActor(SoundToPlay, SoundCueToPlay, pyTargetActor); return py::make_tuple(ret, *pyTargetActor); })
        .def("UnmountFaceFXAnimSet", &UFaceFXAsset::UnmountFaceFXAnimSet)
        .def("MountFaceFXAnimSet", &UFaceFXAsset::MountFaceFXAnimSet)
          ;
}