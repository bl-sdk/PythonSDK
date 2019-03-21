#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIpNetConnectionSteamworks(py::object m)
{
    py::class_< UIpNetConnectionSteamworks,  UTcpipConnection   >(m, "UIpNetConnectionSteamworks")
        .def("StaticClass", &UIpNetConnectionSteamworks::StaticClass, py::return_value_policy::reference)
          ;
}