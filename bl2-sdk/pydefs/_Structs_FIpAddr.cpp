#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FIpAddr(py::module &m)
{
    py::class_< FIpAddr >(m, "FIpAddr")
        .def_readwrite("Addr", &FIpAddr::Addr)
        .def_readwrite("Port", &FIpAddr::Port)
  ;
}