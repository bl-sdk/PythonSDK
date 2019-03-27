#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FCombatPointDebugData(py::module &m)
{
    py::class_< FCombatPointDebugData >(m, "FCombatPointDebugData")
        .def_readwrite("Score", &FCombatPointDebugData::Score)
        .def_readwrite("Location", &FCombatPointDebugData::Location)
  ;
}