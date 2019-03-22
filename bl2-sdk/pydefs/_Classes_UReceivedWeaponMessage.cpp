#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UReceivedWeaponMessage(py::module &m)
{
    py::class_< UReceivedWeaponMessage,  UWillowLocalMessage   >(m, "UReceivedWeaponMessage")
        .def_readwrite("ReceivedWeapon", &UReceivedWeaponMessage::ReceivedWeapon)
        .def_readwrite("SelfReceivedItem", &UReceivedWeaponMessage::SelfReceivedItem)
        .def("GetWeaponString", &UReceivedWeaponMessage::GetWeaponString)
        .def("GetWeaponColor", &ULocalWeaponMessage::GetWeaponColor)
        .def("ClientWeaponReceive", &ULocalWeaponMessage::ClientWeaponReceive)
          ;
}