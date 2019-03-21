#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FWorldDiscoveryData()
{
    py::class_< FWorldDiscoveryData >("FWorldDiscoveryData")
        .def_readwrite("DiscoveryName", &FWorldDiscoveryData::DiscoveryName)
  ;
}