#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FNamedInterface()
{
    class_< FNamedInterface >("FNamedInterface", no_init)
        .def_readwrite("InterfaceName", &FNamedInterface::InterfaceName)
        .def_readwrite("InterfaceObject", &FNamedInterface::InterfaceObject)
  ;
}