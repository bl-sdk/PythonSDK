#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UForceFeedbackManager(py::module &m)
{
    py::class_< UForceFeedbackManager,  UObject   >(m, "UForceFeedbackManager")
        .def_readwrite("FFWaveform", &UForceFeedbackManager::FFWaveform)
        .def_readwrite("CurrentSample", &UForceFeedbackManager::CurrentSample)
        .def_readwrite("ElapsedTime", &UForceFeedbackManager::ElapsedTime)
        .def_readwrite("ScaleAllWaveformsBy", &UForceFeedbackManager::ScaleAllWaveformsBy)
        .def_readwrite("WaveformInstigator", &UForceFeedbackManager::WaveformInstigator)
        .def_readwrite("CurrentWaveformRef", &UForceFeedbackManager::CurrentWaveformRef)
        .def("StaticClass", &UForceFeedbackManager::StaticClass, py::return_value_policy::reference)
        .def("PauseWaveform", &UForceFeedbackManager::PauseWaveform)
        .def("StopForceFeedbackWaveform", &UForceFeedbackManager::StopForceFeedbackWaveform)
        .def("eventSetWaveform", &UForceFeedbackManager::eventSetWaveform)
        .def("PlayForceFeedbackWaveform", &UForceFeedbackManager::PlayForceFeedbackWaveform)
          ;
}