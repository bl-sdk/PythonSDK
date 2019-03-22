#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWillowEmit_HitEffect(py::module &m)
{
    py::class_< AWillowEmit_HitEffect,  AWillowReplicatedEmitter   >(m, "AWillowEmit_HitEffect")
        .def_readwrite("BoneName", &AWillowEmit_HitEffect::BoneName)
        .def("StaticClass", &AWillowEmit_HitEffect::StaticClass, py::return_value_policy::reference)
        .def("AttachTo", &AWillowEmit_HitEffect::AttachTo)
        .def("eventReplicatedEvent", &AWillowEmit_HitEffect::eventReplicatedEvent)
          ;
}