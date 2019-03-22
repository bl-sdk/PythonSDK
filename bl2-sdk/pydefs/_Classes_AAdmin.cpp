#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AAdmin(py::module &m)
{
    py::class_< AAdmin,  APlayerController   >(m, "AAdmin")
        .def("ServerSwitch", &AAdmin::ServerSwitch)
        .def("Switch", &AAdmin::Switch)
        .def("ServerRestartMap", &AAdmin::ServerRestartMap)
        .def("RestartMap", &AAdmin::RestartMap)
        .def("PlayerList", &AAdmin::PlayerList)
        .def("ServerKick", &AAdmin::ServerKick)
        .def("Kick", &AAdmin::Kick)
        .def("ServerKickBan", &AAdmin::ServerKickBan)
        .def("KickBan", &AAdmin::KickBan)
        .def("ServerAdmin", &AAdmin::ServerAdmin)
        .def("Admin", &AAdmin::Admin)
        .def("eventPostBeginPlay", &AAdmin::eventPostBeginPlay)
          ;
}