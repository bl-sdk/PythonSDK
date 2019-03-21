#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FTouchingPawn()
{
    class_< FTouchingPawn >("FTouchingPawn", no_init)
        .def_readwrite("Pawn", &FTouchingPawn::Pawn)
        .def_readwrite("VolumesTouched", &FTouchingPawn::VolumesTouched)
  ;
}