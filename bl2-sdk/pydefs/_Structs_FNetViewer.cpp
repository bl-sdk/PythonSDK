#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FNetViewer()
{
    py::class_< FNetViewer >("FNetViewer")
        .def_readwrite("InViewer", &FNetViewer::InViewer)
        .def_readwrite("Viewer", &FNetViewer::Viewer)
        .def_readwrite("ViewLocation", &FNetViewer::ViewLocation)
        .def_readwrite("ViewDir", &FNetViewer::ViewDir)
  ;
}