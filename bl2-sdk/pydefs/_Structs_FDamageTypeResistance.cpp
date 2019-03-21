#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FDamageTypeResistance(py::object m)
{
    py::class_< FDamageTypeResistance >(m, "FDamageTypeResistance")
        .def_readwrite("ResistanceToImpact", &FDamageTypeResistance::ResistanceToImpact)
        .def_readwrite("ResistanceToStatusEffect", &FDamageTypeResistance::ResistanceToStatusEffect)
  ;
}