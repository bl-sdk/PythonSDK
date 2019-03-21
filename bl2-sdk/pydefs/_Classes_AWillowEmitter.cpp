#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWillowEmitter()
{
    py::class_< AWillowEmitter,  AEmitter   >("AWillowEmitter")
        .def_readwrite("NetCullDistanceSquared", &AWillowEmitter::NetCullDistanceSquared)
        .def("StaticClass", &AWillowEmitter::StaticClass, py::return_value_policy::reference)
        .def("SetOwnerNoSeeEmitter", &AWillowEmitter::SetOwnerNoSeeEmitter)
        .def("eventReplicatedEvent", &AWillowEmitter::eventReplicatedEvent)
        .staticmethod("StaticClass")
  ;
}