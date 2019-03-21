#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FNamedInterface()
{
    py::class_< FNamedInterface >("FNamedInterface")
        .def_readwrite("InterfaceName", &FNamedInterface::InterfaceName)
        .def_readwrite("InterfaceObject", &FNamedInterface::InterfaceObject)
  ;
}