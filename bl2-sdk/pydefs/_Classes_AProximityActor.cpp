#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AProximityActor(py::module &m)
{
    py::class_< AProximityActor,  AActor   >(m, "AProximityActor")
        .def_readwrite("ProximityRadius", &AProximityActor::ProximityRadius)
        .def_readwrite("ProximityHeight", &AProximityActor::ProximityHeight)
        .def_readwrite("ProximityCylinder", &AProximityActor::ProximityCylinder)
        .def("eventTouch", &AProximityActor::eventTouch)
        .def("SetProximitySize", &AProximityActor::SetProximitySize)
          ;
}