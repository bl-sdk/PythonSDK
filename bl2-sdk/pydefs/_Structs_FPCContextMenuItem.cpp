#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPCContextMenuItem(py::object m)
{
    py::class_< FPCContextMenuItem >(m, "FPCContextMenuItem")
        .def_readwrite("Caption", &FPCContextMenuItem::Caption)
        .def_readwrite("Action", &FPCContextMenuItem::Action)
  ;
}