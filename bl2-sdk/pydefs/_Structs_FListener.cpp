#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FListener()
{
    class_< FListener >("FListener", no_init)
        .def_readwrite("PortalVolume", &FListener::PortalVolume)
        .def_readwrite("Location", &FListener::Location)
        .def_readwrite("Up", &FListener::Up)
        .def_readwrite("Right", &FListener::Right)
        .def_readwrite("Front", &FListener::Front)
  ;
}