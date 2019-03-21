#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FFireLink()
{
    class_< FFireLink >("FFireLink", no_init)
        .def_readwrite("Interactions", &FFireLink::Interactions)
        .def_readwrite("PackedProperties_CoverPairRefAndDynamicInfo", &FFireLink::PackedProperties_CoverPairRefAndDynamicInfo)
  ;
}