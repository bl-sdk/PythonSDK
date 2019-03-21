#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FWorldDiscoveryData()
{
    class_< FWorldDiscoveryData >("FWorldDiscoveryData", no_init)
        .def_readwrite("DiscoveryName", &FWorldDiscoveryData::DiscoveryName)
  ;
}