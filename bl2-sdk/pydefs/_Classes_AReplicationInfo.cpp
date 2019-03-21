#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AReplicationInfo(py::object m)
{
    py::class_< AReplicationInfo,  AInfo   >(m, "AReplicationInfo")
        .def("StaticClass", &AReplicationInfo::StaticClass, py::return_value_policy::reference)
          ;
}