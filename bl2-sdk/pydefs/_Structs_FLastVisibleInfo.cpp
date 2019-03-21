#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FLastVisibleInfo()
{
    class_< FLastVisibleInfo >("FLastVisibleInfo", no_init)
        .def_readwrite("LastVisibleLocation", &FLastVisibleInfo::LastVisibleLocation)
        .def_readwrite("CurrentLocation", &FLastVisibleInfo::CurrentLocation)
  ;
}