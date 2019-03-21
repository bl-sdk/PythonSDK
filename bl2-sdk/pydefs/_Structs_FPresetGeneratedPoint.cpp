#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FPresetGeneratedPoint()
{
    class_< FPresetGeneratedPoint >("FPresetGeneratedPoint", no_init)
        .def_readwrite("KeyIn", &FPresetGeneratedPoint::KeyIn)
        .def_readwrite("KeyOut", &FPresetGeneratedPoint::KeyOut)
        .def_readwrite("TangentIn", &FPresetGeneratedPoint::TangentIn)
        .def_readwrite("TangentOut", &FPresetGeneratedPoint::TangentOut)
        .def_readwrite("IntepMode", &FPresetGeneratedPoint::IntepMode)
  ;
}