#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FBeamLocationData()
{
    py::class_< FBeamLocationData >("FBeamLocationData")
        .def_readwrite("Actor", &FBeamLocationData::Actor)
        .def_readwrite("Socket", &FBeamLocationData::Socket)
        .def_readwrite("Offset", &FBeamLocationData::Offset)
        .def_readwrite("WorldBody", &FBeamLocationData::WorldBody)
        .def_readonly("UnknownData00", &FBeamLocationData::UnknownData00)
  ;
}