#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIpNetConnectionSteamworks()
{
    py::class_< UIpNetConnectionSteamworks,  UTcpipConnection   >("UIpNetConnectionSteamworks")
        .def("StaticClass", &UIpNetConnectionSteamworks::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}