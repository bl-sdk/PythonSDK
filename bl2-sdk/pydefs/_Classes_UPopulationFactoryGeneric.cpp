#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPopulationFactoryGeneric(py::module &m)
{
    py::class_< UPopulationFactoryGeneric,  UPopulationFactory   >(m, "UPopulationFactoryGeneric")
		.def_static("StaticClass", &UPopulationFactoryGeneric::StaticClass, py::return_value_policy::reference)
        .def_readwrite("ActorArchetype", &UPopulationFactoryGeneric::ActorArchetype)
        .def("eventCreatePopulationActor", &UPopulationFactoryGeneric::eventCreatePopulationActor, py::return_value_policy::reference)
        .def("eventGetSpawnVisibilityBounds", &UPopulationFactoryGeneric::eventGetSpawnVisibilityBounds)
          ;
}