#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AGamePlayerController()
{
    py::class_< AGamePlayerController,  APlayerController   >("AGamePlayerController")
        .def_readwrite("CurrentSoundMode", &AGamePlayerController::CurrentSoundMode)
        .def("StaticClass", &AGamePlayerController::StaticClass, py::return_value_policy::reference)
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