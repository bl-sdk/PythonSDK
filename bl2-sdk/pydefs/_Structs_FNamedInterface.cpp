#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FNamedInterface(py::module &m)
{
    py::class_< FNamedInterface >(m, "FNamedInterface")
        .def_readwrite("InterfaceName", &FNamedInterface::InterfaceName)
        .def_readwrite("InterfaceObject", &FNamedInterface::InterfaceObject)
  ;
}