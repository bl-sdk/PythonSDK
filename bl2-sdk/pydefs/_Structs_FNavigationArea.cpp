#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FNavigationArea()
{
    py::class_< FNavigationArea >("FNavigationArea")
        .def_readwrite("AreaName", &FNavigationArea::AreaName)
        .def_readwrite("AreaColor", &FNavigationArea::AreaColor)
  ;
}