#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ULocalWeaponMessage()
{
    py::class_< ULocalWeaponMessage,  UWillowLocalMessage   >("ULocalWeaponMessage")
        .def("StaticClass", &ULocalWeaponMessage::StaticClass, py::return_value_policy::reference)
        .def("GetWeaponString", &ULocalWeaponMessage::GetWeaponString)
        .def("GetWeaponColor", &ULocalWeaponMessage::GetWeaponColor)
        .def("ClientWeaponReceive", &ULocalWeaponMessage::ClientWeaponReceive)
        .staticmethod("StaticClass")
  ;
}