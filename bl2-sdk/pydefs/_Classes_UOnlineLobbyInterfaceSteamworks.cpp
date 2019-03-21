#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UOnlineLobbyInterfaceSteamworks()
{
    py::class_< UOnlineLobbyInterfaceSteamworks,  UObject   >("UOnlineLobbyInterfaceSteamworks")
        .def("StaticClass", &UOnlineLobbyInterfaceSteamworks::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}