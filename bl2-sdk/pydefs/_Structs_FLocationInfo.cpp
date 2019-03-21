#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FLocationInfo()
{
    class_< FLocationInfo >("FLocationInfo", no_init)
        .def_readwrite("Location", &FLocationInfo::Location)
  ;
}