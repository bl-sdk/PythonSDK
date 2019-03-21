#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UPlayerInteractionServer()
{
    class_< UPlayerInteractionServer, bases< UObject >  , boost::noncopyable>("UPlayerInteractionServer", no_init)
        .def_readwrite("TimeoutTime", &UPlayerInteractionServer::TimeoutTime)
        .def("StaticClass", &UPlayerInteractionServer::StaticClass, return_value_policy< reference_existing_object >())
        .def("IsValid", &UPlayerInteractionServer::IsValid)
        .def("CanReceiveMessages", &UPlayerInteractionServer::CanReceiveMessages)
        .def("MarkDone", &UPlayerInteractionServer::MarkDone)
        .def("eventHandleInteractionEnded", &UPlayerInteractionServer::eventHandleInteractionEnded)
        .def("BroadcastMessage", &UPlayerInteractionServer::BroadcastMessage)
        .def("SendMessage", &UPlayerInteractionServer::SendMessage)
        .def("UsesClientType", &UPlayerInteractionServer::UsesClientType)
        .def("HandleMessage", &UPlayerInteractionServer::HandleMessage)
        .def("GetClientType", &UPlayerInteractionServer::GetClientType, return_value_policy< reference_existing_object >())
        .def("GetInitialMessageForPlayer", &UPlayerInteractionServer::GetInitialMessageForPlayer)
        .def("initialize", &UPlayerInteractionServer::initialize)
        .staticmethod("StaticClass")
  ;
}