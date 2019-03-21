#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UForceFeedbackManager()
{
    class_< UForceFeedbackManager, bases< UObject >  , boost::noncopyable>("UForceFeedbackManager", no_init)
        .def_readwrite("FFWaveform", &UForceFeedbackManager::FFWaveform)
        .def_readwrite("CurrentSample", &UForceFeedbackManager::CurrentSample)
        .def_readwrite("ElapsedTime", &UForceFeedbackManager::ElapsedTime)
        .def_readwrite("ScaleAllWaveformsBy", &UForceFeedbackManager::ScaleAllWaveformsBy)
        .def_readwrite("WaveformInstigator", &UForceFeedbackManager::WaveformInstigator)
        .def_readwrite("CurrentWaveformRef", &UForceFeedbackManager::CurrentWaveformRef)
        .def("StaticClass", &UForceFeedbackManager::StaticClass, return_value_policy< reference_existing_object >())
        .def("PauseWaveform", &UForceFeedbackManager::PauseWaveform)
        .def("StopForceFeedbackWaveform", &UForceFeedbackManager::StopForceFeedbackWaveform)
        .def("eventSetWaveform", &UForceFeedbackManager::eventSetWaveform)
        .def("PlayForceFeedbackWaveform", &UForceFeedbackManager::PlayForceFeedbackWaveform)
        .staticmethod("StaticClass")
  ;
}