#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FDamageOnlyOnceData()
{
    class_< FDamageOnlyOnceData >("FDamageOnlyOnceData", no_init)
        .def_readwrite("UniqueId", &FDamageOnlyOnceData::UniqueId)
        .def_readwrite("HurtActor", &FDamageOnlyOnceData::HurtActor)
  ;
}