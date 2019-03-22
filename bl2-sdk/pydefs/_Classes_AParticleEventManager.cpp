#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AParticleEventManager(py::module &m)
{
    py::class_< AParticleEventManager,  AActor   >(m, "AParticleEventManager")
        .def("eventHandleParticleModuleEventSendToGame", &AParticleEventManager::eventHandleParticleModuleEventSendToGame)
          ;
}