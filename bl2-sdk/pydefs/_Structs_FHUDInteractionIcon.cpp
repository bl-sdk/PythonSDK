#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FHUDInteractionIcon()
{
    py::class_< FHUDInteractionIcon >("FHUDInteractionIcon")
        .def_readonly("Icons", &FHUDInteractionIcon::Icons)
  ;
}