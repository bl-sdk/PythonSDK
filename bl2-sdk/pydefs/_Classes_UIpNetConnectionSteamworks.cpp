#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIpNetConnectionSteamworks(py::module &m)
{
    py::class_< UIpNetConnectionSteamworks,  UTcpipConnection   >(m, "UIpNetConnectionSteamworks")
          ;
}