#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UActorFactoryMissionPickupSpawner(py::object m)
{
    py::class_< UActorFactoryMissionPickupSpawner,  UActorFactory   >(m, "UActorFactoryMissionPickupSpawner")
        .def_readwrite("Definition", &UActorFactoryMissionPickupSpawner::Definition)
        .def("StaticClass", &UActorFactoryMissionPickupSpawner::StaticClass, py::return_value_policy::reference)
          ;
}