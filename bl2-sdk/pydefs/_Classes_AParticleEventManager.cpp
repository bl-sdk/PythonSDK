#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AParticleEventManager(py::object m)
{
    py::class_< AParticleEventManager,  AActor   >(m, "AParticleEventManager")
        .def("StaticClass", &AParticleEventManager::StaticClass, py::return_value_policy::reference)
        .def("eventHandleParticleModuleEventSendToGame", &AParticleEventManager::eventHandleParticleModuleEventSendToGame)
          ;
}