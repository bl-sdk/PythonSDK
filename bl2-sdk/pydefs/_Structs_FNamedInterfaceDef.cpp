#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FNamedInterfaceDef(py::module &m)
{
    py::class_< FNamedInterfaceDef >(m, "FNamedInterfaceDef")
        .def_readwrite("InterfaceName", &FNamedInterfaceDef::InterfaceName)
        .def_readwrite("InterfaceClassName", &FNamedInterfaceDef::InterfaceClassName)
  ;
}