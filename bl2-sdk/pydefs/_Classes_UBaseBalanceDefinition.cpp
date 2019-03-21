#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBaseBalanceDefinition()
{
    class_< UBaseBalanceDefinition, bases< UGBXDefinition >  , boost::noncopyable>("UBaseBalanceDefinition", no_init)
        .def("StaticClass", &UBaseBalanceDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyGradeCustomizations", &UBaseBalanceDefinition::ApplyGradeCustomizations)
        .def("DoesSpawnChampion", &UBaseBalanceDefinition::DoesSpawnChampion)
        .def("GetDisplayNameAtGrade", &UBaseBalanceDefinition::GetDisplayNameAtGrade)
        .def("GetSpawnProbabilityModifier", &UBaseBalanceDefinition::GetSpawnProbabilityModifier)
        .def("IsGameStageSupported", &UBaseBalanceDefinition::IsGameStageSupported)
        .def("SelectGradeIndex", &UBaseBalanceDefinition::SelectGradeIndex)
        .staticmethod("StaticClass")
  ;
}