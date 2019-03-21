#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWillowReplicatedAmbientSound(py::object m)
{
    py::class_< AWillowReplicatedAmbientSound,  AActor   >(m, "AWillowReplicatedAmbientSound")
        .def_readwrite("AkEvent", &AWillowReplicatedAmbientSound::AkEvent)
        .def_readwrite("AdditionalSources", &AWillowReplicatedAmbientSound::AdditionalSources)
        .def_readwrite("StopAkEvent", &AWillowReplicatedAmbientSound::StopAkEvent)
        .def_readwrite("SeamlessPlayingInfo", &AWillowReplicatedAmbientSound::SeamlessPlayingInfo)
        .def_readwrite("Group", &AWillowReplicatedAmbientSound::Group)
        .def("StaticClass", &AWillowReplicatedAmbientSound::StaticClass, py::return_value_policy::reference)
        .def("OnToggle", &AWillowReplicatedAmbientSound::OnToggle)
          ;
}