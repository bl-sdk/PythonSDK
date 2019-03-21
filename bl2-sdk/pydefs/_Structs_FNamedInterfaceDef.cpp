#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FNamedInterfaceDef()
{
    py::class_< FNamedInterfaceDef >("FNamedInterfaceDef")
        .def_readwrite("InterfaceName", &FNamedInterfaceDef::InterfaceName)
        .def_readwrite("InterfaceClassName", &FNamedInterfaceDef::InterfaceClassName)
  ;
}