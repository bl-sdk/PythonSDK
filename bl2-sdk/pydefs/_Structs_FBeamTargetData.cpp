#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FBeamTargetData(py::module &m)
{
    py::class_< FBeamTargetData >(m, "FBeamTargetData")
        .def_readwrite("TargetName", &FBeamTargetData::TargetName)
        .def_readwrite("TargetPercentage", &FBeamTargetData::TargetPercentage)
  ;
}