#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AAdmin()
{
    class_< AAdmin, bases< APlayerController >  , boost::noncopyable>("AAdmin", no_init)
        .def("StaticClass", &AAdmin::StaticClass, return_value_policy< reference_existing_object >())
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
        .staticmethod("StaticClass")
  ;
}