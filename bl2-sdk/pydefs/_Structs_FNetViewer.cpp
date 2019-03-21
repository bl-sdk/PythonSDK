#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FNetViewer()
{
    class_< FNetViewer >("FNetViewer", no_init)
        .def_readwrite("InViewer", &FNetViewer::InViewer)
        .def_readwrite("Viewer", &FNetViewer::Viewer)
        .def_readwrite("ViewLocation", &FNetViewer::ViewLocation)
        .def_readwrite("ViewDir", &FNetViewer::ViewDir)
  ;
}