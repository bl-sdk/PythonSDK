#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPlayerInteractionServer(py::object m)
{
    py::class_< UPlayerInteractionServer,  UObject   >(m, "UPlayerInteractionServer")
        .def_readwrite("TimeoutTime", &UPlayerInteractionServer::TimeoutTime)
        .def("StaticClass", &UPlayerInteractionServer::StaticClass, py::return_value_policy::reference)
        .def("IsValid", &UPlayerInteractionServer::IsValid)
        .def("CanReceiveMessages", &UPlayerInteractionServer::CanReceiveMessages)
        .def("MarkDone", &UPlayerInteractionServer::MarkDone)
        .def("eventHandleInteractionEnded", &UPlayerInteractionServer::eventHandleInteractionEnded)
        .def("BroadcastMessage", &UPlayerInteractionServer::BroadcastMessage)
        .def("SendMessage", &UPlayerInteractionServer::SendMessage)
        .def("UsesClientType", &UPlayerInteractionServer::UsesClientType)
        .def("HandleMessage", &UPlayerInteractionServer::HandleMessage)
        .def("GetClientType", &UPlayerInteractionServer::GetClientType, py::return_value_policy::reference)
        .def("GetInitialMessageForPlayer", &UPlayerInteractionServer::GetInitialMessageForPlayer)
        .def("initialize", &UPlayerInteractionServer::initialize)
          ;
}