#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FTViewTarget(py::module &m)
{
    py::class_< FTViewTarget >(m, "FTViewTarget")
        .def_readwrite("Target", &FTViewTarget::Target)
        .def_readwrite("Controller", &FTViewTarget::Controller)
        .def_readwrite("POV", &FTViewTarget::POV)
        .def_readwrite("AspectRatio", &FTViewTarget::AspectRatio)
        .def_readwrite("PRI", &FTViewTarget::PRI)
  ;
}