#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAIPawnBalanceDefinition(py::object m)
{
    py::class_< UAIPawnBalanceDefinition,  UBaseBalanceDefinition   >(m, "UAIPawnBalanceDefinition")
        .def_readwrite("VfTable_IIConstructObject", &UAIPawnBalanceDefinition::VfTable_IIConstructObject)
        .def_readwrite("CanSpawnIf", &UAIPawnBalanceDefinition::CanSpawnIf)
        .def_readwrite("PlayThroughs", &UAIPawnBalanceDefinition::PlayThroughs)
        .def_readwrite("AIPawnArchetype", &UAIPawnBalanceDefinition::AIPawnArchetype)
        .def_readwrite("ActorTags", &UAIPawnBalanceDefinition::ActorTags)
        .def_readwrite("DefaultExpLevel", &UAIPawnBalanceDefinition::DefaultExpLevel)
        .def_readwrite("BaseItemGameStage", &UAIPawnBalanceDefinition::BaseItemGameStage)
        .def_readwrite("AchievementToUnlockOnDeath", &UAIPawnBalanceDefinition::AchievementToUnlockOnDeath)
        .def_readwrite("HasLookedUpFixupIndex", &UAIPawnBalanceDefinition::HasLookedUpFixupIndex)
        .def_readwrite("ItemGameStageOffset", &UAIPawnBalanceDefinition::ItemGameStageOffset)
        .def_readwrite("DefaultItemPoolIncludedLists", &UAIPawnBalanceDefinition::DefaultItemPoolIncludedLists)
        .def_readwrite("DefaultItemPoolList", &UAIPawnBalanceDefinition::DefaultItemPoolList)
        .def_readwrite("Grades", &UAIPawnBalanceDefinition::Grades)
        .def_readwrite("FixupAIPawnNameIndex", &UAIPawnBalanceDefinition::FixupAIPawnNameIndex)
        .def_readwrite("BalanceModifier", &UAIPawnBalanceDefinition::BalanceModifier)
        .def("StaticClass", &UAIPawnBalanceDefinition::StaticClass, py::return_value_policy::reference)
        .def("GetTransformedKillStat", &UAIPawnBalanceDefinition::GetTransformedKillStat)
        .def("GetTransformedDisplayName", &UAIPawnBalanceDefinition::GetTransformedDisplayName)
        .def("SetupPawnItemPoolList", &UAIPawnBalanceDefinition::SetupPawnItemPoolList)
        .def("GetPawnArchetype", &UAIPawnBalanceDefinition::GetPawnArchetype, py::return_value_policy::reference)
        .def("GetPlayThroughIndex", &UAIPawnBalanceDefinition::GetPlayThroughIndex)
          ;
}