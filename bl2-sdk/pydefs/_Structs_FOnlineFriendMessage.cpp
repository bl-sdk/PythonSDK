#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FOnlineFriendMessage()
{
    py::class_< FOnlineFriendMessage >("FOnlineFriendMessage")
        .def_readwrite("SendingPlayerId", &FOnlineFriendMessage::SendingPlayerId)
        .def_readwrite("SendingPlayerNick", &FOnlineFriendMessage::SendingPlayerNick)
        .def_readwrite("Message", &FOnlineFriendMessage::Message)
  ;
}