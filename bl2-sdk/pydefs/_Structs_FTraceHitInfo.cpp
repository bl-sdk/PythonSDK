#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FTraceHitInfo()
{
    py::class_< FTraceHitInfo >("FTraceHitInfo")
        .def_readwrite("Material", &FTraceHitInfo::Material)
        .def_readwrite("PhysMaterial", &FTraceHitInfo::PhysMaterial)
        .def_readwrite("Item", &FTraceHitInfo::Item)
        .def_readwrite("LevelIndex", &FTraceHitInfo::LevelIndex)
        .def_readwrite("BoneName", &FTraceHitInfo::BoneName)
        .def_readwrite("HitComponent", &FTraceHitInfo::HitComponent)
  ;
}