#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AReplicationInfo()
{
    py::class_< AReplicationInfo,  AInfo   >("AReplicationInfo")
        .def("StaticClass", &AReplicationInfo::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}