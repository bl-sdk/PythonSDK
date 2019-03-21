#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPopulationDefinition()
{
    py::class_< UPopulationDefinition,  UGBXDefinition   >("UPopulationDefinition")
        .def_readwrite("VfTable_IIConstructObject", &UPopulationDefinition::VfTable_IIConstructObject)
        .def_readwrite("ActorArchetypeList", &UPopulationDefinition::ActorArchetypeList)
        .def_readwrite("RespawnStyle", &UPopulationDefinition::RespawnStyle)
        .def("StaticClass", &UPopulationDefinition::StaticClass, py::return_value_policy::reference)
        .def("IsAllSpawnTypesDebugEnabled", &UPopulationDefinition::IsAllSpawnTypesDebugEnabled)
        .def("ToggleAllSpawnTypesDebug", &UPopulationDefinition::ToggleAllSpawnTypesDebug)
        .def("GetRandomFactory", &UPopulationDefinition::GetRandomFactory, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}