#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_SpawnFromPopulationSystem(py::object m)
{
    py::class_< UBehavior_SpawnFromPopulationSystem,  UBehaviorBase   >(m, "UBehavior_SpawnFromPopulationSystem")
        .def_readwrite("SpawnFactory", &UBehavior_SpawnFromPopulationSystem::SpawnFactory)
        .def_readwrite("GameStageContext", &UBehavior_SpawnFromPopulationSystem::GameStageContext)
        .def_readwrite("SpawnLocOffset", &UBehavior_SpawnFromPopulationSystem::SpawnLocOffset)
        .def_readwrite("InheritLocationRotationFrom", &UBehavior_SpawnFromPopulationSystem::InheritLocationRotationFrom)
        .def_readwrite("SpawnRotationOffset", &UBehavior_SpawnFromPopulationSystem::SpawnRotationOffset)
        .def_readwrite("MyOwner", &UBehavior_SpawnFromPopulationSystem::MyOwner)
        .def_readwrite("StartingVelocity", &UBehavior_SpawnFromPopulationSystem::StartingVelocity)
        .def_readwrite("InstanceDataContext", &UBehavior_SpawnFromPopulationSystem::InstanceDataContext)
        .def_readwrite("SavedReferenceName", &UBehavior_SpawnFromPopulationSystem::SavedReferenceName)
        .def_readwrite("FloorTestZDist", &UBehavior_SpawnFromPopulationSystem::FloorTestZDist)
        .def("StaticClass", &UBehavior_SpawnFromPopulationSystem::StaticClass, py::return_value_policy::reference)
        .def("PublishBehaviorOutput", &UBehavior_SpawnFromPopulationSystem::PublishBehaviorOutput)
        .def("ApplyBehaviorToContext", &UBehavior_SpawnFromPopulationSystem::ApplyBehaviorToContext)
          ;
}