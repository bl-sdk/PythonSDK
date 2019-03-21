#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FImpactInfo(py::object m)
{
    py::class_< FImpactInfo >(m, "FImpactInfo")
        .def_readwrite("HitActor", &FImpactInfo::HitActor)
        .def_readwrite("HitLocation", &FImpactInfo::HitLocation)
        .def_readwrite("HitNormal", &FImpactInfo::HitNormal)
        .def_readwrite("RayDir", &FImpactInfo::RayDir)
        .def_readwrite("StartTrace", &FImpactInfo::StartTrace)
        .def_readwrite("HitInfo", &FImpactInfo::HitInfo)
        .def_readwrite("EndTrace", &FImpactInfo::EndTrace)
  ;
}