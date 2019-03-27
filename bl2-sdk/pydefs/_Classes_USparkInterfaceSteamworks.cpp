#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USparkInterfaceSteamworks(py::module &m)
{
    py::class_< USparkInterfaceSteamworks,  USparkInterfaceImpl   >(m, "USparkInterfaceSteamworks")
		.def_static("StaticClass", &USparkInterfaceSteamworks::StaticClass, py::return_value_policy::reference)
          ;
}