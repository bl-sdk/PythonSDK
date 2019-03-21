#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FHitTargetRecord()
{
    py::class_< FHitTargetRecord >("FHitTargetRecord")
        .def_readwrite("vecHitLoc", &FHitTargetRecord::vecHitLoc)
        .def_readwrite("flDamage", &FHitTargetRecord::flDamage)
        .def_readwrite("flHitTime", &FHitTargetRecord::flHitTime)
  ;
}