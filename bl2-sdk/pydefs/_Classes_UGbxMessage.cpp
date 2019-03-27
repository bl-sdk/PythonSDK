#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGbxMessage(py::module &m)
{
    py::class_< UGbxMessage,  UObject   >(m, "UGbxMessage")
		.def_static("StaticClass", &UGbxMessage::StaticClass, py::return_value_policy::reference)
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
        .def("InitializeFromDefinition", &UGbxMessage::InitializeFromDefinition)
          ;
}