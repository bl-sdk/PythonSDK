#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FVisiblePortalInfo()
{
    class_< FVisiblePortalInfo >("FVisiblePortalInfo", no_init)
        .def_readwrite("Source", &FVisiblePortalInfo::Source)
        .def_readwrite("Destination", &FVisiblePortalInfo::Destination)
  ;
}