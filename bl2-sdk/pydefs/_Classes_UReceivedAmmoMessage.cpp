#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UReceivedAmmoMessage()
{
    py::class_< UReceivedAmmoMessage,  UWillowLocalMessage   >("UReceivedAmmoMessage")
        .def_readwrite("ReceivedAmmo", &UReceivedAmmoMessage::ReceivedAmmo)
        .def_readwrite("SelfReceivedAmmo", &UReceivedAmmoMessage::SelfReceivedAmmo)
        .def_readwrite("NumberOfRounds", &UReceivedAmmoMessage::NumberOfRounds)
        .def_readwrite("AmmoFakedRarityLevelForItemColor", &UReceivedAmmoMessage::AmmoFakedRarityLevelForItemColor)
        .def("StaticClass", &UReceivedAmmoMessage::StaticClass, py::return_value_policy::reference)
        .def("GetAmmoColor", &UReceivedAmmoMessage::GetAmmoColor)
        .def("GetNumberOfRoundsString", &UReceivedAmmoMessage::GetNumberOfRoundsString)
        .def("GetAmmoString", &UReceivedAmmoMessage::GetAmmoString)
        .def("ClientAmmoReceive", &UReceivedAmmoMessage::ClientAmmoReceive)
        .staticmethod("StaticClass")
  ;
}