#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FOnlineFriendMessage()
{
    class_< FOnlineFriendMessage >("FOnlineFriendMessage", no_init)
        .def_readwrite("SendingPlayerId", &FOnlineFriendMessage::SendingPlayerId)
        .def_readwrite("SendingPlayerNick", &FOnlineFriendMessage::SendingPlayerNick)
        .def_readwrite("Message", &FOnlineFriendMessage::Message)
  ;
}