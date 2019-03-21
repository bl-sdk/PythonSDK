#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FOnlinePartyMember(py::object m)
{
    py::class_< FOnlinePartyMember >(m, "FOnlinePartyMember")
        .def_readwrite("UniqueId", &FOnlinePartyMember::UniqueId)
        .def_readwrite("NickName", &FOnlinePartyMember::NickName)
        .def_readwrite("LocalUserNum", &FOnlinePartyMember::LocalUserNum)
        .def_readwrite("NatType", &FOnlinePartyMember::NatType)
        .def_readwrite("TitleId", &FOnlinePartyMember::TitleId)
        .def_readwrite("SessionId", &FOnlinePartyMember::SessionId)
        .def_readwrite("Data1", &FOnlinePartyMember::Data1)
        .def_readwrite("Data2", &FOnlinePartyMember::Data2)
        .def_readwrite("Data3", &FOnlinePartyMember::Data3)
        .def_readwrite("Data4", &FOnlinePartyMember::Data4)
  ;
}