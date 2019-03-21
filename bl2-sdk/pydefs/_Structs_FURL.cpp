#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FURL()
{
    class_< FURL >("FURL", no_init)
        .def_readwrite("Protocol", &FURL::Protocol)
        .def_readwrite("Host", &FURL::Host)
        .def_readwrite("Port", &FURL::Port)
        .def_readwrite("Map", &FURL::Map)
        .def_readwrite("Op", &FURL::Op)
        .def_readwrite("Portal", &FURL::Portal)
        .def_readwrite("Valid", &FURL::Valid)
  ;
}