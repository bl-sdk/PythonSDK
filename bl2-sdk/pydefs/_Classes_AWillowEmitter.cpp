#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWillowEmitter(py::module &m)
{
    py::class_< AWillowEmitter,  AEmitter   >(m, "AWillowEmitter")
		.def_static("StaticClass", &AWillowEmitter::StaticClass, py::return_value_policy::reference)
        .def_readwrite("NetCullDistanceSquared", &AWillowEmitter::NetCullDistanceSquared)
        .def("SetOwnerNoSeeEmitter", &AWillowEmitter::SetOwnerNoSeeEmitter)
        .def("eventReplicatedEvent", &AWillowEmitter::eventReplicatedEvent)
          ;
}