#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UReceivedAmmoMessage()
{
    class_< UReceivedAmmoMessage, bases< UWillowLocalMessage >  , boost::noncopyable>("UReceivedAmmoMessage", no_init)
        .def_readwrite("ReceivedAmmo", &UReceivedAmmoMessage::ReceivedAmmo)
        .def_readwrite("SelfReceivedAmmo", &UReceivedAmmoMessage::SelfReceivedAmmo)
        .def_readwrite("NumberOfRounds", &UReceivedAmmoMessage::NumberOfRounds)
        .def_readwrite("AmmoFakedRarityLevelForItemColor", &UReceivedAmmoMessage::AmmoFakedRarityLevelForItemColor)
        .def("StaticClass", &UReceivedAmmoMessage::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetAmmoColor", &UReceivedAmmoMessage::GetAmmoColor)
        .def("GetNumberOfRoundsString", &UReceivedAmmoMessage::GetNumberOfRoundsString)
        .def("GetAmmoString", &UReceivedAmmoMessage::GetAmmoString)
        .def("ClientAmmoReceive", &UReceivedAmmoMessage::ClientAmmoReceive)
        .staticmethod("StaticClass")
  ;
}