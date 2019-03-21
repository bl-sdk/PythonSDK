#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FDirChangeRateRange(py::object m)
{
    py::class_< FDirChangeRateRange >(m, "FDirChangeRateRange")
        .def_readwrite("DirDegreesPerSecond", &FDirChangeRateRange::DirDegreesPerSecond)
        .def_readwrite("SpeedRange", &FDirChangeRateRange::SpeedRange)
  ;
}