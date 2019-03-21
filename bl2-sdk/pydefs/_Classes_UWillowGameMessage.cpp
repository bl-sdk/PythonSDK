#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowGameMessage(py::object m)
{
    py::class_< UWillowGameMessage,  ULocalMessage   >(m, "UWillowGameMessage")
        .def_readwrite("PlayerEnteredGame", &UWillowGameMessage::PlayerEnteredGame)
        .def_readwrite("PlayerLeftGame", &UWillowGameMessage::PlayerLeftGame)
        .def_readwrite("CreaturesGrowStronger", &UWillowGameMessage::CreaturesGrowStronger)
        .def_readwrite("CreaturesWeaken", &UWillowGameMessage::CreaturesWeaken)
        .def("StaticClass", &UWillowGameMessage::StaticClass, py::return_value_policy::reference)
        .def("GetString", &UWillowGameMessage::GetString)
        .def("ClientReceive", &UWillowGameMessage::ClientReceive)
          ;
}