#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FBeamTargetData()
{
    py::class_< FBeamTargetData >("FBeamTargetData")
        .def_readwrite("TargetName", &FBeamTargetData::TargetName)
        .def_readwrite("TargetPercentage", &FBeamTargetData::TargetPercentage)
  ;
}