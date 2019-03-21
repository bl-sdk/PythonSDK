#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ALandscapeProxy(py::object m)
{
    py::class_< ALandscapeProxy,  AInfo   >(m, "ALandscapeProxy")
        .def_readwrite("LandscapeComponents", &ALandscapeProxy::LandscapeComponents)
        .def_readwrite("CollisionComponents", &ALandscapeProxy::CollisionComponents)
        .def_readonly("UnknownData00", &ALandscapeProxy::UnknownData00)
        .def_readonly("UnknownData01", &ALandscapeProxy::UnknownData01)
        .def_readwrite("StaticLightingResolution", &ALandscapeProxy::StaticLightingResolution)
        .def_readwrite("LandscapeActor", &ALandscapeProxy::LandscapeActor)
        .def("StaticClass", &ALandscapeProxy::StaticClass, py::return_value_policy::reference)
          ;
}