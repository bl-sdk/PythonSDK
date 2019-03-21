#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSocketEmitter()
{
    py::class_< FSocketEmitter >("FSocketEmitter")
        .def_readwrite("Emitter", &FSocketEmitter::Emitter)
        .def_readwrite("SocketName", &FSocketEmitter::SocketName)
  ;
}