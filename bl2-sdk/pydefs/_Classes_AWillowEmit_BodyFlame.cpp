#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWillowEmit_BodyFlame(py::module &m)
{
    py::class_< AWillowEmit_BodyFlame,  AWillowReplicatedEmitter   >(m, "AWillowEmit_BodyFlame")
		.def_static("StaticClass", &AWillowEmit_BodyFlame::StaticClass, py::return_value_policy::reference)
        .def_readwrite("BoneName", &AWillowEmit_HitEffect::BoneName)
        .def("AttachTo", &AWillowEmit_HitEffect::AttachTo)
        .def("eventReplicatedEvent", &AWillowEmit_HitEffect::eventReplicatedEvent)
          ;
}