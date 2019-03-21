#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGbxMessage()
{
    class_< UGbxMessage, bases< UObject >  , boost::noncopyable>("UGbxMessage", no_init)
        .def_readwrite("Definition", &UGbxMessage::Definition)
        .def_readwrite("NameKey", &UGbxMessage::NameKey)
        .def_readwrite("Sender", &UGbxMessage::Sender)
        .def_readwrite("Subject", &UGbxMessage::Subject)
        .def_readwrite("AdditionalData", &UGbxMessage::AdditionalData)
        .def_readwrite("SimpleMetaData", &UGbxMessage::SimpleMetaData)
        .def_readwrite("SimpleMetaData2", &UGbxMessage::SimpleMetaData2)
        .def_readwrite("SimpleMetaData3", &UGbxMessage::SimpleMetaData3)
        .def_readwrite("SimpleMetaData4", &UGbxMessage::SimpleMetaData4)
        .def_readwrite("SenderAllegiance", &UGbxMessage::SenderAllegiance)
        .def_readwrite("SubjectAllegiance", &UGbxMessage::SubjectAllegiance)
        .def_readwrite("MessageLocation", &UGbxMessage::MessageLocation)
        .def_readwrite("BroadcastRadius", &UGbxMessage::BroadcastRadius)
        .def_readwrite("DeliverTime", &UGbxMessage::DeliverTime)
        .def_readwrite("TimePosted", &UGbxMessage::TimePosted)
        .def_readwrite("TimeSent", &UGbxMessage::TimeSent)
        .def_readwrite("DoNotSendRightNow", &UGbxMessage::DoNotSendRightNow)
        .def_readwrite("StopSendingAfterXReceptions", &UGbxMessage::StopSendingAfterXReceptions)
        .def_readwrite("MaxDurationToSend", &UGbxMessage::MaxDurationToSend)
        .def_readwrite("TimeBetweenSends", &UGbxMessage::TimeBetweenSends)
        .def_readwrite("DupeCriteria", &UGbxMessage::DupeCriteria)
        .def("StaticClass", &UGbxMessage::StaticClass, return_value_policy< reference_existing_object >())
        .def("InitializeFromDefinition", &UGbxMessage::InitializeFromDefinition)
        .staticmethod("StaticClass")
  ;
}