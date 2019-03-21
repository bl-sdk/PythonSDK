#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UReceivedWeaponMessage()
{
    class_< UReceivedWeaponMessage, bases< UWillowLocalMessage >  , boost::noncopyable>("UReceivedWeaponMessage", no_init)
        .def_readwrite("ReceivedWeapon", &UReceivedWeaponMessage::ReceivedWeapon)
        .def_readwrite("SelfReceivedItem", &UReceivedWeaponMessage::SelfReceivedItem)
        .def("StaticClass", &UReceivedWeaponMessage::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetWeaponString", &UReceivedWeaponMessage::GetWeaponString)
        .def("GetWeaponColor", &ULocalWeaponMessage::GetWeaponColor)
        .def("ClientWeaponReceive", &ULocalWeaponMessage::ClientWeaponReceive)
        .staticmethod("StaticClass")
  ;
}