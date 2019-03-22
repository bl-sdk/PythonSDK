#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ALandscape(py::module &m)
{
    py::class_< ALandscape,  ALandscapeProxy   >(m, "ALandscape")
        .def_readwrite("LandscapeMaterial", &ALandscape::LandscapeMaterial)
        .def_readwrite("MaxLODLevel", &ALandscape::MaxLODLevel)
        .def_readwrite("LayerNames", &ALandscape::LayerNames)
        .def_readwrite("LayerInfos", &ALandscape::LayerInfos)
        .def_readwrite("StreamingDistanceMultiplier", &ALandscape::StreamingDistanceMultiplier)
        .def_readwrite("DataInterface", &ALandscape::DataInterface)
        .def_readwrite("ComponentSizeQuads", &ALandscape::ComponentSizeQuads)
        .def_readwrite("SubsectionSizeQuads", &ALandscape::SubsectionSizeQuads)
        .def_readwrite("NumSubsections", &ALandscape::NumSubsections)
        .def_readwrite("Proxies", &ALandscape::Proxies)
          ;
}