#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AGearboxPlayerReplicationInfo(py::module &m)
{
    py::class_< AGearboxPlayerReplicationInfo,  APlayerReplicationInfo   >(m, "AGearboxPlayerReplicationInfo")
        .def_readwrite("Difficulty", &AGearboxPlayerReplicationInfo::Difficulty)
        .def_readwrite("Dummy", &AGearboxPlayerReplicationInfo::Dummy)
        .def("StaticClass", &AGearboxPlayerReplicationInfo::StaticClass, py::return_value_policy::reference)
          ;
}