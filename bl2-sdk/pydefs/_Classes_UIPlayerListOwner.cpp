#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIPlayerListOwner(py::module &m)
{
    py::class_< UIPlayerListOwner,  UInterface   >(m, "UIPlayerListOwner")
		.def_static("StaticClass", &UIPlayerListOwner::StaticClass, py::return_value_policy::reference)
        .def("eventPlayUISound", &UIPlayerListOwner::eventPlayUISound)
        .def("GetPlayerDetailsMovieDef", &UIPlayerListOwner::GetPlayerDetailsMovieDef, py::return_value_policy::reference)
        .def("GetFriend", &UIPlayerListOwner::GetFriend)
        .def("AppendTooltipString", &UIPlayerListOwner::AppendTooltipString)
        .def("CheckControllerStatus", &UIPlayerListOwner::CheckControllerStatus)
        .def("IsPlayerOwner", &UIPlayerListOwner::IsPlayerOwner)
        .def("CanKick", &UIPlayerListOwner::CanKick)
        .def("CanViewGamercard", &UIPlayerListOwner::CanViewGamercard)
        .def("CanUnmute", &UIPlayerListOwner::CanUnmute)
        .def("CanMute", &UIPlayerListOwner::CanMute)
        .def("CanInvite", &UIPlayerListOwner::CanInvite)
        .def("CanJoin", &UIPlayerListOwner::CanJoin)
        .def("GetWPCOwner", &UIPlayerListOwner::GetWPCOwner, py::return_value_policy::reference)
          ;
}