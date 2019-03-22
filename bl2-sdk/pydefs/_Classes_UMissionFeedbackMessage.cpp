#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMissionFeedbackMessage(py::module &m)
{
    py::class_< UMissionFeedbackMessage,  UWillowLocalMessage   >(m, "UMissionFeedbackMessage")
        .def_readwrite("MissionAdded", &UMissionFeedbackMessage::MissionAdded)
        .def_readwrite("MissionCompleted", &UMissionFeedbackMessage::MissionCompleted)
        .def_readwrite("MissionFailed", &UMissionFeedbackMessage::MissionFailed)
        .def_readwrite("MissionRequiredObjectivesComplete", &UMissionFeedbackMessage::MissionRequiredObjectivesComplete)
        .def_readwrite("MissionReadyToTurnIn", &UMissionFeedbackMessage::MissionReadyToTurnIn)
        .def("GetString", &UMissionFeedbackMessage::GetString)
          ;
}