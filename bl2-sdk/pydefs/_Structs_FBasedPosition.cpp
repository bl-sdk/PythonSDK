#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FBasedPosition()
{
    class_< FBasedPosition >("FBasedPosition", no_init)
        .def_readwrite("Base", &FBasedPosition::Base)
        .def_readwrite("Position", &FBasedPosition::Position)
        .def_readwrite("CachedBaseLocation", &FBasedPosition::CachedBaseLocation)
        .def_readwrite("CachedBaseRotation", &FBasedPosition::CachedBaseRotation)
        .def_readwrite("CachedTransPosition", &FBasedPosition::CachedTransPosition)
  ;
}