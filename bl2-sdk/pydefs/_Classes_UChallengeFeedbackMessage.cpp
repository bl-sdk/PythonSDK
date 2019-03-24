#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UChallengeFeedbackMessage(py::module &m)
{
    py::class_< UChallengeFeedbackMessage,  ULocalMessage   >(m, "UChallengeFeedbackMessage")
		.def_static("StaticClass", &UChallengeFeedbackMessage::StaticClass, py::return_value_policy::reference)
        .def_readwrite("ChallengeCompleted", &UChallengeFeedbackMessage::ChallengeCompleted)
        .def_readwrite("ChallengeReceived", &UChallengeFeedbackMessage::ChallengeReceived)
        .def("GetString", &UChallengeFeedbackMessage::GetString)
          ;
}