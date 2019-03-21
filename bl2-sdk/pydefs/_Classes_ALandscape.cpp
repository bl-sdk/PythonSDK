#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ALandscape()
{
    class_< ALandscape, bases< ALandscapeProxy >  , boost::noncopyable>("ALandscape", no_init)
        .def_readwrite("LandscapeMaterial", &ALandscape::LandscapeMaterial)
        .def_readwrite("MaxLODLevel", &ALandscape::MaxLODLevel)
        .def_readwrite("LayerNames", &ALandscape::LayerNames)
        .def_readwrite("LayerInfos", &ALandscape::LayerInfos)
        .def_readwrite("StreamingDistanceMultiplier", &ALandscape::StreamingDistanceMultiplier)
        .def_readonly("UnknownData00", &ALandscape::UnknownData00)
        .def_readonly("UnknownData01", &ALandscape::UnknownData01)
        .def_readonly("UnknownData02", &ALandscape::UnknownData02)
        .def_readwrite("DataInterface", &ALandscape::DataInterface)
        .def_readwrite("ComponentSizeQuads", &ALandscape::ComponentSizeQuads)
        .def_readwrite("SubsectionSizeQuads", &ALandscape::SubsectionSizeQuads)
        .def_readwrite("NumSubsections", &ALandscape::NumSubsections)
        .def_readwrite("Proxies", &ALandscape::Proxies)
        .def("StaticClass", &ALandscape::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}