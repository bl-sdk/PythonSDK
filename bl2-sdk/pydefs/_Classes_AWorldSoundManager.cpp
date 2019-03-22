#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWorldSoundManager(py::module &m)
{
    py::class_< AWorldSoundManager,  AInfo   >(m, "AWorldSoundManager")
        .def_readwrite("EventSources", &AWorldSoundManager::EventSources)
        .def_readwrite("UIAkComponent", &AWorldSoundManager::UIAkComponent)
        .def("GetWorldSoundCount", &AWorldSoundManager::GetWorldSoundCount)
        .def("StaticPlayUIAkEvent", &AWorldSoundManager::StaticPlayUIAkEvent)
        .def("StaticUnregisterEventSource", &AWorldSoundManager::StaticUnregisterEventSource)
        .def("StaticRegisterEventSource", &AWorldSoundManager::StaticRegisterEventSource)
        .def("StaticSetState", &AWorldSoundManager::StaticSetState)
        .def("StaticSetGlobalRTPCValue", &AWorldSoundManager::StaticSetGlobalRTPCValue)
        .def("StaticStopWorldAkEvents", &AWorldSoundManager::StaticStopWorldAkEvents)
        .def("StaticHearWorldAkEvent", &AWorldSoundManager::StaticHearWorldAkEvent)
        .def("StaticPlayWorldAkEvent", &AWorldSoundManager::StaticPlayWorldAkEvent)
          ;
}