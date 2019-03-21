#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_AISpawn(py::object m)
{
    py::class_< UBehavior_AISpawn,  UBehaviorBase   >(m, "UBehavior_AISpawn")
        .def_readwrite("SpawnPointName", &UBehavior_AISpawn::SpawnPointName)
        .def_readwrite("PopDef", &UBehavior_AISpawn::PopDef)
        .def_readwrite("SpawnContext", &UBehavior_AISpawn::SpawnContext)
        .def_readwrite("InstanceDataName", &UBehavior_AISpawn::InstanceDataName)
        .def_readwrite("OverrideContext", &UBehavior_AISpawn::OverrideContext)
        .def_readwrite("PopulationOverrideName", &UBehavior_AISpawn::PopulationOverrideName)
        .def("StaticClass", &UBehavior_AISpawn::StaticClass, py::return_value_policy::reference)
        .def("SpawnActor", &UBehavior_AISpawn::SpawnActor, py::return_value_policy::reference)
        .def("PublishBehaviorOutput", &UBehavior_AISpawn::PublishBehaviorOutput)
        .def("ApplyBehaviorToContext", &UBehavior_AISpawn::ApplyBehaviorToContext)
          ;
}