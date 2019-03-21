#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSlotMoveRef()
{
    py::class_< FSlotMoveRef >("FSlotMoveRef")
        .def_readwrite("Poly", &FSlotMoveRef::Poly)
        .def_readwrite("Dest", &FSlotMoveRef::Dest)
        .def_readwrite("Direction", &FSlotMoveRef::Direction)
  ;
}