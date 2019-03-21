#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UFaceFXAsset(py::object m)
{
    py::class_< UFaceFXAsset,  UObject   >(m, "UFaceFXAsset")
        .def_readwrite("FaceFXActor", &UFaceFXAsset::FaceFXActor)
        .def_readwrite("RawFaceFXActorBytes", &UFaceFXAsset::RawFaceFXActorBytes)
        .def_readwrite("RawFaceFXSessionBytes", &UFaceFXAsset::RawFaceFXSessionBytes)
        .def_readwrite("MountedFaceFXAnimSets", &UFaceFXAsset::MountedFaceFXAnimSets)
        .def_readwrite("NumLoadErrors", &UFaceFXAsset::NumLoadErrors)
        .def_readwrite("SoundNodeWaveToGroupAndAnimNameArray", &UFaceFXAsset::SoundNodeWaveToGroupAndAnimNameArray)
        .def("StaticClass", &UFaceFXAsset::StaticClass, py::return_value_policy::reference)
        .def("PlayFaceFxAnimFromSoundNodeOnActor", &UFaceFXAsset::PlayFaceFxAnimFromSoundNodeOnActor)
        .def("UnmountFaceFXAnimSet", &UFaceFXAsset::UnmountFaceFXAnimSet)
        .def("MountFaceFXAnimSet", &UFaceFXAsset::MountFaceFXAnimSet)
          ;
}