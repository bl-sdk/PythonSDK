#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FWireLinkage()
{
    py::class_< FWireLinkage >("FWireLinkage")
        .def_readwrite("Offset", &FWireLinkage::Offset)
        .def_readwrite("Width", &FWireLinkage::Width)
        .def_readwrite("Slack", &FWireLinkage::Slack)
        .def_readwrite("Segments", &FWireLinkage::Segments)
        .def_readwrite("Link", &FWireLinkage::Link)
  ;
}