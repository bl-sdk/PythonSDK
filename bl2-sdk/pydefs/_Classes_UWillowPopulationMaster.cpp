#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowPopulationMaster(py::module &m)
{
    py::class_< UWillowPopulationMaster,  UPopulationMaster   >(m, "UWillowPopulationMaster")
        .def("StaticClass", &UWillowPopulationMaster::StaticClass, py::return_value_policy::reference)
        .def("UpdateGRI", &UWillowPopulationMaster::UpdateGRI)
        .def("RemoveSpawnedActor", &UWillowPopulationMaster::RemoveSpawnedActor)
        .def("GetVehicleDefinitionFromVehicleSpawnStation", &UWillowPopulationMaster::GetVehicleDefinitionFromVehicleSpawnStation, py::return_value_policy::reference)
        .def("GetPooledVehicleIndexFromVehicleSpawnStation", &UWillowPopulationMaster::GetPooledVehicleIndexFromVehicleSpawnStation)
        .def("GetVehicleFromVehicleSpawnStation", &UWillowPopulationMaster::GetVehicleFromVehicleSpawnStation, py::return_value_policy::reference)
        .def("DespawnVehicleFromVehicleSpawnStation", &UWillowPopulationMaster::DespawnVehicleFromVehicleSpawnStation)
        .def("SpawnVehicleFromVehicleSpawnStation", &UWillowPopulationMaster::SpawnVehicleFromVehicleSpawnStation)
        .def("SpawnActorFromOpportunity", &UWillowPopulationMaster::SpawnActorFromOpportunity, py::return_value_policy::reference)
          ;
}