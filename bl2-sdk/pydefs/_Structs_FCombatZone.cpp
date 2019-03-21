#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FCombatZone()
{
    py::class_< FCombatZone >("FCombatZone")
        .def_readwrite("Index", &FCombatZone::Index)
        .def_readwrite("Bounds", &FCombatZone::Bounds)
  ;
}