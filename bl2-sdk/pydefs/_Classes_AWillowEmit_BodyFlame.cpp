#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWillowEmit_BodyFlame(py::object m)
{
    py::class_< AWillowEmit_BodyFlame,  AWillowReplicatedEmitter   >(m, "AWillowEmit_BodyFlame")
        .def_readwrite("BoneName", &AWillowEmit_HitEffect::BoneName)
        .def("StaticClass", &AWillowEmit_BodyFlame::StaticClass, py::return_value_policy::reference)
        .def("AttachTo", &AWillowEmit_HitEffect::AttachTo)
        .def("eventReplicatedEvent", &AWillowEmit_HitEffect::eventReplicatedEvent)
          ;
}