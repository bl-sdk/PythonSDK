#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FOnlineFriendMessage(py::module &m)
{
    py::class_< FOnlineFriendMessage >(m, "FOnlineFriendMessage")
        .def_readwrite("SendingPlayerId", &FOnlineFriendMessage::SendingPlayerId)
        .def_readwrite("SendingPlayerNick", &FOnlineFriendMessage::SendingPlayerNick)
        .def_readwrite("Message", &FOnlineFriendMessage::Message)
  ;
}