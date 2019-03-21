#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FLightValues()
{
    class_< FLightValues >("FLightValues", no_init)
        .def_readwrite("StartTime", &FLightValues::StartTime)
        .def_readwrite("Radius", &FLightValues::Radius)
        .def_readwrite("Brightness", &FLightValues::Brightness)
        .def_readwrite("LightColor", &FLightValues::LightColor)
  ;
}