#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSocketEmitter(py::object m)
{
    py::class_< FSocketEmitter >(m, "FSocketEmitter")
        .def_readwrite("Emitter", &FSocketEmitter::Emitter)
        .def_readwrite("SocketName", &FSocketEmitter::SocketName)
  ;
}