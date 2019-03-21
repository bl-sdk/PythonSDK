#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UReceivedWeaponMessage(py::object m)
{
    py::class_< UReceivedWeaponMessage,  UWillowLocalMessage   >(m, "UReceivedWeaponMessage")
        .def_readwrite("ReceivedWeapon", &UReceivedWeaponMessage::ReceivedWeapon)
        .def_readwrite("SelfReceivedItem", &UReceivedWeaponMessage::SelfReceivedItem)
        .def("StaticClass", &UReceivedWeaponMessage::StaticClass, py::return_value_policy::reference)
        .def("GetWeaponString", &UReceivedWeaponMessage::GetWeaponString)
        .def("GetWeaponColor", &ULocalWeaponMessage::GetWeaponColor)
        .def("ClientWeaponReceive", &ULocalWeaponMessage::ClientWeaponReceive)
          ;
}