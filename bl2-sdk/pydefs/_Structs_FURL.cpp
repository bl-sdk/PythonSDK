#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FURL(py::object m)
{
    py::class_< FURL >(m, "FURL")
        .def_readwrite("Protocol", &FURL::Protocol)
        .def_readwrite("Host", &FURL::Host)
        .def_readwrite("Port", &FURL::Port)
        .def_readwrite("Map", &FURL::Map)
        .def_readwrite("Op", &FURL::Op)
        .def_readwrite("Portal", &FURL::Portal)
        .def_readwrite("Valid", &FURL::Valid)
  ;
}