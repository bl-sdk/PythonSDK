#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UInteractiveObjectBalanceDefinition()
{
    class_< UInteractiveObjectBalanceDefinition, bases< UBaseBalanceDefinition >  , boost::noncopyable>("UInteractiveObjectBalanceDefinition", no_init)
        .def_readwrite("VfTable_IIConstructObject", &UInteractiveObjectBalanceDefinition::VfTable_IIConstructObject)
        .def_readwrite("DefaultInteractiveObject", &UInteractiveObjectBalanceDefinition::DefaultInteractiveObject)
        .def_readwrite("DefaultExpLevel", &UInteractiveObjectBalanceDefinition::DefaultExpLevel)
        .def_readwrite("DefaultDisplayName", &UInteractiveObjectBalanceDefinition::DefaultDisplayName)
        .def_readwrite("ActorTags", &UInteractiveObjectBalanceDefinition::ActorTags)
        .def_readwrite("DefaultIncludedLootLists", &UInteractiveObjectBalanceDefinition::DefaultIncludedLootLists)
        .def_readwrite("DefaultLoot", &UInteractiveObjectBalanceDefinition::DefaultLoot)
        .def_readwrite("DefaultLootGameStageVarianceFormula", &UInteractiveObjectBalanceDefinition::DefaultLootGameStageVarianceFormula)
        .def_readwrite("Grades", &UInteractiveObjectBalanceDefinition::Grades)
        .def("StaticClass", &UInteractiveObjectBalanceDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .def("SetupInteractiveObjectLoot", &UInteractiveObjectBalanceDefinition::SetupInteractiveObjectLoot)
        .def("GetInteractiveObjectDefinitionForGrade", &UInteractiveObjectBalanceDefinition::GetInteractiveObjectDefinitionForGrade, return_value_policy< reference_existing_object >())
        .def("GetInteractiveObjectDefinitionForGameStage", &UInteractiveObjectBalanceDefinition::GetInteractiveObjectDefinitionForGameStage, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}