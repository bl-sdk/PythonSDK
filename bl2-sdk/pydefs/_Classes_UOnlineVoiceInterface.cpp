#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UOnlineVoiceInterface()
{
    class_< UOnlineVoiceInterface, bases< UInterface >  , boost::noncopyable>("UOnlineVoiceInterface", no_init)
        .def("StaticClass", &UOnlineVoiceInterface::StaticClass, return_value_policy< reference_existing_object >())
        .def("SetVoiceVolume", &UOnlineVoiceInterface::SetVoiceVolume)
        .def("UnmuteAll", &UOnlineVoiceInterface::UnmuteAll)
        .def("MuteAll", &UOnlineVoiceInterface::MuteAll)
        .def("SetSpeechRecognitionObject", &UOnlineVoiceInterface::SetSpeechRecognitionObject)
        .def("SelectVocabulary", &UOnlineVoiceInterface::SelectVocabulary)
        .def("ClearRecognitionCompleteDelegate", &UOnlineVoiceInterface::ClearRecognitionCompleteDelegate)
        .def("AddRecognitionCompleteDelegate", &UOnlineVoiceInterface::AddRecognitionCompleteDelegate)
        .def("OnRecognitionComplete", &UOnlineVoiceInterface::OnRecognitionComplete)
        .def("GetRecognitionResults", &UOnlineVoiceInterface::GetRecognitionResults)
        .def("StopSpeechRecognition", &UOnlineVoiceInterface::StopSpeechRecognition)
        .def("StartSpeechRecognition", &UOnlineVoiceInterface::StartSpeechRecognition)
        .def("StopNetworkedVoice", &UOnlineVoiceInterface::StopNetworkedVoice)
        .def("StartNetworkedVoice", &UOnlineVoiceInterface::StartNetworkedVoice)
        .def("ClearPlayerTalkingDelegate", &UOnlineVoiceInterface::ClearPlayerTalkingDelegate)
        .def("AddPlayerTalkingDelegate", &UOnlineVoiceInterface::AddPlayerTalkingDelegate)
        .def("OnPlayerTalkingStateChange", &UOnlineVoiceInterface::OnPlayerTalkingStateChange)
        .def("UnmuteRemoteTalker", &UOnlineVoiceInterface::UnmuteRemoteTalker)
        .def("MuteRemoteTalker", &UOnlineVoiceInterface::MuteRemoteTalker)
        .def("SetRemoteTalkerPriority", &UOnlineVoiceInterface::SetRemoteTalkerPriority)
        .def("IsHeadsetPresent", &UOnlineVoiceInterface::IsHeadsetPresent)
        .def("IsRemotePlayerTalking", &UOnlineVoiceInterface::IsRemotePlayerTalking)
        .def("IsLocalPlayerTalking", &UOnlineVoiceInterface::IsLocalPlayerTalking)
        .def("UnregisterRemoteTalker", &UOnlineVoiceInterface::UnregisterRemoteTalker)
        .def("RegisterRemoteTalker", &UOnlineVoiceInterface::RegisterRemoteTalker)
        .def("UnregisterLocalTalker", &UOnlineVoiceInterface::UnregisterLocalTalker)
        .def("RegisterLocalTalker", &UOnlineVoiceInterface::RegisterLocalTalker)
        .staticmethod("StaticClass")
  ;
}