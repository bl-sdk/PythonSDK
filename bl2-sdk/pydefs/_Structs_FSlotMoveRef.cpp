#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FSlotMoveRef()
{
    class_< FSlotMoveRef >("FSlotMoveRef", no_init)
        .def_readwrite("Poly", &FSlotMoveRef::Poly)
        .def_readwrite("Dest", &FSlotMoveRef::Dest)
        .def_readwrite("Direction", &FSlotMoveRef::Direction)
  ;
}