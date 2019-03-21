#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UChallengeFeedbackMessage()
{
    class_< UChallengeFeedbackMessage, bases< ULocalMessage >  , boost::noncopyable>("UChallengeFeedbackMessage", no_init)
        .def_readwrite("ChallengeCompleted", &UChallengeFeedbackMessage::ChallengeCompleted)
        .def_readwrite("ChallengeReceived", &UChallengeFeedbackMessage::ChallengeReceived)
        .def("StaticClass", &UChallengeFeedbackMessage::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetString", &UChallengeFeedbackMessage::GetString)
        .staticmethod("StaticClass")
  ;
}