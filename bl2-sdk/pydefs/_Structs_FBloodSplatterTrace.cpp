#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FBloodSplatterTrace(py::module &m)
{
    py::class_< FBloodSplatterTrace >(m, "FBloodSplatterTrace")
        .def_readwrite("HitRegion", &FBloodSplatterTrace::HitRegion)
        .def_readwrite("HitLocation", &FBloodSplatterTrace::HitLocation)
        .def_readwrite("Momentum", &FBloodSplatterTrace::Momentum)
        .def_readwrite("DamageSeverityPercent", &FBloodSplatterTrace::DamageSeverityPercent)
  ;
}