#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FTimePosition()
{
    class_< FTimePosition >("FTimePosition", no_init)
        .def_readwrite("Position", &FTimePosition::Position)
        .def_readwrite("Time", &FTimePosition::Time)
  ;
}