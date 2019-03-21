#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FNamedNetDriver()
{
    class_< FNamedNetDriver >("FNamedNetDriver", no_init)
        .def_readwrite("NetDriverName", &FNamedNetDriver::NetDriverName)
        .def_readwrite("NetDriver", &FNamedNetDriver::NetDriver)
  ;
}