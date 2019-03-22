#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UActorFactoryMissionPickupSpawner(py::module &m)
{
    py::class_< UActorFactoryMissionPickupSpawner,  UActorFactory   >(m, "UActorFactoryMissionPickupSpawner")
        .def_readwrite("Definition", &UActorFactoryMissionPickupSpawner::Definition)
          ;
}