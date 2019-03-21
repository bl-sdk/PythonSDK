#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ULocalWeaponMessage()
{
    class_< ULocalWeaponMessage, bases< UWillowLocalMessage >  , boost::noncopyable>("ULocalWeaponMessage", no_init)
        .def("StaticClass", &ULocalWeaponMessage::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetWeaponString", &ULocalWeaponMessage::GetWeaponString)
        .def("GetWeaponColor", &ULocalWeaponMessage::GetWeaponColor)
        .def("ClientWeaponReceive", &ULocalWeaponMessage::ClientWeaponReceive)
        .staticmethod("StaticClass")
  ;
}