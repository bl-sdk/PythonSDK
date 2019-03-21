#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ALandscape(py::object m)
{
    py::class_< ALandscape,  ALandscapeProxy   >(m, "ALandscape")
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
        .def("StaticClass", &ALandscape::StaticClass, py::return_value_policy::reference)
          ;
}