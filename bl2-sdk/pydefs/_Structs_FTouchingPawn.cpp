#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FTouchingPawn(py::module &m)
{
    py::class_< FTouchingPawn >(m, "FTouchingPawn")
        .def_readwrite("Pawn", &FTouchingPawn::Pawn)
        .def_readwrite("VolumesTouched", &FTouchingPawn::VolumesTouched)
  ;
}