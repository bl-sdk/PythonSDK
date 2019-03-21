#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FOnlineFriend(py::object m)
{
    py::class_< FOnlineFriend >(m, "FOnlineFriend")
        .def_readwrite("UniqueId", &FOnlineFriend::UniqueId)
        .def_readwrite("SessionId", &FOnlineFriend::SessionId)
        .def_readwrite("SessionInfo", &FOnlineFriend::SessionInfo)
        .def_readwrite("NickName", &FOnlineFriend::NickName)
        .def_readwrite("PresenceInfo", &FOnlineFriend::PresenceInfo)
        .def_readwrite("FriendState", &FOnlineFriend::FriendState)
  ;
}