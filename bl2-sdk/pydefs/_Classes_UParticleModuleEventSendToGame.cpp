#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleEventSendToGame(py::module &m)
{
    py::class_< UParticleModuleEventSendToGame,  UObject   >(m, "UParticleModuleEventSendToGame")
        .def("DoEvent", &UParticleModuleEventSendToGame::DoEvent)
          ;
}