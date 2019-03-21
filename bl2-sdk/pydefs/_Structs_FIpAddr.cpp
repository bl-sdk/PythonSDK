#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FIpAddr()
{
    py::class_< FIpAddr >("FIpAddr")
        .def_readwrite("Addr", &FIpAddr::Addr)
        .def_readwrite("Port", &FIpAddr::Port)
  ;
}