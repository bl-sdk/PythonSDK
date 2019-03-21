#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIpNetDriverSteamworks()
{
    py::class_< UIpNetDriverSteamworks,  UTcpNetDriver   >("UIpNetDriverSteamworks")
        .def("StaticClass", &UIpNetDriverSteamworks::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}