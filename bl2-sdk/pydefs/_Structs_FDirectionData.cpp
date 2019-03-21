#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FDirectionData()
{
    class_< FDirectionData >("FDirectionData", no_init)
        .def_readwrite("This", &FDirectionData::This)
        .def_readwrite("Left", &FDirectionData::Left)
        .def_readwrite("Right", &FDirectionData::Right)
        .def_readwrite("Up", &FDirectionData::Up)
        .def_readwrite("Down", &FDirectionData::Down)
  ;
}