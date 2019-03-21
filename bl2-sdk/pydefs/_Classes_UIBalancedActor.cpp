#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UIBalancedActor()
{
    class_< UIBalancedActor, bases< UInterface >  , boost::noncopyable>("UIBalancedActor", no_init)
        .def("StaticClass", &UIBalancedActor::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetBalancedActorTypeIdentifier", &UIBalancedActor::GetBalancedActorTypeIdentifier)
        .def("SetExpLevel", &UIBalancedActor::SetExpLevel)
        .def("SetAwesomeLevel", &UIBalancedActor::SetAwesomeLevel)
        .def("SetGameStage", &UIBalancedActor::SetGameStage)
        .def("GetExpLevelForEquip", &UIBalancedActor::GetExpLevelForEquip)
        .def("GetExpLevel", &UIBalancedActor::GetExpLevel)
        .def("GetAwesomeLevel", &UIBalancedActor::GetAwesomeLevel)
        .def("GetGameStage", &UIBalancedActor::GetGameStage)
        .staticmethod("StaticClass")
  ;
}