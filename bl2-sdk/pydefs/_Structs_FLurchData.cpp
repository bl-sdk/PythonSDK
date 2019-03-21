#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FLurchData()
{
    class_< FLurchData >("FLurchData", no_init)
        .def_readwrite("StartTime", &FLurchData::StartTime)
        .def_readwrite("LocMagnitude", &FLurchData::LocMagnitude)
        .def_readwrite("RotMagnitude", &FLurchData::RotMagnitude)
        .def_readwrite("Duration", &FLurchData::Duration)
        .def_readwrite("FalloffRate", &FLurchData::FalloffRate)
  ;
}