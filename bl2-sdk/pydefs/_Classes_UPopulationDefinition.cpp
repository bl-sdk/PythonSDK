#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPopulationDefinition(py::module &m)
{
    py::class_< UPopulationDefinition,  UGBXDefinition   >(m, "UPopulationDefinition")
		.def_static("StaticClass", &UPopulationDefinition::StaticClass, py::return_value_policy::reference)
        .def_readwrite("VfTable_IIConstructObject", &UPopulationDefinition::VfTable_IIConstructObject)
        .def_readwrite("ActorArchetypeList", &UPopulationDefinition::ActorArchetypeList)
        .def_readwrite("RespawnStyle", &UPopulationDefinition::RespawnStyle)
        .def("IsAllSpawnTypesDebugEnabled", &UPopulationDefinition::IsAllSpawnTypesDebugEnabled)
        .def("ToggleAllSpawnTypesDebug", &UPopulationDefinition::ToggleAllSpawnTypesDebug)
        .def("GetRandomFactory", &UPopulationDefinition::GetRandomFactory, py::return_value_policy::reference)
          ;
}