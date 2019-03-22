#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UActorFactoryMissionPickupFailsafe(py::module &m)
{
    py::class_< UActorFactoryMissionPickupFailsafe,  UActorFactory   >(m, "UActorFactoryMissionPickupFailsafe")
        .def_readwrite("Definition", &UActorFactoryMissionPickupSpawner::Definition)
        .def("StaticClass", &UActorFactoryMissionPickupFailsafe::StaticClass, py::return_value_policy::reference)
          ;
}