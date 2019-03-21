#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AProximityActor(py::object m)
{
    py::class_< AProximityActor,  AActor   >(m, "AProximityActor")
        .def_readwrite("ProximityRadius", &AProximityActor::ProximityRadius)
        .def_readwrite("ProximityHeight", &AProximityActor::ProximityHeight)
        .def_readwrite("ProximityCylinder", &AProximityActor::ProximityCylinder)
        .def("StaticClass", &AProximityActor::StaticClass, py::return_value_policy::reference)
        .def("eventTouch", &AProximityActor::eventTouch)
        .def("SetProximitySize", &AProximityActor::SetProximitySize)
          ;
}