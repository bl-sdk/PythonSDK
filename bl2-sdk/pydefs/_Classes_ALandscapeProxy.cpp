#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ALandscapeProxy()
{
    class_< ALandscapeProxy, bases< AInfo >  , boost::noncopyable>("ALandscapeProxy", no_init)
        .def_readwrite("LandscapeComponents", &ALandscapeProxy::LandscapeComponents)
        .def_readwrite("CollisionComponents", &ALandscapeProxy::CollisionComponents)
        .def_readonly("UnknownData00", &ALandscapeProxy::UnknownData00)
        .def_readonly("UnknownData01", &ALandscapeProxy::UnknownData01)
        .def_readwrite("StaticLightingResolution", &ALandscapeProxy::StaticLightingResolution)
        .def_readwrite("LandscapeActor", &ALandscapeProxy::LandscapeActor)
        .def("StaticClass", &ALandscapeProxy::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}