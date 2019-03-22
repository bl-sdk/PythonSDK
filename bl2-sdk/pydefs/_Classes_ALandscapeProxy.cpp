#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ALandscapeProxy(py::module &m)
{
    py::class_< ALandscapeProxy,  AInfo   >(m, "ALandscapeProxy")
        .def_readwrite("LandscapeComponents", &ALandscapeProxy::LandscapeComponents)
        .def_readwrite("CollisionComponents", &ALandscapeProxy::CollisionComponents)
        .def_readwrite("StaticLightingResolution", &ALandscapeProxy::StaticLightingResolution)
        .def_readwrite("LandscapeActor", &ALandscapeProxy::LandscapeActor)
          ;
}