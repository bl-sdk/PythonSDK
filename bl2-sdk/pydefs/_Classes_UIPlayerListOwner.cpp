#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UIPlayerListOwner()
{
    class_< UIPlayerListOwner, bases< UInterface >  , boost::noncopyable>("UIPlayerListOwner", no_init)
        .def("StaticClass", &UIPlayerListOwner::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventPlayUISound", &UIPlayerListOwner::eventPlayUISound)
        .def("GetPlayerDetailsMovieDef", &UIPlayerListOwner::GetPlayerDetailsMovieDef, return_value_policy< reference_existing_object >())
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
        .def("GetWPCOwner", &UIPlayerListOwner::GetWPCOwner, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}