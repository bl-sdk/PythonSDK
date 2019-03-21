#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FTierLayout()
{
    py::class_< FTierLayout >("FTierLayout")
        .def_readwrite("bCellIsOccupied", &FTierLayout::bCellIsOccupied)
  ;
}