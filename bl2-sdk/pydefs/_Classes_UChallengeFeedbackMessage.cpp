#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UChallengeFeedbackMessage()
{
    py::class_< UChallengeFeedbackMessage,  ULocalMessage   >("UChallengeFeedbackMessage")
        .def_readwrite("ChallengeCompleted", &UChallengeFeedbackMessage::ChallengeCompleted)
        .def_readwrite("ChallengeReceived", &UChallengeFeedbackMessage::ChallengeReceived)
        .def("StaticClass", &UChallengeFeedbackMessage::StaticClass, py::return_value_policy::reference)
        .def("GetString", &UChallengeFeedbackMessage::GetString)
        .staticmethod("StaticClass")
  ;
}