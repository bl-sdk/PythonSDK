#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FWireLinkage()
{
    class_< FWireLinkage >("FWireLinkage", no_init)
        .def_readwrite("Offset", &FWireLinkage::Offset)
        .def_readwrite("Width", &FWireLinkage::Width)
        .def_readwrite("Slack", &FWireLinkage::Slack)
        .def_readwrite("Segments", &FWireLinkage::Segments)
        .def_readwrite("Link", &FWireLinkage::Link)
  ;
}