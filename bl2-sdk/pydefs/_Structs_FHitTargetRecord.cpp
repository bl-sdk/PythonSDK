#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FHitTargetRecord()
{
    class_< FHitTargetRecord >("FHitTargetRecord", no_init)
        .def_readwrite("vecHitLoc", &FHitTargetRecord::vecHitLoc)
        .def_readwrite("flDamage", &FHitTargetRecord::flDamage)
        .def_readwrite("flHitTime", &FHitTargetRecord::flHitTime)
  ;
}