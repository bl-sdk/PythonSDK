#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FBeamLocationData(py::object m)
{
    py::class_< FBeamLocationData >(m, "FBeamLocationData")
        .def_readwrite("Actor", &FBeamLocationData::Actor)
        .def_readwrite("Socket", &FBeamLocationData::Socket)
        .def_readwrite("Offset", &FBeamLocationData::Offset)
        .def_readwrite("WorldBody", &FBeamLocationData::WorldBody)
        .def_readonly("UnknownData00", &FBeamLocationData::UnknownData00)
  ;
}