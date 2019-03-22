#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AExponentialHeightFog(py::module &m)
{
    py::class_< AExponentialHeightFog,  AInfo   >(m, "AExponentialHeightFog")
        .def_readwrite("Component", &AExponentialHeightFog::Component)
        .def("OnToggle", &AExponentialHeightFog::OnToggle)
        .def("eventReplicatedEvent", &AExponentialHeightFog::eventReplicatedEvent)
        .def("eventPostBeginPlay", &AExponentialHeightFog::eventPostBeginPlay)
          ;
}