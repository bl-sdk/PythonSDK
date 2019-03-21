#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AFluidInfluenceActor(py::object m)
{
    py::class_< AFluidInfluenceActor,  AActor   >(m, "AFluidInfluenceActor")
        .def_readwrite("FlowDirection", &AFluidInfluenceActor::FlowDirection)
        .def_readwrite("Sprite", &AFluidInfluenceActor::Sprite)
        .def_readwrite("InfluenceComponent", &AFluidInfluenceActor::InfluenceComponent)
        .def("StaticClass", &AFluidInfluenceActor::StaticClass, py::return_value_policy::reference)
        .def("eventReplicatedEvent", &AFluidInfluenceActor::eventReplicatedEvent)
        .def("OnToggle", &AFluidInfluenceActor::OnToggle)
          ;
}