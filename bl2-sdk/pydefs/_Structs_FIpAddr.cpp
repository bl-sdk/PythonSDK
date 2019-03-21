#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FIpAddr()
{
    class_< FIpAddr >("FIpAddr", no_init)
        .def_readwrite("Addr", &FIpAddr::Addr)
        .def_readwrite("Port", &FIpAddr::Port)
  ;
}