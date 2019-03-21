#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPopulationFactoryGeneric()
{
    py::class_< UPopulationFactoryGeneric,  UPopulationFactory   >("UPopulationFactoryGeneric")
        .def_readwrite("ActorArchetype", &UPopulationFactoryGeneric::ActorArchetype)
        .def("StaticClass", &UPopulationFactoryGeneric::StaticClass, py::return_value_policy::reference)
        .def("eventCreatePopulationActor", &UPopulationFactoryGeneric::eventCreatePopulationActor, py::return_value_policy::reference)
        .def("eventGetSpawnVisibilityBounds", &UPopulationFactoryGeneric::eventGetSpawnVisibilityBounds)
        .staticmethod("StaticClass")
  ;
}