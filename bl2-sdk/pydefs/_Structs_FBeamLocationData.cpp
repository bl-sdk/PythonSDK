#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FBeamLocationData()
{
    class_< FBeamLocationData >("FBeamLocationData", no_init)
        .def_readwrite("Actor", &FBeamLocationData::Actor)
        .def_readwrite("Socket", &FBeamLocationData::Socket)
        .def_readwrite("Offset", &FBeamLocationData::Offset)
        .def_readwrite("WorldBody", &FBeamLocationData::WorldBody)
        .def_readonly("UnknownData00", &FBeamLocationData::UnknownData00)
  ;
}