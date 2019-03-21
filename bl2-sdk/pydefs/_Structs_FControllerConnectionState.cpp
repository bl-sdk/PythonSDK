#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FControllerConnectionState()
{
    class_< FControllerConnectionState >("FControllerConnectionState", no_init)
        .def_readwrite("bIsControllerConnected", &FControllerConnectionState::bIsControllerConnected)
        .def_readwrite("bLastIsControllerConnected", &FControllerConnectionState::bLastIsControllerConnected)
  ;
}