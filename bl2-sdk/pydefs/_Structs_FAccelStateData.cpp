#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FAccelStateData()
{
    py::class_< FAccelStateData >("FAccelStateData")
        .def_readwrite("Warmup", &FAccelStateData::Warmup)
        .def_readwrite("CurrentSpeed", &FAccelStateData::CurrentSpeed)
        .def_readwrite("Direction", &FAccelStateData::Direction)
  ;
}