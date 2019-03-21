#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FDamageTypeResistance()
{
    py::class_< FDamageTypeResistance >("FDamageTypeResistance")
        .def_readwrite("ResistanceToImpact", &FDamageTypeResistance::ResistanceToImpact)
        .def_readwrite("ResistanceToStatusEffect", &FDamageTypeResistance::ResistanceToStatusEffect)
  ;
}