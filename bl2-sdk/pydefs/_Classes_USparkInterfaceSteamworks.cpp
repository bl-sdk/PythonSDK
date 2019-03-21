#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USparkInterfaceSteamworks()
{
    py::class_< USparkInterfaceSteamworks,  USparkInterfaceImpl   >("USparkInterfaceSteamworks")
        .def("StaticClass", &USparkInterfaceSteamworks::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}