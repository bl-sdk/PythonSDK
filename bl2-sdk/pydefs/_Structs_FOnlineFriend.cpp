#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FOnlineFriend()
{
    class_< FOnlineFriend >("FOnlineFriend", no_init)
        .def_readwrite("UniqueId", &FOnlineFriend::UniqueId)
        .def_readwrite("SessionId", &FOnlineFriend::SessionId)
        .def_readwrite("SessionInfo", &FOnlineFriend::SessionInfo)
        .def_readwrite("NickName", &FOnlineFriend::NickName)
        .def_readwrite("PresenceInfo", &FOnlineFriend::PresenceInfo)
        .def_readwrite("FriendState", &FOnlineFriend::FriendState)
  ;
}