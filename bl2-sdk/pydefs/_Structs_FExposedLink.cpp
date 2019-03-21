#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FExposedLink()
{
    class_< FExposedLink >("FExposedLink", no_init)
        .def_readwrite("TargetActor", &FExposedLink::TargetActor)
        .def_readwrite("ExposedScale", &FExposedLink::ExposedScale)
  ;
}