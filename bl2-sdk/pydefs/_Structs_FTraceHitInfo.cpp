#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FTraceHitInfo()
{
    class_< FTraceHitInfo >("FTraceHitInfo", no_init)
        .def_readwrite("Material", &FTraceHitInfo::Material)
        .def_readwrite("PhysMaterial", &FTraceHitInfo::PhysMaterial)
        .def_readwrite("Item", &FTraceHitInfo::Item)
        .def_readwrite("LevelIndex", &FTraceHitInfo::LevelIndex)
        .def_readwrite("BoneName", &FTraceHitInfo::BoneName)
        .def_readwrite("HitComponent", &FTraceHitInfo::HitComponent)
  ;
}