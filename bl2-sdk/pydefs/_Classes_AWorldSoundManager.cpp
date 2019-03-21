#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AWorldSoundManager()
{
    class_< AWorldSoundManager, bases< AInfo >  , boost::noncopyable>("AWorldSoundManager", no_init)
        .def_readwrite("EventSources", &AWorldSoundManager::EventSources)
        .def_readwrite("UIAkComponent", &AWorldSoundManager::UIAkComponent)
        .def("StaticClass", &AWorldSoundManager::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetWorldSoundCount", &AWorldSoundManager::GetWorldSoundCount)
        .def("StaticPlayUIAkEvent", &AWorldSoundManager::StaticPlayUIAkEvent)
        .def("StaticUnregisterEventSource", &AWorldSoundManager::StaticUnregisterEventSource)
        .def("StaticRegisterEventSource", &AWorldSoundManager::StaticRegisterEventSource)
        .def("StaticSetState", &AWorldSoundManager::StaticSetState)
        .def("StaticSetGlobalRTPCValue", &AWorldSoundManager::StaticSetGlobalRTPCValue)
        .def("StaticStopWorldAkEvents", &AWorldSoundManager::StaticStopWorldAkEvents)
        .def("StaticHearWorldAkEvent", &AWorldSoundManager::StaticHearWorldAkEvent)
        .def("StaticPlayWorldAkEvent", &AWorldSoundManager::StaticPlayWorldAkEvent)
        .staticmethod("StaticClass")
  ;
}