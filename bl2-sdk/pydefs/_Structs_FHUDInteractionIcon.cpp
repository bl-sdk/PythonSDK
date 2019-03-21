#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FHUDInteractionIcon(py::object m)
{
    py::class_< FHUDInteractionIcon >(m, "FHUDInteractionIcon")
        .def_readonly("Icons", &FHUDInteractionIcon::Icons)
  ;
}