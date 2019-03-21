#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMissionFeedbackMessage()
{
    py::class_< UMissionFeedbackMessage,  UWillowLocalMessage   >("UMissionFeedbackMessage")
        .def_readwrite("MissionAdded", &UMissionFeedbackMessage::MissionAdded)
        .def_readwrite("MissionCompleted", &UMissionFeedbackMessage::MissionCompleted)
        .def_readwrite("MissionFailed", &UMissionFeedbackMessage::MissionFailed)
        .def_readwrite("MissionRequiredObjectivesComplete", &UMissionFeedbackMessage::MissionRequiredObjectivesComplete)
        .def_readwrite("MissionReadyToTurnIn", &UMissionFeedbackMessage::MissionReadyToTurnIn)
        .def("StaticClass", &UMissionFeedbackMessage::StaticClass, py::return_value_policy::reference)
        .def("GetString", &UMissionFeedbackMessage::GetString)
        .staticmethod("StaticClass")
  ;
}