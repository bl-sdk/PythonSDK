#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AGamePlayerController()
{
    class_< AGamePlayerController, bases< APlayerController >  , boost::noncopyable>("AGamePlayerController", no_init)
        .def_readwrite("CurrentSoundMode", &AGamePlayerController::CurrentSoundMode)
        .def("StaticClass", &AGamePlayerController::StaticClass, return_value_policy< reference_existing_object >())
        .def("ClientColorFade", &AGamePlayerController::ClientColorFade)
        .def("CallMemLeakCheck", &AGamePlayerController::CallMemLeakCheck)
        .def("StopMemLeakChecking", &AGamePlayerController::StopMemLeakChecking)
        .def("DoMemLeakChecking", &AGamePlayerController::DoMemLeakChecking)
        .def("eventWarmupPause", &AGamePlayerController::eventWarmupPause)
        .def("CanUnpauseWarmup", &AGamePlayerController::CanUnpauseWarmup)
        .def("GetCurrentMovie", &AGamePlayerController::GetCurrentMovie)
        .def("eventClientStopMovie", &AGamePlayerController::eventClientStopMovie)
        .def("eventClientPlayMovie", &AGamePlayerController::eventClientPlayMovie)
        .def("KeepPlayingLoadingMovie", &AGamePlayerController::KeepPlayingLoadingMovie)
        .def("ShowLoadingMovie", &AGamePlayerController::ShowLoadingMovie)
        .def("SetSoundMode", &AGamePlayerController::SetSoundMode)
        .def("DoForceFeedbackForScreenShake", &AGamePlayerController::DoForceFeedbackForScreenShake)
        .def("GetUIPlayerIndex", &AGamePlayerController::GetUIPlayerIndex)
        .staticmethod("StaticClass")
  ;
}