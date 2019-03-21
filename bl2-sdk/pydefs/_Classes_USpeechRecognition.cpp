#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USpeechRecognition(py::object m)
{
    py::class_< USpeechRecognition,  UObject   >(m, "USpeechRecognition")
        .def_readwrite("Language", &USpeechRecognition::Language)
        .def_readwrite("ConfidenceThreshhold", &USpeechRecognition::ConfidenceThreshhold)
        .def_readwrite("Vocabularies", &USpeechRecognition::Vocabularies)
        .def_readwrite("VoiceData", &USpeechRecognition::VoiceData)
        .def_readwrite("WorkingVoiceData", &USpeechRecognition::WorkingVoiceData)
        .def_readwrite("UserData", &USpeechRecognition::UserData)
        .def_readonly("InstanceData", &USpeechRecognition::InstanceData)
        .def_readwrite("FnxVoiceData", &USpeechRecognition::FnxVoiceData)
        .def("StaticClass", &USpeechRecognition::StaticClass, py::return_value_policy::reference)
          ;
}