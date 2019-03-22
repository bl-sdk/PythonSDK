#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPopulationAspect(py::module &m)
{
    py::class_< UPopulationAspect,  UObject   >(m, "UPopulationAspect")
        .def("eventDenStatRemoved", &UPopulationAspect::eventDenStatRemoved)
        .def("eventDenStatAdded", &UPopulationAspect::eventDenStatAdded)
        .def("eventEnabledStatusChanged", &UPopulationAspect::eventEnabledStatusChanged)
        .def("eventAllActorsRemoved", &UPopulationAspect::eventAllActorsRemoved)
        .def("eventOnActorDeath", &UPopulationAspect::eventOnActorDeath)
        .def("eventOnSpawnActor", &UPopulationAspect::eventOnSpawnActor)
        .def("eventinitialize", &UPopulationAspect::eventinitialize)
          ;
}