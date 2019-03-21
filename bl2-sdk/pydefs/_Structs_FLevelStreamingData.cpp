#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FLevelStreamingData(py::object m)
{
    py::class_< FLevelStreamingData >(m, "FLevelStreamingData")
        .def_readwrite("Level", &FLevelStreamingData::Level)
  ;
}