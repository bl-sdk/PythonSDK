#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ARB_RadialImpulseActor(py::module &m)
{
    py::class_< ARB_RadialImpulseActor,  ARigidBodyBase   >(m, "ARB_RadialImpulseActor")
        .def_readwrite("RenderComponent", &ARB_RadialImpulseActor::RenderComponent)
        .def_readwrite("ImpulseComponent", &ARB_RadialImpulseActor::ImpulseComponent)
        .def_readwrite("ImpulseCount", &ARB_RadialImpulseActor::ImpulseCount)
        .def("eventReplicatedEvent", &ARB_RadialImpulseActor::eventReplicatedEvent)
        .def("OnToggle", &ARB_RadialImpulseActor::OnToggle)
          ;
}