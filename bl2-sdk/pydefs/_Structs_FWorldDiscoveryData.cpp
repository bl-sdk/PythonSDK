#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FWorldDiscoveryData(py::object m)
{
    py::class_< FWorldDiscoveryData >(m, "FWorldDiscoveryData")
        .def_readwrite("DiscoveryName", &FWorldDiscoveryData::DiscoveryName)
  ;
}