#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FAccelStateData(py::object m)
{
    py::class_< FAccelStateData >(m, "FAccelStateData")
        .def_readwrite("Warmup", &FAccelStateData::Warmup)
        .def_readwrite("CurrentSpeed", &FAccelStateData::CurrentSpeed)
        .def_readwrite("Direction", &FAccelStateData::Direction)
  ;
}