#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UPopulationAspect()
{
    class_< UPopulationAspect, bases< UObject >  , boost::noncopyable>("UPopulationAspect", no_init)
        .def("StaticClass", &UPopulationAspect::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventDenStatRemoved", &UPopulationAspect::eventDenStatRemoved)
        .def("eventDenStatAdded", &UPopulationAspect::eventDenStatAdded)
        .def("eventEnabledStatusChanged", &UPopulationAspect::eventEnabledStatusChanged)
        .def("eventAllActorsRemoved", &UPopulationAspect::eventAllActorsRemoved)
        .def("eventOnActorDeath", &UPopulationAspect::eventOnActorDeath)
        .def("eventOnSpawnActor", &UPopulationAspect::eventOnSpawnActor)
        .def("eventinitialize", &UPopulationAspect::eventinitialize)
        .staticmethod("StaticClass")
  ;
}