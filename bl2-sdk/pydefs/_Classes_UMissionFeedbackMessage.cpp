#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMissionFeedbackMessage()
{
    class_< UMissionFeedbackMessage, bases< UWillowLocalMessage >  , boost::noncopyable>("UMissionFeedbackMessage", no_init)
        .def_readwrite("MissionAdded", &UMissionFeedbackMessage::MissionAdded)
        .def_readwrite("MissionCompleted", &UMissionFeedbackMessage::MissionCompleted)
        .def_readwrite("MissionFailed", &UMissionFeedbackMessage::MissionFailed)
        .def_readwrite("MissionRequiredObjectivesComplete", &UMissionFeedbackMessage::MissionRequiredObjectivesComplete)
        .def_readwrite("MissionReadyToTurnIn", &UMissionFeedbackMessage::MissionReadyToTurnIn)
        .def("StaticClass", &UMissionFeedbackMessage::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetString", &UMissionFeedbackMessage::GetString)
        .staticmethod("StaticClass")
  ;
}