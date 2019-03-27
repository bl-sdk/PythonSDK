#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FTierLayout(py::module &m)
{
    py::class_< FTierLayout >(m, "FTierLayout")
        .def_readwrite("bCellIsOccupied", &FTierLayout::bCellIsOccupied)
  ;
}