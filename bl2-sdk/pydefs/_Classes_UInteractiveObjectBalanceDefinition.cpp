#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInteractiveObjectBalanceDefinition(py::object m)
{
    py::class_< UInteractiveObjectBalanceDefinition,  UBaseBalanceDefinition   >(m, "UInteractiveObjectBalanceDefinition")
        .def_readwrite("VfTable_IIConstructObject", &UInteractiveObjectBalanceDefinition::VfTable_IIConstructObject)
        .def_readwrite("DefaultInteractiveObject", &UInteractiveObjectBalanceDefinition::DefaultInteractiveObject)
        .def_readwrite("DefaultExpLevel", &UInteractiveObjectBalanceDefinition::DefaultExpLevel)
        .def_readwrite("DefaultDisplayName", &UInteractiveObjectBalanceDefinition::DefaultDisplayName)
        .def_readwrite("ActorTags", &UInteractiveObjectBalanceDefinition::ActorTags)
        .def_readwrite("DefaultIncludedLootLists", &UInteractiveObjectBalanceDefinition::DefaultIncludedLootLists)
        .def_readwrite("DefaultLoot", &UInteractiveObjectBalanceDefinition::DefaultLoot)
        .def_readwrite("DefaultLootGameStageVarianceFormula", &UInteractiveObjectBalanceDefinition::DefaultLootGameStageVarianceFormula)
        .def_readwrite("Grades", &UInteractiveObjectBalanceDefinition::Grades)
        .def("StaticClass", &UInteractiveObjectBalanceDefinition::StaticClass, py::return_value_policy::reference)
        .def("SetupInteractiveObjectLoot", &UInteractiveObjectBalanceDefinition::SetupInteractiveObjectLoot)
        .def("GetInteractiveObjectDefinitionForGrade", &UInteractiveObjectBalanceDefinition::GetInteractiveObjectDefinitionForGrade, py::return_value_policy::reference)
        .def("GetInteractiveObjectDefinitionForGameStage", &UInteractiveObjectBalanceDefinition::GetInteractiveObjectDefinitionForGameStage, py::return_value_policy::reference)
          ;
}