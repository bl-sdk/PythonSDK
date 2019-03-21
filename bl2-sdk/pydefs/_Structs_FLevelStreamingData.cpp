#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FLevelStreamingData()
{
    py::class_< FLevelStreamingData >("FLevelStreamingData")
        .def_readwrite("Level", &FLevelStreamingData::Level)
  ;
}