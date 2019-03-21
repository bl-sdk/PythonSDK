#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FNamedInterfaceDef()
{
    class_< FNamedInterfaceDef >("FNamedInterfaceDef", no_init)
        .def_readwrite("InterfaceName", &FNamedInterfaceDef::InterfaceName)
        .def_readwrite("InterfaceClassName", &FNamedInterfaceDef::InterfaceClassName)
  ;
}