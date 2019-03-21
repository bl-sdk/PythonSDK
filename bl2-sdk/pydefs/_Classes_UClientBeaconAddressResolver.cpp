#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UClientBeaconAddressResolver()
{
    py::class_< UClientBeaconAddressResolver,  UObject   >("UClientBeaconAddressResolver")
        .def_readwrite("BeaconPort", &UClientBeaconAddressResolver::BeaconPort)
        .def_readwrite("BeaconName", &UClientBeaconAddressResolver::BeaconName)
        .def("StaticClass", &UClientBeaconAddressResolver::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}