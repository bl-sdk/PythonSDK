#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FFlag()
{
    class_< FFlag >("FFlag", no_init)
        .def_readwrite("Value", &FFlag::Value)
        .def_readwrite("Raised", &FFlag::Raised)
        .def_readwrite("Lowered", &FFlag::Lowered)
        .def_readwrite("Padding", &FFlag::Padding)
        .def_readwrite("RaisedTime", &FFlag::RaisedTime)
        .def_readwrite("LoweredTime", &FFlag::LoweredTime)
        .def_readwrite("Duration", &FFlag::Duration)
  ;
}