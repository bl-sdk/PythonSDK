#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FDebugExposure()
{
    class_< FDebugExposure >("FDebugExposure", no_init)
        .def_readwrite("TargetExposure", &FDebugExposure::TargetExposure)
        .def_readwrite("MyExposure", &FDebugExposure::MyExposure)
        .def_readwrite("InWorldLocation", &FDebugExposure::InWorldLocation)
  ;
}