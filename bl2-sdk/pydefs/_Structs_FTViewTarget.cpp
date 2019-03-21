#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FTViewTarget()
{
    class_< FTViewTarget >("FTViewTarget", no_init)
        .def_readwrite("Target", &FTViewTarget::Target)
        .def_readwrite("Controller", &FTViewTarget::Controller)
        .def_readwrite("POV", &FTViewTarget::POV)
        .def_readwrite("AspectRatio", &FTViewTarget::AspectRatio)
        .def_readwrite("PRI", &FTViewTarget::PRI)
  ;
}