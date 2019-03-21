#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSkelControlListHead()
{
    py::class_< FSkelControlListHead >("FSkelControlListHead")
        .def_readwrite("BoneName", &FSkelControlListHead::BoneName)
        .def_readwrite("ControlHead", &FSkelControlListHead::ControlHead)
  ;
}