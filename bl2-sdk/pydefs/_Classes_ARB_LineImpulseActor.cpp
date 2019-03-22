#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ARB_LineImpulseActor(py::module &m)
{
    py::class_< ARB_LineImpulseActor,  ARigidBodyBase   >(m, "ARB_LineImpulseActor")
        .def_readwrite("ImpulseStrength", &ARB_LineImpulseActor::ImpulseStrength)
        .def_readwrite("ImpulseRange", &ARB_LineImpulseActor::ImpulseRange)
        .def_readwrite("Arrow", &ARB_LineImpulseActor::Arrow)
        .def_readwrite("ImpulseCount", &ARB_LineImpulseActor::ImpulseCount)
        .def("StaticClass", &ARB_LineImpulseActor::StaticClass, py::return_value_policy::reference)
        .def("eventReplicatedEvent", &ARB_LineImpulseActor::eventReplicatedEvent)
        .def("OnToggle", &ARB_LineImpulseActor::OnToggle)
        .def("FireLineImpulse", &ARB_LineImpulseActor::FireLineImpulse)
          ;
}