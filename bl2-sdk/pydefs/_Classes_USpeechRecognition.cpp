#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USpeechRecognition()
{
    class_< USpeechRecognition, bases< UObject >  , boost::noncopyable>("USpeechRecognition", no_init)
        .def_readwrite("Language", &USpeechRecognition::Language)
        .def_readwrite("ConfidenceThreshhold", &USpeechRecognition::ConfidenceThreshhold)
        .def_readwrite("Vocabularies", &USpeechRecognition::Vocabularies)
        .def_readwrite("VoiceData", &USpeechRecognition::VoiceData)
        .def_readwrite("WorkingVoiceData", &USpeechRecognition::WorkingVoiceData)
        .def_readwrite("UserData", &USpeechRecognition::UserData)
        .def_readonly("InstanceData", &USpeechRecognition::InstanceData)
        .def_readwrite("FnxVoiceData", &USpeechRecognition::FnxVoiceData)
        .def("StaticClass", &USpeechRecognition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}