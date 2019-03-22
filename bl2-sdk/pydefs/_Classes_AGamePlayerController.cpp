#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AGamePlayerController(py::module &m)
{
    py::class_< AGamePlayerController,  APlayerController   >(m, "AGamePlayerController")
        .def_readwrite("CurrentSoundMode", &AGamePlayerController::CurrentSoundMode)
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
          ;
}