#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FSocketEmitter()
{
    class_< FSocketEmitter >("FSocketEmitter", no_init)
        .def_readwrite("Emitter", &FSocketEmitter::Emitter)
        .def_readwrite("SocketName", &FSocketEmitter::SocketName)
  ;
}