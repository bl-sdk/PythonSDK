#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UQuestAcceptGFxDefinition()
{
    class_< UQuestAcceptGFxDefinition, bases< UWillowGFxMovie3DDefinition >  , boost::noncopyable>("UQuestAcceptGFxDefinition", no_init)
        .def_readwrite("MissionTextDefinition", &UQuestAcceptGFxDefinition::MissionTextDefinition)
        .def_readwrite("NumEntriesOnMissionList", &UQuestAcceptGFxDefinition::NumEntriesOnMissionList)
        .def_readwrite("Pres_Available", &UQuestAcceptGFxDefinition::Pres_Available)
        .def_readwrite("Pres_Active", &UQuestAcceptGFxDefinition::Pres_Active)
        .def_readwrite("Pres_ReadyToTurnIn", &UQuestAcceptGFxDefinition::Pres_ReadyToTurnIn)
        .def_readwrite("Pres_NotStarted", &UQuestAcceptGFxDefinition::Pres_NotStarted)
        .def_readwrite("Pres_Complete", &UQuestAcceptGFxDefinition::Pres_Complete)
        .def_readwrite("Pres_Ineligible", &UQuestAcceptGFxDefinition::Pres_Ineligible)
        .def_readwrite("Pres_Failed", &UQuestAcceptGFxDefinition::Pres_Failed)
        .def_readwrite("PostProcessInterpolationTime", &UQuestAcceptGFxDefinition::PostProcessInterpolationTime)
        .def("StaticClass", &UQuestAcceptGFxDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}