#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FDamageOnlyOnceData()
{
    py::class_< FDamageOnlyOnceData >("FDamageOnlyOnceData")
        .def_readwrite("UniqueId", &FDamageOnlyOnceData::UniqueId)
        .def_readwrite("HurtActor", &FDamageOnlyOnceData::HurtActor)
  ;
}